/*
** EPITECH PROJECT, 2020
** Arcade
** File description:
** ecs
*/

#include "ecs.hpp"

//add World to the Univers
void ecs::Universe::addWorldManager(WorldManager& world)
{
    this->_managers.push_back(world);
}

//delete world of the Univers
void ecs::Universe::delWorldManager()
{
    this->_managers.pop_back();
}

//add System to theWorldManager
void ecs::WorldManager::addSystem(ASystem& system)
{
    this->_systems.push_back(system);
}

//initialisation of all Systems
void ecs::WorldManager::init()
{

}

//update all Systems
void ecs::WorldManager::update()
{

}

void ecs::WorldManager::render()
{

}
//refresh all entities
void ecs::World::refresh()
{

}
//add entity to group
void ecs::World::addToGroup(ecs::Entity &entity, GroupID group)
{
}

//get entities
template <typename ... TArgs> std::vector<ecs::Entity &>& ecs::World::getEntities()
{

}
// create and add entity to the current world
ecs::Entity& ecs::World::addEntity()
{

}

// destroy last entities (pop_back)
void ecs::Entity::destroy()
{

}
// check status of all entities in the world
bool ecs::Entity::isActive()
{

}
//
template <typename T> bool ecs::Entity::hasComponent()
{

}
//
template <typename T, typename... TArgs> bool ecs::Entity::hasComponent(TArgs&&... mArgs)
{

}
//get Component
template <typename T> T& ecs::Entity::getComponent()
{

}

bool ecs::Entity::hasGroup(GroupID groupName)
{

}

void ecs::Entity::addGroup(GroupID groupName)
{

}

void ecs::Entity::delGroup(GroupID groupName)
{

}

//system
//system->Physics
void ecs::system::Physics::init()
{

}

void ecs::system::Physics::update()
{

}

void ecs::system::Physics::render()
{

}

//system->ASystem
void ecs::ASystem::init()
{

}

void ecs::ASystem::update()
{

}

void ecs::ASystem::render()
{

}

//system->AAI
void ecs::system::AAI::init()
{

}

void ecs::system::AAI::update()
{

}

void ecs::system::AAI::render()
{

}

//system->AFollow
void ecs::system::AFollow::init()
{

}

void ecs::system::AFollow::update()
{

}

void ecs::system::AFollow::render()
{

}

//system->Movement
void ecs::system::Movement::init()
{

}

void ecs::system::Movement::update()
{

}

void ecs::system::Movement::render()
{

}

//system->AGraphics
void ecs::system::AGraphics::init()
{

}

void ecs::system::AGraphics::update()
{

}

void ecs::system::AGraphics::render()
{

}