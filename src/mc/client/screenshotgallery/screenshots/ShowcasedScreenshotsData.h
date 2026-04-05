#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Screenshots {

struct ShowcasedScreenshotsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb3dea7;
    ::ll::UntypedStorage<8, 8>  mUnk2d070e;
    ::ll::UntypedStorage<8, 32> mUnkd17f7b;
    // NOLINTEND

public:
    // prevent constructor by default
    ShowcasedScreenshotsData& operator=(ShowcasedScreenshotsData const&);
    ShowcasedScreenshotsData(ShowcasedScreenshotsData const&);
    ShowcasedScreenshotsData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~ShowcasedScreenshotsData();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Screenshots
