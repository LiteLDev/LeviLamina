#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/UpdateSubChunkNetworkBlockInfo.h"

struct UpdateSubChunkBlocksChangedInfo {
public:
    std::vector<UpdateSubChunkNetworkBlockInfo> mStandards; // this+0x0
    std::vector<UpdateSubChunkNetworkBlockInfo> mExtras;    // this+0x18

public:
    // prevent constructor by default
    UpdateSubChunkBlocksChangedInfo& operator=(UpdateSubChunkBlocksChangedInfo const&);
    UpdateSubChunkBlocksChangedInfo(UpdateSubChunkBlocksChangedInfo const&);

public:
    // NOLINTBEGIN
    MCAPI UpdateSubChunkBlocksChangedInfo();

    MCAPI void add(class BlockPos const&, uint, class Block const&, int, struct ActorBlockSyncMessage const*);

    MCAPI ~UpdateSubChunkBlocksChangedInfo();

    // NOLINTEND
};
