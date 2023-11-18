#pragma once

#include "ll/api/event/EventId.h"
#include "ll/api/event/base/EventBase.h"
#include <functional>

namespace ll::event {
class Event : public EventBase {
protected:
    constexpr Event() = default;

public:
    static constexpr ll::event::EventId CustomEventId{EmptyEventId};

    static constexpr void tryRegisterHook() {}
};
} // namespace ll::event
