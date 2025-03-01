#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
// clang-format on

struct ActorChunkTransferEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ChunkPos> mOldChunkPos;
    ::ll::TypedStorage<8, 8, ::ChunkPos> mNewChunkPos;
    // NOLINTEND
};
