#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockSource.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockChangeContext;
class BlockPos;
struct ActorBlockSyncMessage;
// clang-format on

class EndDecorationBlockSource : public ::BlockSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool setBlock(
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangeContext const&    changeSourceContext
    ) /*override*/;

    virtual bool setExtraBlock(::BlockPos const& pos, ::Block const& block, int updateFlags) /*override*/;

    virtual bool removeBlock(::BlockPos const& pos, ::BlockChangeContext const& changeSourceContext) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $setBlock(
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangeContext const&    changeSourceContext
    );

    MCAPI bool $setExtraBlock(::BlockPos const& pos, ::Block const& block, int updateFlags);

    MCAPI bool $removeBlock(::BlockPos const& pos, ::BlockChangeContext const& changeSourceContext);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
