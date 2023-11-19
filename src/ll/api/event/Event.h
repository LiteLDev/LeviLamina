#pragma once

#include <concepts>

#include "ll/api/event/EventId.h"

namespace ll::event {
class Event;
template <std::derived_from<Event> T>
class Cancellable;

class Event {
private:
    template <std::derived_from<Event> T>
    friend class ::ll::event::Cancellable;

    bool mCancelled{false};

protected:
    constexpr Event() = default;

public:
    virtual ~Event() = default;

    static constexpr ll::event::EventId CustomEventId{EmptyEventId};

    static constexpr void tryRegisterHook() {}
};
} // namespace ll::event
