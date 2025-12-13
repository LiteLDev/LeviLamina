#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ILevelBlockDestroyerProxy.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class LevelEventManager;
// clang-format on

class LevelBlockDestroyerProxy : public ::ILevelBlockDestroyerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void sendEvents(
        ::LevelEventManager& levelEventManager,
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block
    ) /*override*/;

    virtual void dropResources(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) /*override*/;

    virtual ~LevelBlockDestroyerProxy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendEvents(
        ::LevelEventManager& levelEventManager,
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block
    );

    MCNAPI void $dropResources(::BlockSource& region, ::BlockPos const& pos, ::Block const& block);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
