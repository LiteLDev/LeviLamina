#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"

#include "mc/server/ServerInstance.h"

namespace ll::event::inline server {
class ServerStartedEvent : public Cancellable<Event> {
    ServerInstance& mInstance;

public:
    constexpr explicit ServerStartedEvent(ServerInstance& instance) : mInstance(instance) {}

    LLNDAPI ServerInstance& instance() const;
};
} // namespace ll::event::inline server
