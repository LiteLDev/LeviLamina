#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Event.h"

namespace ll::event {
template <std::derived_from<Event> T>
class Cancellable : public T {
public:
    [[nodiscard]] constexpr bool isCancelled() { return Event::mCancelled; }

    constexpr void setCancelled(bool cancelled) { Event::mCancelled = cancelled; }

    constexpr void cancel() { setCancelled(true); }
};
} // namespace ll::event
