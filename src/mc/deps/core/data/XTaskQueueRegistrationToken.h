#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct XTaskQueueRegistrationToken {

public:
    // prevent constructor by default
    XTaskQueueRegistrationToken& operator=(XTaskQueueRegistrationToken const&) = delete;
    XTaskQueueRegistrationToken(XTaskQueueRegistrationToken const&)            = delete;
    XTaskQueueRegistrationToken()                                              = delete;
};
