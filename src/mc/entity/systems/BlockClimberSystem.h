#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
class BlockPos;
class IConstBlockSource;
struct TickingSystemWithInfo;
// clang-format on

class BlockClimberSystem {
public:
    // prevent constructor by default
    BlockClimberSystem& operator=(BlockClimberSystem const&);
    BlockClimberSystem(BlockClimberSystem const&);
    BlockClimberSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canBlockBeAscendedByJumping(
        ::BlockLegacy const&       block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          blockPos,
        bool                       canStandOnSnow,
        bool                       hasLightweightFamily,
        bool                       isPlayer
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
