#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ScalarOptional.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/storage/BlendingBlockType.h"
#include "mc/world/level/storage/BlendingConfig.h"

// auto generated forward declare list
// clang-format off
struct BiomeIdType;
// clang-format on

class BlendingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::BlendingConfig>                                      mConfig;
    ::ll::TypedStorage<1, 1, ::LevelChunk::Neighbors>                                mNeighbors;
    ::ll::TypedStorage<2, 32, ::std::array<::ScalarOptional<short>, 16>>             mHeights;
    ::ll::TypedStorage<8, 384, ::std::array<::std::vector<::BiomeIdType>, 16>>       mBiomes3D;
    ::ll::TypedStorage<8, 384, ::std::array<::std::vector<float>, 16>>               mDensity;
    ::ll::TypedStorage<8, 384, ::std::array<::std::vector<::BlendingBlockType>, 16>> mBlockTypes;
    // NOLINTEND
};
