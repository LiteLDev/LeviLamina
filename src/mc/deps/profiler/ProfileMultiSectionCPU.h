#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class ProfileMultiSectionCPU {
public:
    // ProfileMultiSectionCPU inner types declare
    // clang-format off
    class ProfileSectionSuspend;
    // clang-format on

    // ProfileMultiSectionCPU inner types define
    class ProfileSectionSuspend {
    public:
        // prevent constructor by default
        ProfileSectionSuspend& operator=(ProfileSectionSuspend const&);
        ProfileSectionSuspend(ProfileSectionSuspend const&);
        ProfileSectionSuspend();
    };

public:
    // prevent constructor by default
    ProfileMultiSectionCPU& operator=(ProfileMultiSectionCPU const&);
    ProfileMultiSectionCPU(ProfileMultiSectionCPU const&);
    ProfileMultiSectionCPU();
};

} // namespace Core::Profile
