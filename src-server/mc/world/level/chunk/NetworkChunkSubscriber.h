#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ChunkViewSource;
// clang-format on

class NetworkChunkSubscriber {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mLastChunkUpdatePosition;
    ::ll::TypedStorage<4, 4, uint> mHandleForChunkBuildOrderUpdates;
    ::ll::TypedStorage<4, 4, uint> mBlockRadiusLimit;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkViewSource>> mSource;
    // NOLINTEND

};
