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
    MCAPI explicit ProfileThread(char const* name);

    MCAPI ~ProfileThread();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(char const* name);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Core::Profile
