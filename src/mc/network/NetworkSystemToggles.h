#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkSystemToggles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk800449;
    ::ll::UntypedStorage<4, 4>  mUnk2b5faf;
    ::ll::UntypedStorage<4, 4>  mUnk8878a0;
    ::ll::UntypedStorage<4, 4>  mUnk1523a9;
    ::ll::UntypedStorage<4, 4>  mUnk812812;
    ::ll::UntypedStorage<8, 16> mUnkdb7d23;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSystemToggles& operator=(NetworkSystemToggles const&);
    NetworkSystemToggles(NetworkSystemToggles const&);
    NetworkSystemToggles();
};
