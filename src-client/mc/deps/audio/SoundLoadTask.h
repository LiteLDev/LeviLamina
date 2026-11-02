#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundLoadTask {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkbcb1a7;
    ::ll::UntypedStorage<8, 64> mUnk9d42f0;
    ::ll::UntypedStorage<8, 64> mUnk5923d6;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundLoadTask& operator=(SoundLoadTask const&);
    SoundLoadTask(SoundLoadTask const&);
    SoundLoadTask();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SoundLoadTask();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
