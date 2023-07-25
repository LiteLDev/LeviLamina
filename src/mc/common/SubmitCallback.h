#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubmitCallback {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBMITCALLBACK
public:
    SubmitCallback& operator=(SubmitCallback const&) = delete;
    SubmitCallback(SubmitCallback const&)            = delete;
    SubmitCallback()                                 = delete;
#endif

public:
    /**
     * @symbol
     * ?Register\@SubmitCallback\@\@QEAAJPEAXP6AX0PEAUXTaskQueueObject\@\@W4XTaskQueuePort\@\@\@ZPEAUXTaskQueueRegistrationToken\@\@\@Z
     */
    MCAPI long
    Register(void*, void (*)(void*, struct XTaskQueueObject*, enum class XTaskQueuePort), struct XTaskQueueRegistrationToken*);
    /**
     * @symbol ?Unregister\@SubmitCallback\@\@QEAAXUXTaskQueueRegistrationToken\@\@\@Z
     */
    MCAPI void Unregister(struct XTaskQueueRegistrationToken);
};
