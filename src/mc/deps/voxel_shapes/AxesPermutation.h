#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoxelShapes {

class AxesPermutation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 3> mUnk57480b;
    ::ll::UntypedStorage<1, 1> mUnk13390c;
    // NOLINTEND

public:
    // prevent constructor by default
    AxesPermutation& operator=(AxesPermutation const&);
    AxesPermutation(AxesPermutation const&);
    AxesPermutation();
};

} // namespace VoxelShapes
