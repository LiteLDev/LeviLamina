#pragma once

#include <typeindex>

#include "ll/api/base/Containers.h"
#include "ll/api/event/Event.h"
#include "ll/api/event/Listener.h"

namespace ll::event {
template <class... Ts>
    requires(sizeof...(Ts) > 1 && (std::derived_from<Ts, Event> && ...))
class MultiListener : public ListenerBase {
public:
    using event_list  = meta::TypeList<Ts...>;
    using callback_fn = std::function<void(Event&)>;

    template <class Callable>
    explicit MultiListener(
        Callable&&              fn,
        EventPriority           priority = EventPriority::Normal,
        std::weak_ptr<mod::Mod> mod      = mod::NativeMod::current()
    )
    : ListenerBase(priority, std::move(mod)) {
        event_list::forEach([fn = std::forward<Callable>(fn), this]<class E>() {
            callback.emplace(getEventId<E>, [fn](Event& ev) { static_cast<void>(fn(static_cast<E&>(ev))); });
        });
    }

    ~MultiListener() override = default;

    void call(Event& event) override { callback.at(event.getId())(event); }

    template <class Callable>
    static std::shared_ptr<MultiListener> create(
        Callable&&              fn,
        EventPriority           priority = EventPriority::Normal,
        std::weak_ptr<mod::Mod> mod      = mod::NativeMod::current()
    ) {
        return std::make_shared<MultiListener>(std::forward<Callable>(fn), priority, std::move(mod));
    }

private:
    SmallDenseMap<EventId, callback_fn> callback;
};
} // namespace ll::event
