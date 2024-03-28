#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/world/WorldEvent.h"

#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"

namespace ll::event::inline world {

class FireSpreadEvent final : public Cancellable<WorldEvent> {
    BlockPos const& mPos;

public:
    constexpr FireSpreadEvent(BlockSource& blockSource, BlockPos const& pos) : Cancellable(blockSource), mPos(pos) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI BlockPos const& pos() const;
};
} // namespace ll::event::inline world
