#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/SubChunkFormat.h"
#include "mc/world/level/chunk/SubChunkStorage.h"

namespace SubChunkBlockStorageUtil {
// NOLINTBEGIN
// symbol:
// ?makeDeserialized@SubChunkBlockStorageUtil@@YA?AV?$unique_ptr@V?$SubChunkStorage@VBlock@@@@U?$default_delete@V?$SubChunkStorage@VBlock@@@@@std@@@std@@AEAVIDataInput@@AEBVBlockPalette@@AEBV?$function@$$A6APEBVBlock@@_K@Z@3@AEBV?$function@$$A6APEBVBlock@@AEBVCompoundTag@@@Z@3@W4SubChunkFormat@@@Z
MCAPI std::unique_ptr<class SubChunkStorage<class Block>> makeDeserialized(
    class IDataInput&,
    class BlockPalette const&,
    std::function<class Block const*(uint64)> const&,
    std::function<class Block const*(class CompoundTag const&)> const&,
    ::SubChunkFormat
);
// NOLINTEND

}; // namespace SubChunkBlockStorageUtil
