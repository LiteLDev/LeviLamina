#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HydrateParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke2a6b9;
    ::ll::UntypedStorage<8, 32> mUnkd2e39c;
    ::ll::UntypedStorage<1, 1>  mUnk4e3303;
    ::ll::UntypedStorage<4, 4>  mUnkf790c0;
    // NOLINTEND

public:
    // prevent constructor by default
    HydrateParams& operator=(HydrateParams const&);
    HydrateParams(HydrateParams const&);
    HydrateParams();
};
