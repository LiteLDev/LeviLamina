#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InitOnce {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk121c56;
    ::ll::UntypedStorage<8, 64> mUnk5126c8;
    // NOLINTEND

public:
    // prevent constructor by default
    InitOnce& operator=(InitOnce const&);
    InitOnce(InitOnce const&);
    InitOnce();
};
