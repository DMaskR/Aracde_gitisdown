/*
** EPITECH PROJECT, 2020
** OOP_arcade_2019
** File description:
** Game
*/

#ifndef GAME_HPP_
#define GAME_HPP_

#include "ecs.hpp"
#include "graphical.hpp"

namespace game{
    class IGame {
        public:
            IGame();
            virtual ~IGame() = 0;
    };

    class AGame : public IGame {
        public:
            AGame(Universe &universe, IGraphical &graph);
            virtual ~AGame() = 0;
    };

    namespace nibbler{
        class AI : public AAI{
            public:
                AI();
                ~AI();
                void init() override;
                void update() override;
                void render() override;
        };

        class Follow : public AFollow {
            public:
                Follow();
                ~Follow();
                void init() override;
                void update() override;
                void render() override;
        };

        class Game : public AGame{
            public:
                Game(Universe &universe, IGraphical &graph),
                ~Game();
        };

        class Player {
            public:
                Player();
                ~Player();
                void init() override;
                void update() override;
                void render() override;
        };
    }

    namespace pacman {
        class AI : public AAI{
            public:
                AI();
                ~AI();
                void init() override;
                void update() override;
                void render() override;
        };

        class Follow : public AFollow {
            public:
                Follow();
                ~Follow();
                void init() override;
                void update() override;
                void render() override;
        };

        class Game : public AGame{
            public:
                Game(Universe &universe, IGraphical &graph),
                ~Game();
        };
        class Player {
            public:
                Player();
                ~Player();
                void init() override;
                void update() override;
                void render() override;
        };
    }
}

#endif /* !GAME_HPP_ */
