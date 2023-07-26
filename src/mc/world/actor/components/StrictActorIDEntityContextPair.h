#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StrictActorIDEntityContextPair {

public:
    // prevent constructor by default
    StrictActorIDEntityContextPair& operator=(StrictActorIDEntityContextPair const&) = delete;
    StrictActorIDEntityContextPair(StrictActorIDEntityContextPair const&)            = delete;
    StrictActorIDEntityContextPair()                                                 = delete;
};
