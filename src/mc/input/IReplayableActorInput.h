#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IReplayableActorInput {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IREPLAYABLEACTORINPUT
public:
    IReplayableActorInput& operator=(IReplayableActorInput const&) = delete;
    IReplayableActorInput(IReplayableActorInput const&)            = delete;
    IReplayableActorInput()                                        = delete;
#endif

public:
};
