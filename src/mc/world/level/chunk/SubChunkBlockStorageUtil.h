#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/SubChunkFormat.h"
#include "mc/world/level/chunk/SubChunkStorage.h"

namespace SubChunkBlockStorageUtil {
// NOLINTBEGIN
MCAPI std::unique_ptr<class SubChunkStorage<class Block>> makeDeserialized(
    class IDataInput&,
    std::function<class Block const*(uint64)> const&,
    std::function<class Block const*(class CompoundTag const&)> const&,
    ::SubChunkFormat
);
// NOLINTEND

}; // namespace SubChunkBlockStorageUtil
