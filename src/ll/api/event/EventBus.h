#pragma once

#include <concepts>
#include <memory>
#include <unordered_set>

#include "ll/api/base/Macro.h"
#include "ll/api/event/Event.h"
#include "ll/api/event/EventId.h"
#include "ll/api/event/Listener.h"

namespace ll::event {

class EventBus {
private:
    class EventBusImpl;
    std::unique_ptr<EventBusImpl> impl;
    EventBus();

    class Canneller {
        friend EventBus;
        std::unordered_set<ListenerId> listeners{};
        Canneller() = default;
        ~Canneller() {
            auto list = listeners;
            for (auto id : list) { EventBus::getInstance().removeListener(id); }
        }

    public:
        static Canneller& getInstance() {
            static Canneller ins{};
            return ins;
        }
    };

    LLAPI void publish(Event&, EventId const&);

    LLAPI bool addListener(ListenerPtr const&, EventId const&, Canneller& = Canneller::getInstance());

    LLAPI bool removeListener(ListenerPtr const&, EventId const&, Canneller& = Canneller::getInstance());

    LLNDAPI bool hasListener(ListenerId, EventId const&) const;

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
    bool removeListener(ListenerPtr const& listener) { return removeListener(listener, EmptyEventId); }
    template <std::derived_from<Event> T>
    bool removeListener(ListenerPtr const& listener) {
        return removeListener(listener, getEventId<T>);
    }

    [[nodiscard]] bool hasListener(ListenerPtr const& listener) const {
        return hasListener(listener->getId(), EmptyEventId);
    }
    template <std::derived_from<Event> T>
    [[nodiscard]] bool hasListener(ListenerPtr const& listener) const {
        return hasListener(listener->getId(), getEventId<T>);
    }

    LLNDAPI ListenerPtr getListener(ListenerId id) const;

    bool removeListener(ListenerId id) {
        if (auto listener = getListener(id); listener) { return removeListener(listener, EmptyEventId); }
        return false;
    }
    template <std::derived_from<Event> T>
    bool removeListener(ListenerId id) {
        if (auto listener = getListener(id); listener) { return removeListener(listener, getEventId<T>); }
        return false;
    }
    [[nodiscard]] bool hasListener(ListenerId id) const { return hasListener(id, EmptyEventId); }

    template <std::derived_from<Event> T>
    [[nodiscard]] bool hasListener(ListenerId id) const {
        return hasListener(id, getEventId<T>);
    }
};

} // namespace ll::event
