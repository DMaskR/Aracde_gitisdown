/*
** EPITECH PROJECT, 2020
** Arcade
** File description:
** graphical
*/

#ifndef GRAPHICAL_HPP_
#define GRAPHICAL_HPP_

#include <iostream>
#include <vector>
#include "ecs.hpp"

namespace Graphical {
    class IGraphical {
        public:
            virtual ~IGraphical() = 0;
            virtual LIBTYPE getType() = 0;
            virtual ecs::component::ARenderable createRenderable(std::vector<std::string> paths, bool isAnimated = false) = 0;
            virtual ecs::IAnimation createAnimation(int index, int frame, int speed) = 0;
    };

    class AGraphical : public IGraphical {
        public:
            AGraphical(LIBTYPE type, Universe& universe);
            ~AGraphical() override;
            LIBTYPE getType() override;
            ecs::component::ARenderable createRenderable(std::vector<std::string> paths, bool isAnimated = false) override = 0;
            ecs::IAnimation createAnimation(int index, int frame, int speed) override = 0;
    };

    class Animation : public IAnimation {
        public:
            Animation(int index, int frame, int speed);
            ~Animation();
            int frame() const override;
            int speed() const override;
            int index() const override;
    };

    namespace sfml {
        class Graphical : public AGraphical {
            public:
                Graphical(Universe& universe);
                ~Graphical();
                LIBTYPE getType() override;
                ecs::component::ARenderable createRenderable(std::vector<std::string> paths, bool isAnimated = false) override;
                ecs::IAnimation createAnimation(int index, int frame, int speed) override;
        };

        namespace component {
            class Renderable : public ecs::component::ARenderable {
                public:
                    Sprite(std::string name, bool isAnimated = false);
                    ~Sprite();
                    void setTexture(std::string name) override;
                    void setAnimation(std::string animationName, ecs::IAnimation animation) override;
                    std::string getCurrentAnimation() override;
                    void useAnimation(std::string animationName) override;
            };
        }

        namespace system {
            class Graphics : public ecs::system::AGraphics {
                public:
                    Graphics();
                    ~Graphics();
                    void init() override;
                    void update() override;
                    void render() override;
            };
        }
    }

    namespace ncurses {
        class Graphical : public graphical::AGraphical {
            public:
                Graphical(Universe& universe);
                ~Graphical();
                LIBTYPE getType() override;
                ecs::component::ARenderable createRenderable(std::vector<std::string> paths, bool isAnimated = false) override;
                ecs::IAnimation createAnimation(int index, int frame, int speed) override;
        };

        namespace component{
            class Renderable : public ecs::component::ARenderable {
                public:
                    Sprite(std::string name, bool isAnimated = false);
                    ~Sprite();
                    void setAnimation(std::string animationName, ecs::IAnimation animation) override;
                    std::string getCurrentAnimation() override;
                    void useAnimation(std::string animationName) override;
            };
        }

        namespace system {
            class Graphics : public ecs::system::AGraphics {
                public:
                    Graphics();
                    ~Graphics();
                    void init() override;
                    void update() override;
                    void render() override;
            };
        }
    }

    namespace libcaca {
        class Graphical : public graphical::AGraphical {
            public:
                Graphical(Universe& universe);
                ~Graphical();
                LIBTYPE getType() override;
                ecs::component::ARenderable createRenderable(std::vector<std::string> paths, bool isAnimated = false) override;
                ecs::IAnimation createAnimation(int index, int frame, int speed) override;
        };

        namespace component{
            class Renderable : public ecs::component::ARenderable {
                public:
                    Sprite(std::string name, bool isAnimated = false);
                    ~Sprite();
                    void setAnimation(std::string animationName, ecs::IAnimation animation) override;
                    std::string getCurrentAnimation() override;
                    void useAnimation(std::string animationName) override;
            };
        }

        namespace system {
            class Graphics : public ecs::system::AGraphics {
                public:
                    Graphics();
                    ~Graphics();
                    void init() override;
                    void update() override;
                    void render() override;
            };
        }
    }
}

#endif /* !GRAPHICAL_HPP_ */
