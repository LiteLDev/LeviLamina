#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HoloHudDriftDynamics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> mUnka5cb64;
    ::ll::UntypedStorage<4, 12> mUnk2ca2b2;
    ::ll::UntypedStorage<4, 12> mUnk431c06;
    ::ll::UntypedStorage<4, 12> mUnkd3b5d1;
    ::ll::UntypedStorage<4, 12> mUnk22648f;
    ::ll::UntypedStorage<8, 8>  mUnk8f772c;
    ::ll::UntypedStorage<1, 1>  mUnk8ef4a9;
    ::ll::UntypedStorage<8, 8>  mUnk9d089d;
    // NOLINTEND

public:
    // prevent constructor by default
    HoloHudDriftDynamics& operator=(HoloHudDriftDynamics const&);
    HoloHudDriftDynamics(HoloHudDriftDynamics const&);
    HoloHudDriftDynamics();
};
