#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundInstanceProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk9d79c3;
    ::ll::UntypedStorage<8, 24> mUnk9ba732;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundInstanceProperties& operator=(SoundInstanceProperties const&);
    SoundInstanceProperties(SoundInstanceProperties const&);
    SoundInstanceProperties();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
