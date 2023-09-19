#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct DirectoryEntry {
public:
    // prevent constructor by default
    DirectoryEntry& operator=(DirectoryEntry const&);
    DirectoryEntry(DirectoryEntry const&);
    DirectoryEntry();
};

}; // namespace Bedrock
