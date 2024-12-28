#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class IdentitySignInState : int {
    NotSignedIn = 0,
    SigningIn   = 1,
    SignedIn    = 2,
    Count       = 3,
};

}
