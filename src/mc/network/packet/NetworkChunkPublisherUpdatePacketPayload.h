#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
// clang-format on

struct NetworkChunkPublisherUpdatePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                mPosition;
    ::ll::TypedStorage<4, 4, uint>                       mRadius;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkPos>> mServerBuiltChunks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~NetworkChunkPublisherUpdatePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
