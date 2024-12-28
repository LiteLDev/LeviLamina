#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlobCache {

class Cache {
public:
    // prevent constructor by default
    Cache& operator=(Cache const&);
    Cache(Cache const&);
    Cache();
};

} // namespace ClientBlobCache
