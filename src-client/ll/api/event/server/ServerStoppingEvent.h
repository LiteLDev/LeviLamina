#pragma once

#include "ll/api/event/Event.h"

#include "mc/server/ServerInstance.h"

namespace ll::event::inline server {
class ServerStoppingEvent final : public Event {
    ServerInstance& mServer;

public:
    constexpr explicit ServerStoppingEvent(ServerInstance& server) : mServer(server) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI ServerInstance& server() const;
};
} // namespace ll::event::inline server
