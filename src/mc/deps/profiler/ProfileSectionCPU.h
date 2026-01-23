#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class ProfileSectionCPU {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd93fa5;
    ::ll::UntypedStorage<1, 1> mUnk5cde8e;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileSectionCPU& operator=(ProfileSectionCPU const&);
    ProfileSectionCPU(ProfileSectionCPU const&);
    ProfileSectionCPU();
};

} // namespace Core::Profile
