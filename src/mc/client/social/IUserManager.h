#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class IUserManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOCIAL_IUSERMANAGER
public:
    IUserManager& operator=(IUserManager const&) = delete;
    IUserManager(IUserManager const&)            = delete;
    IUserManager()                               = delete;
#endif

public:
};

}; // namespace Social
