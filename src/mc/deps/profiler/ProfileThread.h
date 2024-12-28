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
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ProfileThread(char const*);

    MCAPI ~ProfileThread();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(char const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core::Profile
