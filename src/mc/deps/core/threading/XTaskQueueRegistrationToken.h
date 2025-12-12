#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct XTaskQueueRegistrationToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb58d0b;
    // NOLINTEND

public:
    // prevent constructor by default
    XTaskQueueRegistrationToken& operator=(XTaskQueueRegistrationToken const&);
    XTaskQueueRegistrationToken(XTaskQueueRegistrationToken const&);
    XTaskQueueRegistrationToken();
};
