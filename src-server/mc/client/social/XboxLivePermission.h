#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct XboxLivePermission {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk413d3b;
    ::ll::UntypedStorage<1, 1> mUnkec77fd;
    // NOLINTEND

public:
    // prevent constructor by default
    XboxLivePermission& operator=(XboxLivePermission const&);
    XboxLivePermission(XboxLivePermission const&);
    XboxLivePermission();

};

}
