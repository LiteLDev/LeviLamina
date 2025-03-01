#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class StructureTelemetryServerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>        mHasBeenActivatedByRedstone;
    ::ll::TypedStorage<1, 1, bool>        mHasLoadedIntoUnloadedChunks;
    ::ll::TypedStorage<4, 12, ::BlockPos> mLastOffsetWhenLoadingIntoUnloadedChunks;
    // NOLINTEND
};
