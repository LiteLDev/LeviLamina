#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockClimberSystem {
public:
    // prevent constructor by default
    BlockClimberSystem& operator=(BlockClimberSystem const&);
    BlockClimberSystem(BlockClimberSystem const&);
    BlockClimberSystem();

public:
    // NOLINTBEGIN
    MCAPI static bool canBlockBeAscendedByJumping(
        class BlockLegacy const&       block,
        class IConstBlockSource const& region,
        class BlockPos const&          blockPos,
        bool                           canStandOnSnow,
        bool                           hasLightweightFamily,
        bool                           isPlayer
    );

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
