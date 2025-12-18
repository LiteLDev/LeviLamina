#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

namespace ll::event::inline player {

class PlayerChangePermEvent final : public Cancellable<PlayerEvent> {
    PlayerPermissionLevel& mMewPerm;

public:
    constexpr explicit PlayerChangePermEvent(Player& player, PlayerPermissionLevel& newPerm)
    : Cancellable(player),
      mMewPerm(newPerm) {}

    LLAPI void serialize(CompoundTag&) const override;
    LLAPI void deserialize(CompoundTag const&) override;

    LLNDAPI PlayerPermissionLevel& newPerm() const;
};
} // namespace ll::event::inline player
