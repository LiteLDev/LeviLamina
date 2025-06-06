#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
class BlockPos;
class IConstBlockSource;
// clang-format on

class BlockClimberSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canBlockBeAscendedByJumping(
        ::BlockLegacy const&       block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          blockPos,
        bool                       canStandOnSnow,
        bool                       hasLightweightFamily,
        bool                       isPlayer
    );
    // NOLINTEND
};
