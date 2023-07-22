/**
 * @brief This file is the implementation of the event.
 * @note Only LiteLoader itself should include this file in the source code of event.
 */

#pragma once

#include "llapi/LLAPI.h"
#include "llapi/event/Event.h"
#include "llapi/event/EventManager.h"
#include "llapi/utils/StringHelper.h"

#define LL_EVENT_IMPL(EventType)                                                                                       \
    namespace ll::event {                                                                                              \
    template class Event<EventType>;                                                                                   \
    template class Listener<EventType>;                                                                                \
    template class EventManager<EventType>;                                                                            \
    }

namespace ll::event {

template <typename EventType>
std::weak_ptr<Listener<EventType>>
Event<EventType>::subscribe(const std::function<void(EventType&)>& callback, EventPriority priority, HMODULE plugin) {
    auto listener = std::make_shared<ListenerType>(callback, priority, plugin);
    subscribe(listener);
    return listener;
}

template <typename EventType>
void Event<EventType>::subscribe(std::shared_ptr<ListenerType> listener) {
    EventManager<EventType>::addListener(listener);
}

template <typename EventType>
void Event<EventType>::unsubscribe(std::weak_ptr<ListenerType> listener) {
    EventManager<EventType>::removeListener(listener);
}

template <typename EventType>
void Event<EventType>::unsubscribe(int listenerId) noexcept {
    auto listener = EventManager<EventType>::getListener(listenerId);
    if (listener) {
        unsubscribe(*listener);
    }
}

} // namespace ll::event
