#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/dimension/DerivedDimensionArguments.h"
#include "mc/world/level/dimension/DimensionHeightRange.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

struct DimensionArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::DerivedDimensionArguments> mDerived;
    ::ll::TypedStorage<4, 4, ::DimensionType>              mDimId;
    ::ll::TypedStorage<2, 4, ::DimensionHeightRange>       mHeightRange;
    ::ll::TypedStorage<8, 32, ::std::string>               mName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DimensionArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
