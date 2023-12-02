#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"

namespace ll::event::inline server {
class ServerStoppedEvent : public Cancellable<Event> {
public:
    constexpr explicit ServerStoppedEvent() = default;
};
} // namespace ll::event::inline server
