#pragma once

#include <concepts>
#include <cstddef>
#include <functional>
#include <memory>
#include <string_view>
#include <type_traits>
#include <utility>

#include "ll/api/base/Concepts.h"
#include "ll/api/base/Macro.h"
#include "ll/api/coro/Generator.h"
#include "ll/api/event/Event.h"
#include "ll/api/event/EventId.h"
#include "ll/api/event/Listener.h"
#include "ll/api/event/ListenerBase.h"

namespace ll::mod {
class Mod;
}
namespace ll::event {
class EmitterBase;

class EventBus {
    class EventBusImpl;
    std::unique_ptr<EventBusImpl> impl;
    EventBus();

    void removeModListeners(std::string_view modName);

    void clearMod(std::string_view modName);

public:
    using FactoryFn = std::function<std::unique_ptr<EmitterBase>()>;

    LLNDAPI static EventBus& getInstance();

    LLAPI void publish(Event&, EventIdView const&);

    LLAPI void publish(std::string_view modName, Event&, EventIdView const&);

    LLAPI bool
    setEventEmitter(FactoryFn fn, EventIdView const& eventId, std::weak_ptr<mod::Mod> mod = mod::NativeMod::current());

    template <std::derived_from<Event> T>
    bool setEventEmitter(FactoryFn fn, std::weak_ptr<mod::Mod> mod = mod::NativeMod::current()) {
        return setEventEmitter(std::move(fn), getEventId<T>, std::move(mod));
    }

    template <class T>
        requires(std::derived_from<std::remove_cvref_t<T>, Event>)
    void publish(T&& event) {
        static_assert(std::is_final_v<std::remove_cvref_t<T>>, "Only final classes can publish");
        publish(event, getEventId<T>);
    }

    template <class T>
        requires(std::derived_from<std::remove_cvref_t<T>, Event>)
    void publish(std::string_view modName, T&& event) {
        static_assert(std::is_final_v<std::remove_cvref_t<T>>, "Only final classes can publish");
        publish(modName, event, getEventId<T>);
    }

    LLNDAPI coro::Generator<EventIdView> events(std::string_view modName) const;

    LLNDAPI coro::Generator<std::pair<std::string_view, EventIdView>> events() const;

    LLNDAPI bool hasEvent(EventIdView const& eventId) const;

    LLNDAPI size_t getListenerCount(EventIdView const&);

    template <std::derived_from<Event> T>
    [[nodiscard]] size_t getListenerCount() {
        static_assert(std::is_final_v<std::remove_cvref_t<T>>, "Only final classes can be listen");
        return getListenerCount(getEventId<T>);
    }

    LLAPI bool addListener(ListenerPtr const&, EventIdView const&);

    template <class T, template <class...> class L, class... LT>
        requires((std::derived_from<T, LT> || ...) && std::derived_from<L<LT...>, ListenerBase>)
    bool addListener(std::shared_ptr<L<LT...>> const& listener) {
        static_assert(std::is_final_v<std::remove_cvref_t<T>>, "Only final classes can be listen");
        return addListener(listener, getEventId<T>);
    }
    template <class T = void, template <class...> class L, class... LT>
        requires(std::same_as<T, void> && std::derived_from<L<LT...>, ListenerBase>)
    bool addListener(std::shared_ptr<L<LT...>> const& listener) {
        return (addListener<LT>(listener) && ...);
    }
    template <std::derived_from<Event> T, std::derived_from<ListenerBase> L = Listener<T>, class... Args>
    inline auto emplaceListener(Args&&... args) {
        auto res = L::create(std::forward<Args>(args)...);
        if (!addListener<T>(res)) {
            res = nullptr;
        }
        return res;
    }

    LLAPI bool removeListener(ListenerPtr const&, EventIdView const&);

    bool removeListener(ListenerPtr const& listener) { return removeListener(listener, EmptyEventId); }
    template <std::derived_from<Event> T>
    bool removeListener(ListenerPtr const& listener) {
        static_assert(std::is_final_v<std::remove_cvref_t<T>>, "Only final classes can be listen");
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
        if (auto listener = getListener(id); listener) {
            return removeListener(listener, EmptyEventId);
        }
        return false;
    }
    template <std::derived_from<Event> T>
    bool removeListener(ListenerId id) {
        static_assert(std::is_final_v<std::remove_cvref_t<T>>, "Only final classes can be listen");
        if (auto listener = getListener(id); listener) {
            return removeListener(listener, getEventId<T>);
        }
        return false;
    }

    LLNDAPI bool hasListener(ListenerId, EventIdView const&) const;

    [[nodiscard]] bool hasListener(ListenerId id) const { return hasListener(id, EmptyEventId); }

    template <std::derived_from<Event> T>
    [[nodiscard]] bool hasListener(ListenerId id) const {
        return hasListener(id, getEventId<T>);
    }
};

} // namespace ll::event
