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
    /**
     * @symbol ??0ProfileThread\@Profile\@Core\@\@QEAA\@PEBD\@Z
     */
    MCAPI ProfileThread(char const*); // NOLINT
    /**
     * @symbol ??1ProfileThread\@Profile\@Core\@\@QEAA\@XZ
     */
    MCAPI ~ProfileThread(); // NOLINT
};

}; // namespace Core::Profile
