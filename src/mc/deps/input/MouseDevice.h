#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MouseDevice {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9fdaf4;
    ::ll::UntypedStorage<2, 2>  mUnk1ecfbe;
    ::ll::UntypedStorage<2, 2>  mUnk8ff1d0;
    ::ll::UntypedStorage<2, 2>  mUnk1ec251;
    ::ll::UntypedStorage<2, 2>  mUnk715988;
    ::ll::UntypedStorage<2, 2>  mUnkd60bc9;
    ::ll::UntypedStorage<2, 2>  mUnk3fa763;
    ::ll::UntypedStorage<1, 5>  mUnk7d1031;
    ::ll::UntypedStorage<8, 24> mUnkfecda8;
    ::ll::UntypedStorage<4, 4>  mUnk39ddb7;
    // NOLINTEND

public:
    // prevent constructor by default
    MouseDevice& operator=(MouseDevice const&);
    MouseDevice(MouseDevice const&);
    MouseDevice();
};
