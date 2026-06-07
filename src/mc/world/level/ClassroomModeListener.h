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
class IMinecraftEventing;
class LevelChunk;
struct ActorBlockSyncMessage;
// clang-format on

class ClassroomModeListener : public ::LevelListener {
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ClassroomModeListener();

#else // LL_PLAT_C
#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onEntityAdded(::Actor&) /*override*/;

    virtual void onEntityRemoved(::Actor&) /*override*/;

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

    virtual void onChunkLoaded(::ChunkSource&, ::LevelChunk&) /*override*/;

    virtual void onChunkUnloaded(::LevelChunk&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI explicit ClassroomModeListener(::IMinecraftEventing& eventing);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::IMinecraftEventing& eventing);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCFOLD void $onEntityAdded(::Actor&);

    MCFOLD void $onEntityRemoved(::Actor&);

    MCFOLD void $onBlockChanged(
        ::BlockSource&                 source,
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget      eventTarget,
        ::Actor*                       blockChangeSource
    );

    MCFOLD void $onAreaChanged(::BlockSource& source, ::BlockPos const& min, ::BlockPos const& max);

    MCFOLD void $onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    MCFOLD void $onChunkUnloaded(::LevelChunk&);
#endif


    // NOLINTEND
};
