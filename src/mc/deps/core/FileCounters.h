#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

struct FileCounters {

public:
    // prevent constructor by default
    FileCounters& operator=(FileCounters const&) = delete;
    FileCounters(FileCounters const&)            = delete;
    FileCounters()                               = delete;
};

}; // namespace Core::Profile
