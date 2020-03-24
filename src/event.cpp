/*
** EPITECH PROJECT, 2020
** Arcade
** File description:
** event
*/

#include "event.hpp"

void event::AFunctionHandler::exec(Event* event)
{

}

void event::FunctionHandler::call(Event* event)
{

}


template<class T, class EventType>
void event::EventBus::subscribe(T * instance, void (T::*memberFunction)(EventType *))
{
    
}

template<typename EventType>
void event::EventBus::publish(EventType* event)
{

}