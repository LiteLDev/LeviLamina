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
    // symbol:
    // ?canBlockBeAscendedByJumping@BlockClimberSystem@@SA_NAEBVBlockLegacy@@AEBVIConstBlockSource@@AEBVBlockPos@@_N33@Z
    MCAPI static bool canBlockBeAscendedByJumping(
        class BlockLegacy const&,
        class IConstBlockSource const&,
        class BlockPos const&,
        bool,
        bool,
        bool
    );

    // symbol: ?createSystem@BlockClimberSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
