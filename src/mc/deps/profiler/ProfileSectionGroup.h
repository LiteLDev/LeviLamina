#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class ProfileSectionGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkeb9438;
    ::ll::UntypedStorage<1, 1> mUnkf8f57a;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileSectionGroup& operator=(ProfileSectionGroup const&);
    ProfileSectionGroup(ProfileSectionGroup const&);
    ProfileSectionGroup();
};

} // namespace Core::Profile
