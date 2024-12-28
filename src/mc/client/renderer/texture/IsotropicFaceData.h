#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IsotropicFaceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1c2355;
    ::ll::UntypedStorage<4, 4> mUnk35ac14;
    // NOLINTEND

public:
    // prevent constructor by default
    IsotropicFaceData& operator=(IsotropicFaceData const&);
    IsotropicFaceData(IsotropicFaceData const&);
    IsotropicFaceData();
};
