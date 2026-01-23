#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class ProfileGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8e0dbd;
    ::ll::UntypedStorage<4, 4>  mUnk247682;
    ::ll::UntypedStorage<1, 1>  mUnk391bc6;
    ::ll::UntypedStorage<8, 8>  mUnkdb2d47;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileGroup& operator=(ProfileGroup const&);
    ProfileGroup(ProfileGroup const&);
    ProfileGroup();
};

} // namespace Core::Profile
