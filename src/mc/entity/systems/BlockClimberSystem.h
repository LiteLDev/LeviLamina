#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockType;
class IConstBlockSource;
struct TickingSystemWithInfo;
// clang-format on

class BlockClimberSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canBlockBeAscendedByJumping(
        ::BlockType const&         block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          blockPos,
        bool                       canStandOnSnow,
        bool                       hasLightweightFamily,
        bool                       isPlayer
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
