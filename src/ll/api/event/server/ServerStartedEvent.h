#pragma once

#include "ll/api/event/Event.h"

#include "mc/server/ServerInstance.h"

namespace ll::event::inline server {
class ServerStartedEvent final : public Event {
    ServerInstance& mInstance;

public:
    constexpr explicit ServerStartedEvent(ServerInstance& server) : mInstance(server) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI ServerInstance& server() const;
};
} // namespace ll::event::inline server
