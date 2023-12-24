#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

#include "mc/world/actor/player/Player.h"
#include "mc/world/level/BlockPos.h"

namespace ll::event::inline player {

class PlayerPlaceBlockEvent : public PlayerEvent {
protected:
    BlockPos const& mPos;

    constexpr explicit PlayerPlaceBlockEvent(Player& player, BlockPos const& pos) : PlayerEvent(player), mPos(pos) {}

public:
    void serialize(CompoundTag&) const override;

    LLNDAPI BlockPos const& pos() const;
};

class PlayerPlacingBlockEvent : public Cancellable<PlayerPlaceBlockEvent> {
public:
    constexpr explicit PlayerPlacingBlockEvent(Player& player, BlockPos const& pos) : Cancellable(player, pos) {}

public:
};

class PlayerPlacedBlockEvent : public PlayerPlaceBlockEvent {
public:
    constexpr explicit PlayerPlacedBlockEvent(Player& player, BlockPos const& pos)
    : PlayerPlaceBlockEvent(player, pos) {}

public:
};
} // namespace ll::event::inline player
