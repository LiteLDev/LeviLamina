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
    using callback_fn = std::function<void(Event&)>;

    template <class Callable>
    explicit MultiListener(
        Callable const&         fn,
        EventPriority           priority = EventPriority::Normal,
        std::weak_ptr<mod::Mod> mod      = mod::NativeMod::current()
    )
    : ListenerBase(priority, std::move(mod)) {
        (callback.emplace(getEventId<Ts>, [fn](Event& ev) { static_cast<void>(fn(static_cast<Ts&>(ev))); }), ...);
    }

    ~MultiListener() override = default;

    void call(Event& event) override { callback.at(event.getId())(event); }

    template <class Callable>
    static std::shared_ptr<MultiListener> create(
        Callable const&         fn,
        EventPriority           priority = EventPriority::Normal,
        std::weak_ptr<mod::Mod> mod      = mod::NativeMod::current()
    ) {
        return std::make_shared<MultiListener>(fn, priority, std::move(mod));
    }

private:
    SmallDenseMap<EventIdView, callback_fn> callback;
};
} // namespace ll::event
