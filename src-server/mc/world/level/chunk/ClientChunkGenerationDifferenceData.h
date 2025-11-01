#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
// clang-format on

struct ClientChunkGenerationDifferenceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mDifferentBlocksCount;
    ::ll::TypedStorage<4, 4, uint> mSubChunksCheckedCount;
    ::ll::TypedStorage<4, 4, uint> mSubChunksFoundDifferentCount;
    ::ll::TypedStorage<8, 16, ::std::map<::std::pair<::Block const*, ::Block const*>, uint>> mDifferentBlocksMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<float, ::BlockPos>>> mDifferentBlockList;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mSharedMutex;
    // NOLINTEND

};
