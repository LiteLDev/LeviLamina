#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct DimensionPadding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mTop;
    ::ll::TypedStorage<4, 4, uint> mBottom;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionPadding();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DimensionPadding(uint amount);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(uint amount);
    // NOLINTEND
};

} // namespace br::worldgen
