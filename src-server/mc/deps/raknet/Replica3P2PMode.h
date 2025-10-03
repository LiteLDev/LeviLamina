#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class Replica3P2PMode : int {
    SingleOwner                           = 0,
    MultiOwnerCurrentlyAuthoritative      = 1,
    MultiOwnerNotCurrentlyAuthoritative   = 2,
    StaticObjectCurrentlyAuthoritative    = 3,
    StaticObjectNotCurrentlyAuthoritative = 4,
};

}
