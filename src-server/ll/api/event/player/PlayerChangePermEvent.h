#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

class PlayerChangePermEvent final : public Cancellable<PlayerEvent> {
    CommandPermissionLevel& mMewPerm;

public:
    constexpr explicit PlayerChangePermEvent(Player& player, CommandPermissionLevel& newPerm)
    : Cancellable(player),
      mMewPerm(newPerm) {}

    LLAPI void serialize(CompoundTag&) const override;
    LLAPI void deserialize(CompoundTag const&) override;

    LLNDAPI CommandPermissionLevel& newPerm() const;
};
} // namespace ll::event::inline player
