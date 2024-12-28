#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class UserProfile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7d1cfb;
    // NOLINTEND

public:
    // prevent constructor by default
    UserProfile& operator=(UserProfile const&);
    UserProfile(UserProfile const&);
    UserProfile();
};

} // namespace Social
