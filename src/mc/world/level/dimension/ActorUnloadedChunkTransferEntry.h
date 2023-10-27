#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/chunk/ChunkKey.h"

struct ActorUnloadedChunkTransferEntry {
    ChunkKey                     mFromChunkKey;    // this+0x0
    std::string                  mActorStorageKey; // this+0x10
    std::unique_ptr<CompoundTag> mActorTag;        // this+0x30
};
