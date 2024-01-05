#pragma once

#include "ll/api/event/Event.h"

#include "mc/world/level/BlockSource.h"

namespace ll::event::inline world {

class WorldEvent : public Event {
    BlockSource& mBlockSource;

protected:
    constexpr explicit WorldEvent(BlockSource& blockSource) : mBlockSource(blockSource) {}

public:
    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI BlockSource& blockSource() const;
};
} // namespace ll::event::inline world
