#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

namespace ll::event::inline server {
class ServerStartedEvent : public Cancellable<Event> {
public:
    ServerInstance& instance;
    constexpr explicit ServerStartedEvent(ServerInstance& instance) : instance(instance) {}
};
} // namespace ll::event::inline server
