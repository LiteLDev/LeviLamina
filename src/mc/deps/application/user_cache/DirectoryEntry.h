#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct DirectoryEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk52d55b;
    ::ll::UntypedStorage<8, 8>  mUnk3689d0;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryEntry& operator=(DirectoryEntry const&);
    DirectoryEntry(DirectoryEntry const&);
    DirectoryEntry();
};

} // namespace Bedrock
