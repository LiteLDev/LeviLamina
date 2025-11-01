#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ValueProviders {

struct ClampedNormalFloat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2faf21;
    ::ll::UntypedStorage<4, 4> mUnk1f8356;
    ::ll::UntypedStorage<4, 4> mUnk25b93c;
    ::ll::UntypedStorage<4, 4> mUnkd8f4e6;
    // NOLINTEND

public:
    // prevent constructor by default
    ClampedNormalFloat& operator=(ClampedNormalFloat const&);
    ClampedNormalFloat(ClampedNormalFloat const&);
    ClampedNormalFloat();

};

}
