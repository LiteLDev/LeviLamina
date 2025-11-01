#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace History {

struct EntityWithCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke4456d;
    ::ll::UntypedStorage<8, 8> mUnka30418;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityWithCache& operator=(EntityWithCache const&);
    EntityWithCache(EntityWithCache const&);
    EntityWithCache();

};

}
