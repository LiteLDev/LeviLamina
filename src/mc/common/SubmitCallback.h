#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubmitCallback {

public:
    // prevent constructor by default
    SubmitCallback& operator=(SubmitCallback const&) = delete;
    SubmitCallback(SubmitCallback const&)            = delete;
    SubmitCallback()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?Register\@SubmitCallback\@\@QEAAJPEAXP6AX0PEAUXTaskQueueObject\@\@W4XTaskQueuePort\@\@\@ZPEAUXTaskQueueRegistrationToken\@\@\@Z
     */
    MCAPI long
    Register(void*, void(__cdecl*)(void*, struct XTaskQueueObject*, enum class XTaskQueuePort), struct XTaskQueueRegistrationToken*);
    /**
     * @symbol ?Unregister\@SubmitCallback\@\@QEAAXUXTaskQueueRegistrationToken\@\@\@Z
     */
    MCAPI void Unregister(struct XTaskQueueRegistrationToken);
    // NOLINTEND
};
