#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Event.h"
#include "ll/api/event/EventId.h"
#include "ll/api/event/Listener.h"
#include <concepts>
#include <memory>

namespace ll::event {

class EventRegistry {
    class EventRegistryImpl;
    std::unique_ptr<EventRegistryImpl> impl;
    EventRegistry();

    LLAPI void publish(EventBase& event, EventId const& eventId);
    LLAPI bool addListener(std::shared_ptr<ListenerBase> const& listener, EventId const& eventId);

    LLAPI bool removeListener(std::shared_ptr<ListenerBase> const& listener, EventId const& eventId);
    LLAPI bool removeListener(uint id, EventId const& eventId);

    LLNDAPI bool hasListener(std::shared_ptr<ListenerBase> const& listener, EventId const& eventId) const;
    LLNDAPI bool hasListener(uint id, EventId const& eventId) const;

public:
    LLNDAPI static EventRegistry& getInstance();

    template <std::derived_from<EventBase> T>
    inline void publish(T& event) {
        publish(event, getEventId<T>);
    }
    template <std::derived_from<EventBase> T>
    inline void publish(T&& event) {
        T e = event;
        publish(e, getEventId<T>);
    }
    template <std::derived_from<Event> T, class LT>
        requires(std::derived_from<T, LT> && !std::same_as<T, LT>)
    inline bool addListener(std::shared_ptr<Listener<LT>> const& listener) {
        if (addListener(listener, getEventId<T>)) {
            T::tryRegisterHook();
            return true;
        }
        return false;
    }
    template <std::derived_from<Event> T>
    inline bool addListener(std::shared_ptr<Listener<T>> const& listener) {
        if (addListener(listener, getEventId<T>)) {
            T::tryRegisterHook();
            return true;
        }
        return false;
    }
    template <std::derived_from<Event> T, std::derived_from<ListenerBase> L = Listener<T>, class... Args>
    inline auto emplaceListener(Args&&... args) {
        auto res = std::make_shared<L>(std::forward<Args>(args)...);
        if (addListener(res, getEventId<T>)) { T::tryRegisterHook(); }
        return res;
    }

    inline bool removeListener(std::shared_ptr<ListenerBase> const& listener) {
        return removeListener(listener, EmptyEventId);
    }
    inline bool removeListener(uint id) { return removeListener(id, EmptyEventId); }

    template <std::derived_from<EventBase> T>
    inline bool removeListener(std::shared_ptr<ListenerBase> const& listener) {
        return removeListener(listener, getEventId<T>);
    }
    template <std::derived_from<EventBase> T>
    inline bool removeListener(uint id) {
        return removeListener(id, getEventId<T>);
    }

    [[nodiscard]] inline bool hasListener(std::shared_ptr<ListenerBase> const& listener) const {
        return hasListener(listener, EmptyEventId);
    }
    [[nodiscard]] inline bool hasListener(uint id) const { return hasListener(id, EmptyEventId); }

    template <std::derived_from<EventBase> T>
    [[nodiscard]] inline bool hasListener(std::shared_ptr<ListenerBase> const& listener) const {
        return hasListener(listener, getEventId<T>);
    }
    template <std::derived_from<EventBase> T>
    [[nodiscard]] inline bool hasListener(uint id) const {
        return hasListener(id, getEventId<T>);
    }
};

} // namespace ll::event