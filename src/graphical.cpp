/*
** EPITECH PROJECT, 2020
** Arcade
** File description:
** Graphical
*/

#include "ecs.hpp"
#include "graphical.hpp"

//AGraphical
LIBTYPE graphical::AGraphical::getType()
{

}

ecs::component::ARenderable& graphical::AGraphical::createRenderable(std::vector<std::string> paths, bool isAnimated)
{

}

ecs::IAnimation& graphical::AGraphical::createAnimation(int index, int frame, int speed)
{

}

//Animation
int graphical::Animation::frame() const
{

}

int graphical::Animation::speed() const
{

}

int graphical::Animation::index() const
{

}

//sfml
//sfml->AGraphical
ecs::component::ARenderable& graphical::sfml::Graphical::createRenderable(std::vector<std::string> paths, bool isAnimated)
{

}

ecs::IAnimation& graphical::sfml::Graphical::createAnimation(int index, int frame, int speed)
{

}

//sfml->Renderable
void graphical::sfml::component::Renderable::setTexture(std::string name)
{

}

void graphical::sfml::component::Renderable::setAnimation(std::string animationName, ecs::IAnimation &animation)
{

}

std::string graphical::sfml::component::Renderable::getCurrentAnimation()
{

}

void graphical::sfml::component::Renderable::useAnimation(std::string animationName)
{

}

//sfml->Graphics
void graphical::sfml::system::Graphics::init()
{

}

void graphical::sfml::system::Graphics::update()
{

}

void graphical::sfml::system::Graphics::render()
{

}

//ncurses
//ncurses->AGraphical
ecs::component::ARenderable &graphical::ncurses::Graphical::createRenderable(std::vector<std::string> paths, bool isAnimated)
{

}

ecs::IAnimation &graphical::ncurses::Graphical::createAnimation(int index, int frame, int speed)
{

}

//ncurses->Renderable
void graphical::ncurses::component::Renderable::setAnimation(std::string animationName, ecs::IAnimation &animation)
{

}

std::string graphical::ncurses::component::Renderable::getCurrentAnimation()
{

}

void graphical::ncurses::component::Renderable::useAnimation(std::string animationName)
{

}

//ncurses->Graphics
void graphical::ncurses::system::Graphics::init()
{

}

void graphical::ncurses::system::Graphics::update()
{

}

void graphical::ncurses::system::Graphics::render()
{

}

//libcaca
//libcaca->AGraphical
ecs::component::ARenderable &graphical::libcaca::Graphical::createRenderable(std::vector<std::string> paths, bool isAnimated)
{

}

ecs::IAnimation &graphical::libcaca::Graphical::createAnimation(int index, int frame, int speed)
{

}

//libcaca->Renderable
void graphical::libcaca::component::Renderable::setAnimation(std::string animationName, ecs::IAnimation &animation)
{

}

std::string graphical::libcaca::component::Renderable::getCurrentAnimation()
{

}

void graphical::libcaca::component::Renderable::useAnimation(std::string animationName)
{

}

//libcaca->Graphics
void graphical::libcaca::system::Graphics::init()
{

}

void graphical::libcaca::system::Graphics::update()
{

}

void graphical::libcaca::system::Graphics::render()
{

}