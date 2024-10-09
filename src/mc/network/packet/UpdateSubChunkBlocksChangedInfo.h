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

    MCAPI void
    add(class BlockPos const&               pos,
        uint                                layer,
        class Block const&                  block,
        int                                 updateFlags,
        struct ActorBlockSyncMessage const* syncMsg);

    MCAPI ~UpdateSubChunkBlocksChangedInfo();

    // NOLINTEND
};
