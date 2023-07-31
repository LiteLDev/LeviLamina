#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class ProfileThread {

public:
    // prevent constructor by default
    ProfileThread& operator=(ProfileThread const&) = delete;
    ProfileThread(ProfileThread const&)            = delete;
    ProfileThread()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ProfileThread\@Profile\@Core\@\@QEAA\@PEBD\@Z
     */
    MCAPI ProfileThread(char const*);
    /**
     * @symbol ??1ProfileThread\@Profile\@Core\@\@QEAA\@XZ
     */
    MCAPI ~ProfileThread();
    // NOLINTEND
};

}; // namespace Core::Profile
