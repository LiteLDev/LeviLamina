#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class SFATMutex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkfae03e;
    ::ll::UntypedStorage<1, 1>  mUnk3eecff;
    ::ll::UntypedStorage<4, 4>  mUnkee0d92;
    // NOLINTEND

public:
    // prevent constructor by default
    SFATMutex& operator=(SFATMutex const&);
    SFATMutex(SFATMutex const&);
    SFATMutex();
};

} // namespace SFAT
