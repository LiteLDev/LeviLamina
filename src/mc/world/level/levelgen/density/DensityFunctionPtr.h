#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DensityFunctionPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9282e3;
    // NOLINTEND

public:
    // prevent constructor by default
    DensityFunctionPtr& operator=(DensityFunctionPtr const&);
    DensityFunctionPtr(DensityFunctionPtr const&);
    DensityFunctionPtr();
};
