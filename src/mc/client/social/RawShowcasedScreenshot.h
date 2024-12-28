#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct RawShowcasedScreenshot {
public:
    // prevent constructor by default
    RawShowcasedScreenshot& operator=(RawShowcasedScreenshot const&);
    RawShowcasedScreenshot(RawShowcasedScreenshot const&);
    RawShowcasedScreenshot();
};

} // namespace Social
