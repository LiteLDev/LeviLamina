#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorPermutation {

public:
    // prevent constructor by default
    ActorPermutation& operator=(ActorPermutation const&) = delete;
    ActorPermutation(ActorPermutation const&)            = delete;
    ActorPermutation()                                   = delete;
};
