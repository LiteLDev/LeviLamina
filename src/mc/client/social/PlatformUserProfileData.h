#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct PlatformUserProfileData {
public:
    // prevent constructor by default
    PlatformUserProfileData& operator=(PlatformUserProfileData const&);
    PlatformUserProfileData(PlatformUserProfileData const&);
    PlatformUserProfileData();
};

} // namespace Social
