#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class UserManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOCIAL_USERMANAGER
public:
    UserManager& operator=(UserManager const&) = delete;
    UserManager(UserManager const&)            = delete;
    UserManager()                              = delete;
#endif

public:
};

}; // namespace Social
