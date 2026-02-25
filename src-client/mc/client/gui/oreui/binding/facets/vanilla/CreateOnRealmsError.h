#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class CreateOnRealmsError : int {
    UnassignedDevVersion    = 0,
    MemberOfTooManyRealms   = 1,
    CannotConnectToRealm    = 2,
    CrossPlatformRestricted = 3,
    UnknownError            = 4,
};

}
