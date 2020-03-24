/*
** EPITECH PROJECT, 2020
** Arcade
** File description:
** ecs
*/

#ifndef ECS_HPP_
#define ECS_HPP_

#include <iostream>
#include <vector>
#include <memory>
#include <set>
#include <map>
#include <bitset>

namespace ecs {

    class WorldManager;
    class World;
    class Entity;
    class AComponent;

    using ComponentID = std::size_t;
    using GroupID = std::string;

    inline ComponentID getNewComponentTypeID();
    template <typename T> inline ComponentID getComponentTypeID() noexcept;

    inline GroupID getNewGroupTypeID();
    inline GroupID getComponentTypeID(GroupID groupName) noexcept;

    constexpr std::size_t maxComponents = 32;
    constexpr std::size_t maxGroups = 64;

    using GroupBitset = std::bitset<maxGroups>;
    using ComponentBitSet = std::bitset<maxComponents>;
    using ComponentArray = std::array<AComponent*, maxComponents>;


    class Universe{
        public:
            Universe();
            ~Universe();
            void addWorldManager(WorldManager& world);
            void delWorldManager();

        protected:
            std::vector<std::reference_wrapper<WorldManager>> _managers;
    };

    class WorldManager :public Universe {
        public:
            WorldManager(World& _world);
            ~WorldManager();
            void addSystem(component::ASystem& system);
            void init();
            void update();
            void render();
        protected:
        World& _world;
        std::vector<std::reference_wrapper<component::ASystem>> _systems;


    };

    class World : public WorldManager{
        public:
            World();
            ~World();
            void refresh();
            void addToGroup(Entity &entity, GroupID group);
            template <typename ... Targs> std::vector<Entity *>& getEntities();
            Entity &addEntity();

        protected:
            std::map<GroupID, std::vector<Entity&>> _groups;
            std::vector<std::shared_ptr<Entity>> _entities;
    };

    class Entity : public World, public AComponent{
        public:
            Entity(World& world);
            bool isActive();
            void destroy();
            template <typename T> bool hasComponent();
            template <typename T, typename... Targs> bool hasComponent(TArgs&&... mArgs);
            template <typename T> T& getComponent();
            bool hasGroup(GroupID groupName);
            void addGroup(GroupID groupName);
            void delGroup(GroupID groupName);
        protected:
            World& _world;
            bool _active = true;
            std::set<std::unique_ptr<AComponent>> _components {};
            std::set<GroupID> _groups {};
            ComponentBitSet _componentBitSet;
            ComponentArray _componentArray;
            GroupBitset _groupBitSet;
    };

    class AComponent : public Entity {
        public:
            virtual ~AComponent() = 0;
        protected:
            Entity *_entity;
    };

    class IAnimation {
        public:
            virtual ~IAnimation() = 0;
            virtual int frame() const = 0;
            virtual int speed() const = 0;
            virtual int index() const = 0;
    };

    class Vector2d {
        public:
            int x;
            int y;
    };

    namespace component {
        class Transform : public AComponent{
            public:
                Vector2d position;
                Transform();
                ~Transform();
        };

        class Motion : public AComponent {
            public:
                Vector2d velocity;
                Vector2d acceleration;
                Motion();
                ~Motion();
        };

        class Size : public AComponent {
            public:
                int w;
                int h;
                Size();
                ~Size();
        };

        class Hitbox : public AComponent {
            public:
                int w;
                int h;
                Hitbox();
                ~Hitbox();
        };

        class ARenderable : public AComponent {
            public:
                ARenderable();
                virtual ~Renderable() = 0;
                virtual void setTexture(std::string name) = 0;
                virtual void setAnimation(std::string animationName, IAnimation animation) = 0;
                virtual std::string getCurrentAnimation() = 0;
                virtual void useAnimation(std::string animationName) = 0;
        };

        class Follow : public AComponent {
            public:
                Entity& followed;
                Follow(Entity& followed);
                ~Follow();
        };

        class AI : public AComponent {
            public:
                AI();
                ~AI();
        };

        class Input : public AComponent {
            public:
                Input();
                ~Input();
        };

        class ASystem : public WorldManager {
            public:
                virtual ~ASystem() = 0;
                virtual void init() = 0;
                virtual void update() = 0;
                virtual void render() = 0;
        };
    }

    namespace system {
        class Physics : public component::ASystem {
            public:
                Physics();
                ~Physics();
                void init() override;
                void update() override;
                void render() override;
        };

        class APlayer : public component::ASystem {
            public:
                APlayer();
                ~APlayer();
                void init() override;
                void update() override;
                void render() override;
        };

        class AAI : public component::ASystem {
            public:
                AAI();
                ~AAI();
                void init() override;
                void update() override;
                void render() override;
        };

        class AFollow : public component::ASystem {
            public:
                AFollow();
                ~AFollow();
                void init() override;
                void update() override;
                void render() override;
        };

        class Movement : public component::ASystem {
            public:
                Movement();
                ~Movement();
                void init() override;
                void update() override;
                void render() override;
        };

        class AGraphics : public component::ASystem {
            public:
                AGraphics();
                ~AGraphics();
                void init() override;
                void update() override;
                void render() override;
        };
    }
}

#endif /* !ECS_HPP_ */
