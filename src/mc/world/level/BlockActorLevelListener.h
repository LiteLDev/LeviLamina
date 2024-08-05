#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ParticleType.h"
#include "mc/events/LevelEvent.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/block/utils/BlockChangedEventTarget.h"

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
};
