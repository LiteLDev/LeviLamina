#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class ProfileThread {
public:
    // prevent constructor by default
    ProfileThread& operator=(ProfileThread const&);
    ProfileThread(ProfileThread const&);
    ProfileThread();

public:
    // NOLINTBEGIN
    // symbol: ??0ProfileThread@Profile@Core@@QEAA@PEBD@Z
    MCAPI explicit ProfileThread(char const* name);

    // symbol: ??1ProfileThread@Profile@Core@@QEAA@XZ
    MCAPI ~ProfileThread();

    // NOLINTEND
};

}; // namespace Core::Profile
