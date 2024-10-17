#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/XTaskQueuePort.h"

class SubmitCallback {
public:
    // prevent constructor by default
    SubmitCallback& operator=(SubmitCallback const&);
    SubmitCallback(SubmitCallback const&);
    SubmitCallback();

public:
    // NOLINTBEGIN
    MCAPI long
    Register(void*, void (*)(void*, struct XTaskQueueObject*, ::XTaskQueuePort), struct XTaskQueueRegistrationToken*);

    MCAPI void Unregister(struct XTaskQueueRegistrationToken);

    // NOLINTEND
};
