#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class ProfileSectionCPU {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkcb8da3;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileSectionCPU& operator=(ProfileSectionCPU const&);
    ProfileSectionCPU(ProfileSectionCPU const&);
    ProfileSectionCPU();
};

} // namespace Core::Profile
