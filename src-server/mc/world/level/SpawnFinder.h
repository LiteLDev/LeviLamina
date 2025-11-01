#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class SpawnFinder {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::BlockPos> findStandupPosition(::BlockPos const& requestedPosition, ::BlockSource const& region);
    // NOLINTEND

};
