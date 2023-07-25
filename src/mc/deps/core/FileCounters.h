#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

struct FileCounters {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_PROFILE_FILECOUNTERS
public:
    FileCounters& operator=(FileCounters const&) = delete;
    FileCounters(FileCounters const&)            = delete;
    FileCounters()                               = delete;
#endif

public:
};

}; // namespace Core::Profile
