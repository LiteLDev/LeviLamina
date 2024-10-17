#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StrictActorIDEntityContextPair {
public:
    // prevent constructor by default
    StrictActorIDEntityContextPair& operator=(StrictActorIDEntityContextPair const&);
    StrictActorIDEntityContextPair(StrictActorIDEntityContextPair const&);
    StrictActorIDEntityContextPair();
};
