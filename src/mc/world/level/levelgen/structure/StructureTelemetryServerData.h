#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

class StructureTelemetryServerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>        mHasBeenActivatedByRedstone;
    ::ll::TypedStorage<1, 1, bool>        mHasLoadedIntoUnloadedChunks;
    ::ll::TypedStorage<4, 12, ::BlockPos> mLastOffsetWhenLoadingIntoUnloadedChunks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureTelemetryServerData();

    MCFOLD bool hasBeenActivatedByRedstone();

    MCFOLD void setHasBeenActivedByRedstone();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
