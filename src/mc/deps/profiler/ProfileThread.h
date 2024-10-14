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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Core::Profile
