#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ParticleType.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/block/LevelEvent.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class ClassroomModeListener : public ::LevelListener {
public:
    // prevent constructor by default
    ClassroomModeListener& operator=(ClassroomModeListener const&);
    ClassroomModeListener(ClassroomModeListener const&);
    ClassroomModeListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClassroomModeListener() = default;

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

    // vIndex: 17
    virtual void onEntityAdded(class Actor& entity);

    // vIndex: 18
    virtual void onEntityRemoved(class Actor& entity);

    // vIndex: 19
    virtual void onChunkLoaded(class ChunkSource& source, class LevelChunk& lc);

    // vIndex: 22
    virtual void onChunkUnloaded(class LevelChunk& lc);

    MCAPI explicit ClassroomModeListener(class IMinecraftEventing& eventing);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

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

    MCAPI void onChunkLoaded$(class ChunkSource& source, class LevelChunk& lc);

    MCAPI void onChunkUnloaded$(class LevelChunk& lc);

    MCAPI void onEntityAdded$(class Actor& entity);

    MCAPI void onEntityRemoved$(class Actor& entity);

    // NOLINTEND
};
