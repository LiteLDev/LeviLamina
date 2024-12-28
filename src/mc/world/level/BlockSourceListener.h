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
    // prevent constructor by default
    BlockSourceListener& operator=(BlockSourceListener const&);
    BlockSourceListener(BlockSourceListener const&);
    BlockSourceListener();

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
    virtual void
    onBlockChanged(::BlockSource&, ::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangedEventTarget, ::Actor*);

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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onSourceCreated(::BlockSource& source);

    MCAPI void $onSourceDestroyed(::BlockSource& source);

    MCAPI void $onAreaChanged(::BlockSource& source, ::BlockPos const& min, ::BlockPos const& max);

    MCAPI void
    $onBlockChanged(::BlockSource&, ::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangedEventTarget, ::Actor*);

    MCAPI void $onBrightnessChanged(::BlockSource& source, ::BlockPos const& pos);

    MCAPI void $onBlockEntityChanged(::BlockSource& source, ::BlockActor& te);

    MCAPI void $onEntityChanged(::BlockSource& source, ::Actor& entity);

    MCAPI void $onBlockEvent(::BlockSource& source, int x, int y, int z, int b0, int b1);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
