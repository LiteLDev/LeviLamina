#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

struct DimensionDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DimensionDefinitionGroup> mDimensionDefinitionGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionDataPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DimensionDataPacketPayload(::DimensionDefinitionGroup&& dimensionDefinitionGroup);

    MCNAPI ~DimensionDataPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DimensionDefinitionGroup&& dimensionDefinitionGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
