/*
** EPITECH PROJECT, 2020
** Arcade
** File description:
** event
*/

#ifndef EVENT_HPP_
#define EVENT_HPP_

#include <iostream>

namespace event {
    class Event {
        public:
            Event();
            ~Event();
    };

    class InputEvent() : public event::Event {};

    class CollisionEvent() : public event::Event {};

    class AFunctionHandler {
        public:
            virtual void call(Event* event) = 0;
            void exec(Event* event);
    };

    template<class T, class EventType>
    class FunctionHandler : public event::AFunctionHandler {
        typedef void (T::*MemberFunction)(EventType*);
        public:
            FunctionHandler(T* instance, MemberFunction memberFunction);
            void call(Event* event) override;
    };

    class EventBus {
        public:
            template<class T, class EventType> void subscribe(T * instance, void (T::*memberFunction)(EventType *));
            template<typename EventType> void publish(EventType* event);
    };
}

#endif /* !EVENT_HPP_ */
