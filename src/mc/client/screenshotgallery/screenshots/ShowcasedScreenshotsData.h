#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Screenshots {

struct ShowcasedScreenshotsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk128f63;
    ::ll::UntypedStorage<8, 8>  mUnk2d070e;
    ::ll::UntypedStorage<8, 32> mUnk97defb;
    // NOLINTEND

public:
    // prevent constructor by default
    ShowcasedScreenshotsData& operator=(ShowcasedScreenshotsData const&);
    ShowcasedScreenshotsData(ShowcasedScreenshotsData const&);
    ShowcasedScreenshotsData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~ShowcasedScreenshotsData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Screenshots
