#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IReplayableActorInput {
public:
    // prevent constructor by default
    IReplayableActorInput& operator=(IReplayableActorInput const&);
    IReplayableActorInput(IReplayableActorInput const&);
    IReplayableActorInput();
};
