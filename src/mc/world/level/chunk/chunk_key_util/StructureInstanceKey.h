#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/LevelChunkTag.h"
#include "mc/world/level/chunk/chunk_key_util/ChunkPosData.h"
#include "mc/world/level/dimension/DimensionType.h"

namespace ChunkKeyUtil {

struct StructureInstanceKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::ChunkKeyUtil::ChunkPosData> mChunkKey;
    ::ll::TypedStorage<4, 4, ::DimensionType>              mDimensionId;
    ::ll::TypedStorage<1, 1, ::LevelChunkTag const>        mTag;
    ::ll::TypedStorage<8, 8, uint64>                       mStructureType;
    // NOLINTEND
};

} // namespace ChunkKeyUtil
