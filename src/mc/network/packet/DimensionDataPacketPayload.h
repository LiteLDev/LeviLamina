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
    MCAPI explicit DimensionDataPacketPayload(::DimensionDefinitionGroup&& dimensionDefinitionGroup);

    MCAPI ~DimensionDataPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DimensionDefinitionGroup&& dimensionDefinitionGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
