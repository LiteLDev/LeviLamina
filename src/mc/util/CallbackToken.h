#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CallbackToken {

public:
    // prevent constructor by default
    CallbackToken& operator=(CallbackToken const&) = delete;
    CallbackToken(CallbackToken const&)            = delete;

public:
    /**
     * @symbol ??0CallbackToken\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CallbackToken(class CallbackToken&&); // NOLINT
    /**
     * @symbol ??0CallbackToken\@\@QEAA\@V?$weak_ptr\@VCallbackTokenCancelState\@\@\@std\@\@\@Z
     */
    MCAPI CallbackToken(class std::weak_ptr<class CallbackTokenCancelState>); // NOLINT
    /**
     * @symbol ??0CallbackToken\@\@QEAA\@XZ
     */
    MCAPI CallbackToken(); // NOLINT
    /**
     * @symbol ?cancelCallback\@CallbackToken\@\@QEAAXXZ
     */
    MCAPI void cancelCallback(); // NOLINT
    /**
     * @symbol ??4CallbackToken\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class CallbackToken& operator=(class CallbackToken&&); // NOLINT
    /**
     * @symbol ?release\@CallbackToken\@\@QEAAXXZ
     */
    MCAPI void release(); // NOLINT
    /**
     * @symbol ??1CallbackToken\@\@QEAA\@XZ
     */
    MCAPI ~CallbackToken(); // NOLINT
};
