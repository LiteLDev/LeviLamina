#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/ChunkPos.h"

struct ActorChunkTransferEntry {
    ChunkPos mOldChunkPos;
    ChunkPos mNewChunkPos;
};
