#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DBChunkStorageKey {
public:
    // prevent constructor by default
    DBChunkStorageKey& operator=(DBChunkStorageKey const&);
    DBChunkStorageKey(DBChunkStorageKey const&);
    DBChunkStorageKey();
};
