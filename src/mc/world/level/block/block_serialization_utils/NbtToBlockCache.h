#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/block_serialization_utils/NBTState.h"

class Block;

namespace BlockSerializationUtils {

struct NbtToBlockCache {
public:
    std::map<uint64, std::pair<NBTState, Block const*>> mCache;
    std::mutex                                          mMutex;

public:
    // NOLINTBEGIN
    MCAPI ~NbtToBlockCache();

    // NOLINTEND
};

}; // namespace BlockSerializationUtils
