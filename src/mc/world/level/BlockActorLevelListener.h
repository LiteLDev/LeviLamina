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

class BlockActorLevelListener : public ::LevelListener {
public:
    // prevent constructor by default
    BlockActorLevelListener& operator=(BlockActorLevelListener const&);
    BlockActorLevelListener(BlockActorLevelListener const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockActorLevelListener();

    // vIndex: 19
    virtual void onChunkLoaded(class ChunkSource& source, class LevelChunk& lc);

    // vIndex: 22
    virtual void onChunkUnloaded(class LevelChunk& lc);

    MCAPI BlockActorLevelListener();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI void onChunkLoaded$(class ChunkSource& source, class LevelChunk& lc);

    MCAPI void onChunkUnloaded$(class LevelChunk& lc);

    // NOLINTEND
};
