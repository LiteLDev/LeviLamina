#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
struct ActorBlockSyncMessage;
struct UpdateSubChunkNetworkBlockInfo;
// clang-format on

struct UpdateSubChunkBlocksChangedInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::UpdateSubChunkNetworkBlockInfo>> mStandards;
    ::ll::TypedStorage<8, 24, ::std::vector<::UpdateSubChunkNetworkBlockInfo>> mExtras;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSubChunkBlocksChangedInfo& operator=(UpdateSubChunkBlocksChangedInfo const&);
    UpdateSubChunkBlocksChangedInfo(UpdateSubChunkBlocksChangedInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UpdateSubChunkBlocksChangedInfo();

    MCAPI void
    add(::BlockPos const& pos, uint layer, ::Block const& block, int updateFlags, ::ActorBlockSyncMessage const* syncMsg
    );

    MCAPI ~UpdateSubChunkBlocksChangedInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
