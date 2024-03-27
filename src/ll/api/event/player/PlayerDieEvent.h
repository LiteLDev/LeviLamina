#pragma once

#include "ll/api/event/player/PlayerEvent.h"

#include "mc/world/actor/ActorDamageSource.h"

namespace ll::event::inline player {

class PlayerDieEvent final : public PlayerEvent {
    ActorDamageSource const& mSource;

public:
    constexpr explicit PlayerDieEvent(Player& player, ActorDamageSource const& source)
    : PlayerEvent(player),
      mSource(source) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI ActorDamageSource const& source() const;
};
} // namespace ll::event::inline player
