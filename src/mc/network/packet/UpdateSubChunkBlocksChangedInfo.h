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
    // member functions
    // NOLINTBEGIN
    MCAPI UpdateSubChunkBlocksChangedInfo();

    MCAPI UpdateSubChunkBlocksChangedInfo(::UpdateSubChunkBlocksChangedInfo const&);

    MCAPI UpdateSubChunkBlocksChangedInfo(
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& blocksChanged,
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& extraBlocksChanged
    );

    MCAPI void
    add(::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg);

    MCAPI ::UpdateSubChunkBlocksChangedInfo& operator=(::UpdateSubChunkBlocksChangedInfo const&);

    MCAPI ~UpdateSubChunkBlocksChangedInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCAPI void* $ctor(::UpdateSubChunkBlocksChangedInfo const&);

    MCAPI void* $ctor(
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& blocksChanged,
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& extraBlocksChanged
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
