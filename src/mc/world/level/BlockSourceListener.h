#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockChangedEventTarget.h"

class BlockSource;
class BlockPos;
class Actor;
struct ActorBlockSyncMessage;

class BlockSourceListener {
public:
    // prevent constructor by default
    BlockSourceListener& operator=(BlockSourceListener const&);
    BlockSourceListener(BlockSourceListener const&);
    BlockSourceListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockSourceListener();

    // vIndex: 1
    virtual void onSourceCreated(class BlockSource& source);

    // vIndex: 2
    virtual void onSourceDestroyed(class BlockSource& source);

    // vIndex: 3
    virtual void onAreaChanged(class BlockSource& source, class BlockPos const& min, class BlockPos const& max);

    // vIndex: 4
    virtual void onBlockChanged(
        class BlockSource&                  source,
        class BlockPos const&               pos,
        uint                                layer,
        class Block const&                  block,
        class Block const&                  oldBlock,
        int                                 updateFlags,
        struct ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget           eventTarget,
        class Actor*                        blockChangeSource
    );

    // vIndex: 5
    virtual void onBrightnessChanged(class BlockSource& source, class BlockPos const& pos);

    // vIndex: 6
    virtual void onBlockEntityChanged(class BlockSource& source, class BlockActor& te);

    // vIndex: 7
    virtual void onEntityChanged(class BlockSource& source, class Actor& entity);

    // vIndex: 8
    virtual void onBlockEvent(class BlockSource& source, int x, int y, int z, int b0, int b1);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI void onAreaChanged$(class BlockSource& source, class BlockPos const& min, class BlockPos const& max);

    MCAPI void onBlockChanged$(
        class BlockSource&                  source,
        class BlockPos const&               pos,
        uint                                layer,
        class Block const&                  block,
        class Block const&                  oldBlock,
        int                                 updateFlags,
        struct ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget           eventTarget,
        class Actor*                        blockChangeSource
    );

    MCAPI void onBlockEntityChanged$(class BlockSource& source, class BlockActor& te);

    MCAPI void onBlockEvent$(class BlockSource& source, int x, int y, int z, int b0, int b1);

    MCAPI void onBrightnessChanged$(class BlockSource& source, class BlockPos const& pos);

    MCAPI void onEntityChanged$(class BlockSource& source, class Actor& entity);

    MCAPI void onSourceCreated$(class BlockSource& source);

    MCAPI void onSourceDestroyed$(class BlockSource& source);

    // NOLINTEND
};
