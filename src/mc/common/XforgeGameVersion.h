#pragma once

#include "mc/_HeaderOutputPredefine.h"

class XforgeGameVersion {
public:
    // XforgeGameVersion inner types define
    enum class Octet : uint {
        Major     = 0,
        Minor     = 1,
        Patch     = 2,
        Revision  = 3,
        Beta      = 4,
        NumOctets = 5,
        Invalid   = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 20> mUnkd27749;
    ::ll::UntypedStorage<8, 32> mUnkbd0e2a;
    // NOLINTEND

public:
    // prevent constructor by default
    XforgeGameVersion& operator=(XforgeGameVersion const&);
    XforgeGameVersion(XforgeGameVersion const&);
    XforgeGameVersion();
};
