#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace edu::auth {

struct SignInCredsRefreshFailed {
public:
    // prevent constructor by default
    SignInCredsRefreshFailed& operator=(SignInCredsRefreshFailed const&);
    SignInCredsRefreshFailed(SignInCredsRefreshFailed const&);
    SignInCredsRefreshFailed();
};

} // namespace edu::auth
