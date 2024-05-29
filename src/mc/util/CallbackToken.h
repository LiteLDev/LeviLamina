#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CallbackToken {
public:
    // prevent constructor by default
    CallbackToken& operator=(CallbackToken const&);
    CallbackToken(CallbackToken const&);

public:
    // NOLINTBEGIN
    // symbol: ??0CallbackToken@@QEAA@XZ
    MCAPI CallbackToken();

    // symbol: ??0CallbackToken@@QEAA@V?$weak_ptr@VCallbackTokenCancelState@@@std@@@Z
    MCAPI explicit CallbackToken(std::weak_ptr<class CallbackTokenCancelState> cancelState);

    // symbol: ?cancelCallback@CallbackToken@@QEAAXXZ
    MCAPI void cancelCallback();

    // symbol: ??4CallbackToken@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class CallbackToken& operator=(class CallbackToken&& rhs);

    // symbol: ?release@CallbackToken@@QEAAXXZ
    MCAPI void release();

    // symbol: ??1CallbackToken@@QEAA@XZ
    MCAPI ~CallbackToken();

    // NOLINTEND
};
