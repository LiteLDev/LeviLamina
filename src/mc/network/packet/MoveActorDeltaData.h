#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveActorDeltaData {

public:
    // prevent constructor by default
    MoveActorDeltaData& operator=(MoveActorDeltaData const&) = delete;
    MoveActorDeltaData(MoveActorDeltaData const&)            = delete;
    MoveActorDeltaData()                                     = delete;
};
