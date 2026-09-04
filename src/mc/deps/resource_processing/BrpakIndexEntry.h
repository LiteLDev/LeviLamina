#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct BrpakIndexEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdb3807;
    ::ll::UntypedStorage<8, 8> mUnk5d218f;
    ::ll::UntypedStorage<4, 4> mUnk667a32;
    // NOLINTEND

public:
    // prevent constructor by default
    BrpakIndexEntry& operator=(BrpakIndexEntry const&);
    BrpakIndexEntry(BrpakIndexEntry const&);
    BrpakIndexEntry();
};

} // namespace Bedrock::Resources
