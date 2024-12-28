#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SkinHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk41d8d9;
    ::ll::UntypedStorage<8, 24> mUnk2ecffd;
    ::ll::UntypedStorage<4, 4>  mUnk25a8b1;
    ::ll::UntypedStorage<8, 32> mUnkaa6901;
    ::ll::UntypedStorage<8, 32> mUnk22e9da;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinHandle& operator=(SkinHandle const&);
    SkinHandle(SkinHandle const&);
    SkinHandle();
};
