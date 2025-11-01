#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlendingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk2236bb;
    ::ll::UntypedStorage<1, 1> mUnk221f9b;
    ::ll::UntypedStorage<2, 32> mUnkf2a2f1;
    ::ll::UntypedStorage<8, 384> mUnk31967e;
    ::ll::UntypedStorage<8, 384> mUnk496b9d;
    ::ll::UntypedStorage<8, 384> mUnkae2f2b;
    // NOLINTEND

public:
    // prevent constructor by default
    BlendingData& operator=(BlendingData const&);
    BlendingData(BlendingData const&);
    BlendingData();

};
