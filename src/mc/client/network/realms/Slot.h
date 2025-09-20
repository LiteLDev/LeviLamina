#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct Slot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd28005;
    ::ll::UntypedStorage<8, 32> mUnkebe3cb;
    ::ll::UntypedStorage<4, 4>  mUnk412907;
    ::ll::UntypedStorage<8, 32> mUnkdb860b;
    ::ll::UntypedStorage<8, 16> mUnke44e59;
    ::ll::UntypedStorage<1, 1>  mUnk5097be;
    ::ll::UntypedStorage<8, 8>  mUnk18d97d;
    // NOLINTEND

public:
    // prevent constructor by default
    Slot& operator=(Slot const&);
    Slot(Slot const&);
    Slot();
};

} // namespace Realms
