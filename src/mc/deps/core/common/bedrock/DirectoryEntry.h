#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct DirectoryEntry {

public:
    // prevent constructor by default
    DirectoryEntry& operator=(DirectoryEntry const&) = delete;
    DirectoryEntry(DirectoryEntry const&)            = delete;
    DirectoryEntry()                                 = delete;
};

}; // namespace Bedrock
