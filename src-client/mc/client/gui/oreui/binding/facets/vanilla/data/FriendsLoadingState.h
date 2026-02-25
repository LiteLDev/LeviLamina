#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class FriendsLoadingState : int {
    Unavailable = 0,
    Loading     = 1,
    Ready       = 2,
    Error       = 3,
};

}
