#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
class ChunkViewSource;
class Vec3;
// clang-format on

class NetworkChunkSubscriber {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mLastChunkUpdatePosition;
    ::ll::TypedStorage<4, 4, uint>                                 mHandleForChunkBuildOrderUpdates;
    ::ll::TypedStorage<4, 4, uint>                                 mBlockRadiusLimit;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkViewSource>> mSource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI bool moveRegion(::BlockPos const& position, uint blockRadius, ::Vec3 const& direction, float minDistance);

    MCAPI void prepareRegion(::ChunkSource& mainChunkSource, ::ChunkPos& center);
#endif
    // NOLINTEND
};
