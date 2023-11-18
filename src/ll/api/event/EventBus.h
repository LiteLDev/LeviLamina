#pragma once

#include <concepts>
#include <memory>

#include "ll/api/base/Macro.h"
#include "ll/api/event/Event.h"
#include "ll/api/event/EventId.h"
#include "ll/api/event/Listener.h"

namespace ll::event {

class EventBus {
    class EventBusImpl;
    std::unique_ptr<EventBusImpl> impl;
    EventBus();

    LLAPI void publish(Event& event, EventId const& eventId);
    LLAPI bool addListener(std::shared_ptr<ListenerBase> const& listener, EventId const& eventId);

    LLAPI bool removeListener(std::shared_ptr<ListenerBase> const& listener, EventId const& eventId);
    LLAPI bool removeListener(uint id, EventId const& eventId);

    LLNDAPI bool hasListener(std::shared_ptr<ListenerBase> const& listener, EventId const& eventId) const;
    LLNDAPI bool hasListener(uint id, EventId const& eventId) const;

public:
    LLNDAPI static EventBus& getInstance();

    template <class T>
        requires(std::derived_from<std::remove_cvref_t<T>, Event>)
    void publish(T&& event) {
        publish(event, getEventId<T>);
    }

    template <class T, class LT>
        requires(std::derived_from<T, LT>)
    bool addListener(std::shared_ptr<Listener<LT>> const& listener) {
        if (addListener(listener, getEventId<T>)) {
            T::tryRegisterHook();
            return true;
        }
        return false;
    }

    template <class T = void, class LT>
        requires(std::same_as<T, void>)
    bool addListener(std::shared_ptr<Listener<LT>> const& listener) {
        return addListener<LT>(listener);
    }

    template <std::derived_from<Event> T, std::derived_from<ListenerBase> L = Listener<T>, class... Args>
    inline auto emplaceListener(Args&&... args) {
        auto res = std::make_shared<L>(std::forward<Args>(args)...);
        if (addListener(res, getEventId<T>)) { T::tryRegisterHook(); }
        return res;
    }

    bool removeListener(std::shared_ptr<ListenerBase> const& listener) {
        return removeListener(listener, EmptyEventId);
    }
    bool removeListener(uint id) { return removeListener(id, EmptyEventId); }

    template <std::derived_from<Event> T>
    bool removeListener(std::shared_ptr<ListenerBase> const& listener) {
        return removeListener(listener, getEventId<T>);
    }
    template <std::derived_from<Event> T>
    bool removeListener(uint id) {
        return removeListener(id, getEventId<T>);
    }

    [[nodiscard]] bool hasListener(std::shared_ptr<ListenerBase> const& listener) const {
        return hasListener(listener, EmptyEventId);
    }
    [[nodiscard]] bool hasListener(uint id) const { return hasListener(id, EmptyEventId); }

    template <std::derived_from<Event> T>
    [[nodiscard]] bool hasListener(std::shared_ptr<ListenerBase> const& listener) const {
        return hasListener(listener, getEventId<T>);
    }
    template <std::derived_from<Event> T>
    [[nodiscard]] bool hasListener(uint id) const {
        return hasListener(id, getEventId<T>);
    }
};

} // namespace ll::event
