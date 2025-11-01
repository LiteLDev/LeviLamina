#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Screenshots {

struct ShowcasedScreenshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6ebbd6;
    ::ll::UntypedStorage<8, 32> mUnk4f2b25;
    ::ll::UntypedStorage<8, 32> mUnka28229;
    ::ll::UntypedStorage<8, 32> mUnk54c4dd;
    ::ll::UntypedStorage<8, 8>  mUnkcb3aa1;
    ::ll::UntypedStorage<8, 8>  mUnkbe6df5;
    ::ll::UntypedStorage<1, 1>  mUnk4060f7;
    ::ll::UntypedStorage<1, 1>  mUnka2a6d8;
    // NOLINTEND

public:
    // prevent constructor by default
    ShowcasedScreenshot& operator=(ShowcasedScreenshot const&);
    ShowcasedScreenshot(ShowcasedScreenshot const&);
    ShowcasedScreenshot();
};

} // namespace Screenshots
