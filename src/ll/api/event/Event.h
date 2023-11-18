#pragma once

#include "ll/api/event/EventId.h"

namespace ll::event {
class Event {
protected:
    constexpr Event() = default;

public:
    virtual ~Event() = default;

    static constexpr ll::event::EventId CustomEventId{EmptyEventId};

    static constexpr void tryRegisterHook() {}
};
} // namespace ll::event
