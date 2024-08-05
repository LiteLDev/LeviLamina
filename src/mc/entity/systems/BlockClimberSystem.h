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
        class BlockLegacy const&,
        class IConstBlockSource const&,
        class BlockPos const&,
        bool,
        bool,
        bool
    );

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
