#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyBlockPlacementProcessor {
public:
    // prevent constructor by default
    LegacyBlockPlacementProcessor& operator=(LegacyBlockPlacementProcessor const&);
    LegacyBlockPlacementProcessor(LegacyBlockPlacementProcessor const&);
    LegacyBlockPlacementProcessor();

public:
    // NOLINTBEGIN
    MCAPI explicit LegacyBlockPlacementProcessor(class LegacyStructureSettings const& settings);

    MCAPI class Block const* applyBlockRules(
        class BlockSource&    region,
        class BlockPos&       pos,
        class Block const*    blockToPlace,
        class BlockPos const& refPos
    );

    MCAPI class BlockPos& applyGravity(class BlockSource& region, int yOffset, class BlockPos& pos) const;

    MCAPI ~LegacyBlockPlacementProcessor();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
