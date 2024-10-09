#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

struct FileCounters {
public:
    // prevent constructor by default
    FileCounters& operator=(FileCounters const&);
    FileCounters(FileCounters const&);
    FileCounters();
};

}; // namespace Core::Profile
