/*
** EPITECH PROJECT, 2020
** Arcade
** File description:
** Graphical
*/

#include "ecs.hpp"
#include "Graphical.hpp"

//AGraphical
LIBTYPE Graphical::AGraphical::getType()
{

}

ecs::component::ARenderable Graphical::AGraphical::createRenderable(std::vector<std::string> paths, bool isAnimated = false)
{

}

ecs::IAnimation Graphical::AGraphical::createAnimation(int index, int frame, int speed)
{

}

//Animation
int Graphical::Animation::frame()
{

}

int Graphical::Animation::speed()
{
    
}

int Graphical::Animation::index()
{
    
}

//sfml
//sfml->AGraphical
ecs::component::ARenderable Graphical::sfml::AGraphical::createRenderable(std::vector<std::string> paths, bool isAnimated = false)
{

}

ecs::IAnimation Graphical::sfml::AGraphical::createAnimation(int index, int frame, int speed)
{

}

//sfml->Renderable
void Graphical::sfml::component::Renderable::setTexture(std::string name)
{
    
}

void Graphical::sfml::component::Renderable::setAnimation(std::string animationName, ecs::IAnimation animation)
{

}

std::string Graphical::sfml::component::Renderable::getCurrentAnimation()
{

}

void Graphical::sfml::component::Renderable::useAnimation(std::string animationName)
{

}

//sfml->Graphics
void Graphical::sfml::system::Graphics::init()
{

}

void Graphical::sfml::system::Graphics::update()
{
    
}

void Graphical::sfml::system::Graphics::render()
{
    
}

//ncurses
//ncurses->AGraphical
ecs::component::ARenderable Graphical::ncurses::AGraphical::createRenderable(std::vector<std::string> paths, bool isAnimated = false)
{

}

ecs::IAnimation Graphical::ncurses::AGraphical::createAnimation(int index, int frame, int speed)
{

}

//ncurses->Renderable
void Graphical::ncurses::component::Renderable::setAnimation(std::string animationName, ecs::IAnimation animation)
{

}

std::string Graphical::ncurses::component::Renderable::getCurrentAnimation()
{

}

void Graphical::ncurses::component::Renderable::useAnimation(std::string animationName)
{

}

//ncurses->Graphics
void Graphical::ncurses::system::Graphics::init()
{

}

void Graphical::ncurses::system::Graphics::update()
{
    
}

void Graphical::ncurses::system::Graphics::render()
{
    
}

//libcaca
//libcaca->AGraphical
ecs::component::ARenderable Graphical::libcaca::AGraphical::createRenderable(std::vector<std::string> paths, bool isAnimated = false)
{

}

ecs::IAnimation Graphical::libcaca::AGraphical::createAnimation(int index, int frame, int speed)
{

}

//libcaca->Renderable
void Graphical::libcaca::component::Renderable::setAnimation(std::string animationName, ecs::IAnimation animation)
{

}

std::string Graphical::libcaca::component::Renderable::getCurrentAnimation()
{

}

void Graphical::libcaca::component::Renderable::useAnimation(std::string animationName)
{

}

//libcaca->Graphics
void Graphical::libcaca::system::Graphics::init()
{

}

void Graphical::libcaca::system::Graphics::update()
{
    
}

void Graphical::libcaca::system::Graphics::render()
{
    
}