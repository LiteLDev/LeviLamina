#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UpdateSubChunkNetworkBlockInfo {
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
