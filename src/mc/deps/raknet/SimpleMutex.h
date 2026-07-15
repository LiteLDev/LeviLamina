#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SimpleMutex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkfaa54f;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleMutex& operator=(SimpleMutex const&);
    SimpleMutex(SimpleMutex const&);
    SimpleMutex();
};

} // namespace RakNet
