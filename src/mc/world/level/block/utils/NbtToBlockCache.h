#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/utils/NBTState.h"

namespace BlockSerializationUtils {

struct NbtToBlockCache {
public:
    std::map<uint64, std::pair<BlockSerializationUtils::NBTState, const class Block*>> mCache;
    std::mutex                                                                         mMutex;

public:
    // NOLINTBEGIN
    // symbol: ??1NbtToBlockCache@BlockSerializationUtils@@QEAA@XZ
    MCAPI ~NbtToBlockCache();

    // NOLINTEND
};

}; // namespace BlockSerializationUtils
