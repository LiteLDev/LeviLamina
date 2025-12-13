#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TeleportToOwnerParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk361990;
    ::ll::UntypedStorage<4, 4> mUnk864269;
    ::ll::UntypedStorage<1, 1> mUnkc355a4;
    // NOLINTEND

public:
    // prevent constructor by default
    TeleportToOwnerParameters& operator=(TeleportToOwnerParameters const&);
    TeleportToOwnerParameters(TeleportToOwnerParameters const&);
    TeleportToOwnerParameters();
};
