#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SignalServiceSigninJob {
public:
    // prevent constructor by default
    SignalServiceSigninJob& operator=(SignalServiceSigninJob const&);
    SignalServiceSigninJob(SignalServiceSigninJob const&);
    SignalServiceSigninJob();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?signin@SignalServiceSigninJob@@UEAAX_NV?$optional@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@std@@@Z
    virtual void signin(bool, std::optional<std::chrono::seconds>);

    // symbol: ??1SignalServiceSigninJob@@UEAA@XZ
    MCVAPI ~SignalServiceSigninJob();

    // symbol: ??0SignalServiceSigninJob@@QEAA@$$QEAV?$function@$$A6AX_N@Z@std@@$$QEAV?$function@$$A6AXXZ@2@@Z
    MCAPI SignalServiceSigninJob(std::function<void(bool)>&&, std::function<void(void)>&&);

    // NOLINTEND
};
