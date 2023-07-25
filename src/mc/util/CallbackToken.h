#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CallbackToken {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CALLBACKTOKEN
public:
    CallbackToken& operator=(CallbackToken const&) = delete;
    CallbackToken(CallbackToken const&)            = delete;
#endif

public:
    /**
     * @symbol ??0CallbackToken\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CallbackToken(class CallbackToken&&);
    /**
     * @symbol ??0CallbackToken\@\@QEAA\@V?$weak_ptr\@VCallbackTokenCancelState\@\@\@std\@\@\@Z
     */
    MCAPI CallbackToken(class std::weak_ptr<class CallbackTokenCancelState>);
    /**
     * @symbol ??0CallbackToken\@\@QEAA\@XZ
     */
    MCAPI CallbackToken();
    /**
     * @symbol ?cancelCallback\@CallbackToken\@\@QEAAXXZ
     */
    MCAPI void cancelCallback();
    /**
     * @symbol ??4CallbackToken\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class CallbackToken& operator=(class CallbackToken&&);
    /**
     * @symbol ?release\@CallbackToken\@\@QEAAXXZ
     */
    MCAPI void release();
    /**
     * @symbol ??1CallbackToken\@\@QEAA\@XZ
     */
    MCAPI ~CallbackToken();
};
