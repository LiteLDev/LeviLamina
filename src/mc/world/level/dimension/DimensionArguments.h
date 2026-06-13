#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DerivedDimensionArguments.h"
#include "mc/world/level/dimension/DimensionHeightRange.h"
#include "mc/world/level/dimension/DimensionType.h"

struct DimensionArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::DerivedDimensionArguments> mDerived;
    ::ll::TypedStorage<4, 4, ::DimensionType>              mDimId;
    ::ll::TypedStorage<2, 4, ::DimensionHeightRange>       mHeightRange;
    ::ll::TypedStorage<8, 32, ::std::string>               mName;
    ::ll::TypedStorage<8, 32, ::std::string>               mTypeId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DimensionArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
