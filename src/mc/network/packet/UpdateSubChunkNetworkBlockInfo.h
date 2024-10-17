#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/world/level/ActorBlockSyncMessage.h"

struct UpdateSubChunkNetworkBlockInfo {
public:
    NetworkBlockPosition  mPos;         // this+0x0
    uint                  mRuntimeId;   // this+0xC
    uchar                 mUpdateFlags; // this+0x10
    ActorBlockSyncMessage mSyncMessage; // this+0x18

public:
    // prevent constructor by default
    UpdateSubChunkNetworkBlockInfo& operator=(UpdateSubChunkNetworkBlockInfo const&);
    UpdateSubChunkNetworkBlockInfo(UpdateSubChunkNetworkBlockInfo const&);
    UpdateSubChunkNetworkBlockInfo();

public:
    // NOLINTBEGIN
    MCAPI ~UpdateSubChunkNetworkBlockInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
