#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class IdentityEventResponse : int {
    None           = 0,
    ReadyForSignIn = 1,
    Error          = 2,
};

}
