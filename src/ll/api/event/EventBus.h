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
#include "ll/api/event/Event.h"
#include "ll/api/event/EventId.h"
#include "ll/api/event/Listener.h"
#include "ll/api/event/ListenerBase.h"

namespace ll::plugin {
class Plugin;
}
namespace ll::event {
class EmitterBase;

class EventBus {
    friend plugin::Plugin;
    class EventBusImpl;
    std::unique_ptr<EventBusImpl> impl;
    EventBus();

    size_t removePluginListeners(std::string_view pluginName);

    size_t removePluginEventEmitters(std::string_view pluginName);

public:
    LLNDAPI static EventBus& getInstance();

    LLAPI void publish(Event&, EventId);

    LLAPI void publish(std::string_view pluginName, Event&, EventId);

    LLAPI void setEventEmitter(
        std::function<std::unique_ptr<EmitterBase>(ListenerBase&)> fn,
        EventId                                                    eventId,
        std::weak_ptr<plugin::Plugin>                              plugin = plugin::NativePlugin::current()
    );

    template <std::derived_from<Event> T>
    void setEventEmitter(
        std::function<std::unique_ptr<EmitterBase>(ListenerBase&)> fn,
        std::weak_ptr<plugin::Plugin>                              plugin = plugin::NativePlugin::current()
    ) {
        setEventEmitter(std::move(fn), getEventId<T>, plugin);
    }

    template <class T>
        requires(std::derived_from<std::remove_cvref_t<T>, Event>)
    void publish(T&& event) {
        static_assert(std::is_final_v<std::remove_cvref_t<T>>, "Only final classes can publish");
        publish(event, getEventId<T>);
    }

    template <class T>
        requires(std::derived_from<std::remove_cvref_t<T>, Event>)
    void publish(std::string_view pluginName, T&& event) {
        static_assert(std::is_final_v<std::remove_cvref_t<T>>, "Only final classes can publish");
        publish(pluginName, event, getEventId<T>);
    }

    LLNDAPI size_t getListenerCount(EventId);

    template <std::derived_from<Event> T>
    [[nodiscard]] size_t getListenerCount() {
        static_assert(std::is_final_v<std::remove_cvref_t<T>>, "Only final classes can be listen");
        return getListenerCount(getEventId<T>);
    }

    LLAPI bool addListener(ListenerPtr const&, EventId);

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

    LLAPI bool removeListener(ListenerPtr const&, EventId);

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

    LLNDAPI bool hasListener(ListenerId, EventId) const;

    [[nodiscard]] bool hasListener(ListenerId id) const { return hasListener(id, EmptyEventId); }

    template <std::derived_from<Event> T>
    [[nodiscard]] bool hasListener(ListenerId id) const {
        return hasListener(id, getEventId<T>);
    }
};

} // namespace ll::event
