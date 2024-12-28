#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class IdentitySignInTrigger : int {
    Unknown   = 4294967295,
    Automatic = 0,
    User      = 1,
    External  = 2,
};

}
