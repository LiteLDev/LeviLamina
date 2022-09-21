/**
 * @file  MC/SubmitCallback.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SubmitCallback.
 *
 */
class SubmitCallback {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBMITCALLBACK
public:
    class SubmitCallback& operator=(class SubmitCallback const &) = delete;
    SubmitCallback(class SubmitCallback const &) = delete;
    SubmitCallback() = delete;
#endif

public:
    /**
     * @hash   753821338
     * @symbol ?Register@SubmitCallback@@QEAAJPEAXP6AX0PEAUXTaskQueueObject@@W4XTaskQueuePort@@@ZPEAUXTaskQueueRegistrationToken@@@Z
     */
    MCAPI long Register(void *, void ( *)(void *, struct XTaskQueueObject *, enum XTaskQueuePort), struct XTaskQueueRegistrationToken *);
    /**
     * @hash   -170552402
     * @symbol ?Unregister@SubmitCallback@@QEAAXUXTaskQueueRegistrationToken@@@Z
     */
    MCAPI void Unregister(struct XTaskQueueRegistrationToken);

};