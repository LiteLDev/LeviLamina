#pragma once

/**
 * @brief This file is the implementation of the event manager.
 * @note Only LiteLoader itself should include this file in the source code of event.
 */

#include <llapi/event/EventManager.h>

namespace ll::event {

template <typename EventType>
bool PriorityComparator<EventType>::operator()(
    const std::shared_ptr<ListenerType>& lhs,
    const std::shared_ptr<ListenerType>& rhs
) const {
    return lhs < rhs;
}

template <typename EventType>
std::set<std::shared_ptr<Listener<EventType>>, PriorityComparator<EventType>> EventManager<EventType>::listenerList;

template <typename EventType>
void EventManager<EventType>::addListener(std::shared_ptr<ListenerType> listener) {
    if (listener->priority > EventPriority::Monitor) {
        listener->priority = EventPriority::Normal;
    }
    listenerList.insert(listener);
}

template <typename EventType>
void EventManager<EventType>::removeListener(std::weak_ptr<ListenerType> listener) {
    if (listener.expired()) {
        return;
    }
    listenerList.erase(listener.lock());
}

template <typename EventType>
std::optional<std::weak_ptr<Listener<EventType>>> EventManager<EventType>::getListener(int id) noexcept {
    auto res = std::find_if(
        listenerList.begin(),
        listenerList.end(),
        [id](const std::shared_ptr<Listener<EventType>>& listener) { return listener->id == id; }
    );
    if (res != listenerList.end()) {
        return *res;
    }
    return std::nullopt;
}

template <typename EventType>
bool EventManager<EventType>::hasListener() noexcept {
    return !listenerList.empty();
}

template <typename EventType>
void EventManager<EventType>::fireEvent(EventType& event) {
    for (auto& listener : listenerList) {
        listener->call(event);
    }
}

template <typename EventType>
void EventManager<EventType>::fireEvent(EventType& event, HMODULE plugin) {
    for (auto& listener : listenerList) {
        if (listener->plugin == plugin) {
            listener->call(event);
        }
    }
}

} // namespace ll::event
