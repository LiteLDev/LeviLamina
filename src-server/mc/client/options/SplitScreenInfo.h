#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SplitScreenInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk9ec5cd;
    ::ll::UntypedStorage<4, 4> mUnkdf7003;
    ::ll::UntypedStorage<4, 4> mUnk9c8d06;
    ::ll::UntypedStorage<4, 4> mUnkbb1263;
    // NOLINTEND

public:
    // prevent constructor by default
    SplitScreenInfo& operator=(SplitScreenInfo const&);
    SplitScreenInfo(SplitScreenInfo const&);
    SplitScreenInfo();
};
