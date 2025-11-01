#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class CCRakNetSlidingWindow {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2e0f9a;
    ::ll::UntypedStorage<8, 8> mUnk846891;
    ::ll::UntypedStorage<8, 8> mUnkb39eb2;
    ::ll::UntypedStorage<8, 8> mUnk8c72c9;
    ::ll::UntypedStorage<4, 4> mUnkcf834e;
    ::ll::UntypedStorage<4, 4> mUnkd6b664;
    ::ll::UntypedStorage<1, 1> mUnk67a9a0;
    ::ll::UntypedStorage<1, 1> mUnk98f1e3;
    ::ll::UntypedStorage<4, 4> mUnk6f8553;
    ::ll::UntypedStorage<1, 1> mUnkc93317;
    ::ll::UntypedStorage<8, 8> mUnk702c03;
    ::ll::UntypedStorage<8, 8> mUnkdc0a92;
    ::ll::UntypedStorage<8, 8> mUnk40bbbc;
    // NOLINTEND

public:
    // prevent constructor by default
    CCRakNetSlidingWindow& operator=(CCRakNetSlidingWindow const&);
    CCRakNetSlidingWindow(CCRakNetSlidingWindow const&);
    CCRakNetSlidingWindow();

};

}
