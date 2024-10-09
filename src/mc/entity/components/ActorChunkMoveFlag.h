#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorChunkMoveFlag {
public:
    // prevent constructor by default
    ActorChunkMoveFlag& operator=(ActorChunkMoveFlag const&);
    ActorChunkMoveFlag(ActorChunkMoveFlag const&);
    ActorChunkMoveFlag();
};
