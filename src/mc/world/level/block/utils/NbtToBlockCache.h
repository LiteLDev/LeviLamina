#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockSerializationUtils {

struct NbtToBlockCache {

public:
    // prevent constructor by default
    NbtToBlockCache& operator=(NbtToBlockCache const&) = delete;
    NbtToBlockCache(NbtToBlockCache const&)            = delete;
    NbtToBlockCache()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1NbtToBlockCache\@BlockSerializationUtils\@\@QEAA\@XZ
     */
    MCAPI ~NbtToBlockCache();
    // NOLINTEND
};

}; // namespace BlockSerializationUtils
