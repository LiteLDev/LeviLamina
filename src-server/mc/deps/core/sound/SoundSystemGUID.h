#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundSystemGUID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2017ff;
    ::ll::UntypedStorage<2, 2> mUnke4c7f0;
    ::ll::UntypedStorage<2, 2> mUnkc5152e;
    ::ll::UntypedStorage<1, 8> mUnkcb5e00;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundSystemGUID& operator=(SoundSystemGUID const&);
    SoundSystemGUID(SoundSystemGUID const&);
    SoundSystemGUID();

};
