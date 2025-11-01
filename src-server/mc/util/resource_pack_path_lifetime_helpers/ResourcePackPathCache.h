#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ResourcePackPathLifetimeHelpers {

class ResourcePackPathCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk792943;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackPathCache& operator=(ResourcePackPathCache const&);
    ResourcePackPathCache(ResourcePackPathCache const&);
    ResourcePackPathCache();

};

}
