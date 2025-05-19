#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockChangedEventTarget.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
struct ActorBlockSyncMessage;
// clang-format on

class BlockSourceListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockSourceListener();

    // vIndex: 1
    virtual void onSourceCreated(::BlockSource& source);

    // vIndex: 2
    virtual void onSourceDestroyed(::BlockSource& source);

    // vIndex: 3
    virtual void onAreaChanged(::BlockSource& source, ::BlockPos const& min, ::BlockPos const& max);

    // vIndex: 4
    virtual void onBlockChanged(
        ::BlockSource&,
        ::BlockPos const&,
        uint,
        ::Block const&,
        ::Block const&,
        int,
        ::ActorBlockSyncMessage const*,
        ::BlockChangedEventTarget,
        ::Actor*
    );

    // vIndex: 5
    virtual void onBrightnessChanged(::BlockSource& source, ::BlockPos const& pos);

    // vIndex: 6
    virtual void onBlockEntityChanged(::BlockSource& source, ::BlockActor& te);

    // vIndex: 7
    virtual void onEntityChanged(::BlockSource& source, ::Actor& entity);

    // vIndex: 8
    virtual void onBlockEvent(::BlockSource& source, int x, int y, int z, int b0, int b1);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onSourceCreated(::BlockSource& source);

    MCFOLD void $onSourceDestroyed(::BlockSource& source);

    MCFOLD void $onAreaChanged(::BlockSource& source, ::BlockPos const& min, ::BlockPos const& max);

    MCAPI void $onBrightnessChanged(::BlockSource& source, ::BlockPos const& pos);

    MCFOLD void $onBlockEntityChanged(::BlockSource& source, ::BlockActor& te);

    MCFOLD void $onEntityChanged(::BlockSource& source, ::Actor& entity);

    MCFOLD void $onBlockEvent(::BlockSource& source, int x, int y, int z, int b0, int b1);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
