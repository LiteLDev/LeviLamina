#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/UpdateSubChunkNetworkBlockInfo.h"

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
    // symbol: ??0UpdateSubChunkBlocksChangedInfo@@QEAA@XZ
    MCAPI UpdateSubChunkBlocksChangedInfo();

    // symbol: ?add@UpdateSubChunkBlocksChangedInfo@@QEAAXAEBVBlockPos@@IAEBVBlock@@HPEBUActorBlockSyncMessage@@@Z
    MCAPI void add(class BlockPos const&, uint, class Block const&, int, struct ActorBlockSyncMessage const*);

    // symbol: ??1UpdateSubChunkBlocksChangedInfo@@QEAA@XZ
    MCAPI ~UpdateSubChunkBlocksChangedInfo();

    // NOLINTEND
};
