#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UserAuthentication {
public:
    // prevent constructor by default
    UserAuthentication& operator=(UserAuthentication const&);
    UserAuthentication(UserAuthentication const&);
    UserAuthentication();
};
