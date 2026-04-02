#pragma once

#include "ll/api/event/command/CommandRegisterEvent.h"

namespace ll::event::inline command {

class ServerCommandRegisterEvent final : public CommandRegisterEvent {
    bool             mClientHostedServer;

public:
    constexpr explicit ServerCommandRegisterEvent(CommandRegistry& commandRegistry, bool clientHostedServer)
    : CommandRegisterEvent(commandRegistry),
      mClientHostedServer(clientHostedServer) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI bool             isClientHostedServer() const;
};

} // namespace ll::event::inline command
