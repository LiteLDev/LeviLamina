#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Event.h"

namespace ll::event {
template <std::derived_from<Event> T>
class Cancellable : public T {
protected:
    using T::T;

    static_assert(
        !concepts::is_derived_from_specialization_of_v<T, Cancellable>,
        "can't be derived from Cancellable twice"
    );

public:
    [[nodiscard]] constexpr bool isCancelled() { return Event::mCancelled; }

    constexpr void setCancelled(bool cancelled) { Event::mCancelled = cancelled; }

    constexpr void cancel() { setCancelled(true); }
};
} // namespace ll::event
