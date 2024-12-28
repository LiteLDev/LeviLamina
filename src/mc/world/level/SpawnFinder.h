#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class SpawnFinder {
public:
    // prevent constructor by default
    SpawnFinder& operator=(SpawnFinder const&);
    SpawnFinder(SpawnFinder const&);
    SpawnFinder();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::BlockPos>
    findStandupPosition(::BlockPos const& requestedPosition, ::BlockSource const& region);
    // NOLINTEND
};
