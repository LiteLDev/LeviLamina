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
public:
    // prevent constructor by default
    ClassroomModeListener& operator=(ClassroomModeListener const&);
    ClassroomModeListener(ClassroomModeListener const&);
    ClassroomModeListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 17
    virtual void onEntityAdded(::Actor& entity) /*override*/;

    // vIndex: 18
    virtual void onEntityRemoved(::Actor& entity) /*override*/;

    // vIndex: 4
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

    // vIndex: 3
    virtual void onAreaChanged(::BlockSource& source, ::BlockPos const& min, ::BlockPos const& max) /*override*/;

    // vIndex: 19
    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    // vIndex: 22
    virtual void onChunkUnloaded(::LevelChunk& lc) /*override*/;

    // vIndex: 0
    virtual ~ClassroomModeListener() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClassroomModeListener(::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onEntityAdded(::Actor& entity);

    MCAPI void $onEntityRemoved(::Actor& entity);

    MCAPI void $onBlockChanged(
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

    MCAPI void $onAreaChanged(::BlockSource& source, ::BlockPos const& min, ::BlockPos const& max);

    MCAPI void $onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    MCAPI void $onChunkUnloaded(::LevelChunk& lc);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
