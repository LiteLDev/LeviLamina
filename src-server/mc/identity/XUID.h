#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct XUID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkacf01a;
    // NOLINTEND

public:
    // prevent constructor by default
    XUID& operator=(XUID const&);
    XUID(XUID const&);
    XUID();

};

}
