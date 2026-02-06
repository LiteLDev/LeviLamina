#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class ChunkSource;
class LevelChunk;
struct ActorBlockSyncMessage;
// clang-format on

class ClassroomModeListener : public ::LevelListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onEntityAdded(::Actor& entity) /*override*/;

    virtual void onEntityRemoved(::Actor& entity) /*override*/;

    virtual void onBlockChanged(
        ::BlockSource&                 source,
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget      eventTarget,
        ::Actor*                       blockChangeSource
    ) /*override*/;

    virtual void onAreaChanged(::BlockSource& source, ::BlockPos const& min, ::BlockPos const& max) /*override*/;

    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    virtual void onChunkUnloaded(::LevelChunk& lc) /*override*/;

    virtual ~ClassroomModeListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCFOLD void $onEntityAdded(::Actor& entity);

    MCFOLD void $onEntityRemoved(::Actor& entity);

    MCFOLD void $onAreaChanged(::BlockSource& source, ::BlockPos const& min, ::BlockPos const& max);

    MCFOLD void $onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    MCFOLD void $onChunkUnloaded(::LevelChunk& lc);
#endif


    // NOLINTEND
};
