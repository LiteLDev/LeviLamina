#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/UpdateSubChunkBlocksChangedInfo.h"
#include "mc/world/level/BlockPos.h"

struct UpdateSubChunkBlocksPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::UpdateSubChunkBlocksChangedInfo> mBlocksChanged;
    ::ll::TypedStorage<4, 12, ::BlockPos>                        mSubChunkBlockPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSubChunkBlocksPacketPayload& operator=(UpdateSubChunkBlocksPacketPayload const&);
    UpdateSubChunkBlocksPacketPayload(UpdateSubChunkBlocksPacketPayload const&);
    UpdateSubChunkBlocksPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::UpdateSubChunkBlocksPacketPayload& operator=(::UpdateSubChunkBlocksPacketPayload&&);

    MCAPI ~UpdateSubChunkBlocksPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
