#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StrictActorIDEntityContextPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk8a86ea;
    ::ll::UntypedStorage<8, 8> mUnka87697;
    // NOLINTEND

public:
    // prevent constructor by default
    StrictActorIDEntityContextPair& operator=(StrictActorIDEntityContextPair const&);
    StrictActorIDEntityContextPair(StrictActorIDEntityContextPair const&);
    StrictActorIDEntityContextPair();
};
