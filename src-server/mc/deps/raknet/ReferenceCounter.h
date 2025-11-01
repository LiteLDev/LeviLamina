#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class ReferenceCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk14af39;
    // NOLINTEND

public:
    // prevent constructor by default
    ReferenceCounter& operator=(ReferenceCounter const&);
    ReferenceCounter(ReferenceCounter const&);
    ReferenceCounter();

};

}
