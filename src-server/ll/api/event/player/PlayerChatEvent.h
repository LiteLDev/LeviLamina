#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/ServerPlayerEvent.h"

namespace ll::event::inline player {

class PlayerChatEvent final : public Cancellable<ServerPlayerEvent> {
    std::string& mMessage;

public:
    constexpr explicit PlayerChatEvent(ServerPlayer& player, std::string& message)
    : Cancellable(player),
      mMessage(message) {}

    LLAPI void serialize(CompoundTag&) const override;
    LLAPI void deserialize(CompoundTag const&) override;

    LLNDAPI std::string& message() const;
};
} // namespace ll::event::inline player
