#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class ProfileThread {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_PROFILE_PROFILETHREAD
public:
    ProfileThread& operator=(ProfileThread const&) = delete;
    ProfileThread(ProfileThread const&)            = delete;
    ProfileThread()                                = delete;
#endif

public:
    /**
     * @symbol ??0ProfileThread\@Profile\@Core\@\@QEAA\@PEBD\@Z
     */
    MCAPI ProfileThread(char const*);
    /**
     * @symbol ??1ProfileThread\@Profile\@Core\@\@QEAA\@XZ
     */
    MCAPI ~ProfileThread();
};

}; // namespace Core::Profile
