#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class IUserManager {

public:
    // prevent constructor by default
    IUserManager& operator=(IUserManager const&) = delete;
    IUserManager(IUserManager const&)            = delete;
    IUserManager()                               = delete;
};

}; // namespace Social
