#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class ProfileGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke94a67;
    ::ll::UntypedStorage<4, 4>  mUnk247682;
    ::ll::UntypedStorage<1, 1>  mUnk391bc6;
    ::ll::UntypedStorage<8, 8>  mUnkdb2d47;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileGroup& operator=(ProfileGroup const&);
    ProfileGroup(ProfileGroup const&);
    ProfileGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ProfileGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core::Profile
