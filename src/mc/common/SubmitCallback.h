#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/XTaskQueuePort.h"

class SubmitCallback {
public:
    // prevent constructor by default
    SubmitCallback& operator=(SubmitCallback const&);
    SubmitCallback(SubmitCallback const&);
    SubmitCallback();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Register@SubmitCallback@@QEAAJPEAXP6AX0PEAUXTaskQueueObject@@W4XTaskQueuePort@@@ZPEAUXTaskQueueRegistrationToken@@@Z
    MCAPI long
    Register(void*, void (*)(void*, struct XTaskQueueObject*, ::XTaskQueuePort), struct XTaskQueueRegistrationToken*);

    // symbol: ?Unregister@SubmitCallback@@QEAAXUXTaskQueueRegistrationToken@@@Z
    MCAPI void Unregister(struct XTaskQueueRegistrationToken);

    // NOLINTEND
};
