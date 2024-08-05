#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UpdateSubChunkBlocksChangedInfo {
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
