#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkBlockPosition.h"
#include "mc/network/packet/UpdateSubChunkBlocksChangedInfo.h"

struct UpdateSubChunkBlocksPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::UpdateSubChunkBlocksChangedInfo> mBlocksChanged;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition>            mSubChunkBlockPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSubChunkBlocksPacketPayload& operator=(UpdateSubChunkBlocksPacketPayload const&);
    UpdateSubChunkBlocksPacketPayload(UpdateSubChunkBlocksPacketPayload const&);
    UpdateSubChunkBlocksPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::UpdateSubChunkBlocksPacketPayload& operator=(::UpdateSubChunkBlocksPacketPayload&&);

    MCNAPI ~UpdateSubChunkBlocksPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
