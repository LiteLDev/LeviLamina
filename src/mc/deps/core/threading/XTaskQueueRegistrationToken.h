#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct XTaskQueueRegistrationToken {
public:
    // prevent constructor by default
    XTaskQueueRegistrationToken& operator=(XTaskQueueRegistrationToken const&);
    XTaskQueueRegistrationToken(XTaskQueueRegistrationToken const&);
    XTaskQueueRegistrationToken();
};
