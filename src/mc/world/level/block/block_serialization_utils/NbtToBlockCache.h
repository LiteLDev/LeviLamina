#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockSerializationUtils {

struct NbtToBlockCache {
public:
    // prevent constructor by default
    NbtToBlockCache& operator=(NbtToBlockCache const&);
    NbtToBlockCache(NbtToBlockCache const&);
    NbtToBlockCache();

public:
    // NOLINTBEGIN
    MCAPI ~NbtToBlockCache();

    // NOLINTEND
};

}; // namespace BlockSerializationUtils
