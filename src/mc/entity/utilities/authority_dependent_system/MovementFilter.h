#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AuthorityDependentSystem {

enum class MovementFilter : int {
    ClientAuthoritative    = 0,
    NotClientAuthoritative = 1,
    AntiCheat              = 2,
    NotAntiCheat           = 3,
};

}
