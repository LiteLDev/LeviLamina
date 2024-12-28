#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Sound {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8f73e3;
    ::ll::UntypedStorage<4, 4>  mUnkca48fd;
    ::ll::UntypedStorage<4, 4>  mUnke3c8c7;
    ::ll::UntypedStorage<4, 4>  mUnk3d0ec5;
    ::ll::UntypedStorage<4, 4>  mUnk5ca8e1;
    // NOLINTEND

public:
    // prevent constructor by default
    Sound& operator=(Sound const&);
    Sound(Sound const&);
    Sound();
};
