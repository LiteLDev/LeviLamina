#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DBChunkStorageKey {

public:
    // prevent constructor by default
    DBChunkStorageKey& operator=(DBChunkStorageKey const&) = delete;
    DBChunkStorageKey(DBChunkStorageKey const&)            = delete;
    DBChunkStorageKey()                                    = delete;
};
