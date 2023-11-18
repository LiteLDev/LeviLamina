#pragma once

#include <concepts>

#include "ll/api/event/EventId.h"

namespace ll::event {

class Cancellable;

class Event {
private:
    bool mCancelled{false};

protected:
    constexpr Event() = default;

public:
    virtual ~Event() = default;

    static constexpr ll::event::EventId CustomEventId{EmptyEventId};

    static constexpr void tryRegisterHook() {}

#if _HAS_CXX23
    template <class Self>
        requires(std::derived_from<std::remove_cvref_t<Self>, Cancellable>)
    [[nodiscard]] constexpr bool isCancelled(this Self&& self) {
        return std::forward<Self>(self).mCancelled;
    }
    template <class Self>
        requires(std::derived_from<std::remove_cvref_t<Self>, Cancellable>)
    [[nodiscard]] constexpr void setCancelled(this Self&& self, bool cancelled) {
        std::forward<Self>(self).mCancelled = cancelled;
    }
    template <class Self>
        requires(std::derived_from<std::remove_cvref_t<Self>, Cancellable>)
    [[nodiscard]] constexpr void cancel(this Self&& self) {
        std::forward<Self>(self).setCancelled(true);
    }
#endif
};
} // namespace ll::event
