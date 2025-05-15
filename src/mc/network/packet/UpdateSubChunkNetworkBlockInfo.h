#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkBlockPosition.h"
#include "mc/world/level/ActorBlockSyncMessage.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

struct UpdateSubChunkNetworkBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition>  mPos;
    ::ll::TypedStorage<4, 4, uint>                     mRuntimeId;
    ::ll::TypedStorage<1, 1, uchar>                    mUpdateFlags;
    ::ll::TypedStorage<8, 16, ::ActorBlockSyncMessage> mSyncMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSubChunkNetworkBlockInfo& operator=(UpdateSubChunkNetworkBlockInfo const&);
    UpdateSubChunkNetworkBlockInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpdateSubChunkNetworkBlockInfo(::UpdateSubChunkNetworkBlockInfo const&);

    MCNAPI UpdateSubChunkNetworkBlockInfo(
        ::BlockPos const&              pos,
        uint                           blockId,
        uchar                          updateFlags,
        ::ActorBlockSyncMessage const& syncMsg
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UpdateSubChunkNetworkBlockInfo const&);

    MCNAPI void* $ctor(::BlockPos const& pos, uint blockId, uchar updateFlags, ::ActorBlockSyncMessage const& syncMsg);
    // NOLINTEND
};
