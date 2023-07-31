#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SignalServiceSigninJob {

public:
    // prevent constructor by default
    SignalServiceSigninJob& operator=(SignalServiceSigninJob const&) = delete;
    SignalServiceSigninJob(SignalServiceSigninJob const&)            = delete;
    SignalServiceSigninJob()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?signin\@SignalServiceSigninJob\@\@UEAAX_NV?$optional\@V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@\@std\@\@\@Z
     */
    virtual void signin(bool, std::optional<std::chrono::seconds>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIGNALSERVICESIGNINJOB
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SignalServiceSigninJob();
#endif
    /**
     * @symbol
     * ??0SignalServiceSigninJob\@\@QEAA\@$$QEAV?$function\@$$A6AX_N\@Z\@std\@\@$$QEAV?$function\@$$A6AXXZ\@2\@\@Z
     */
    MCAPI SignalServiceSigninJob(std::function<void(bool)>&&, std::function<void(void)>&&);
    // NOLINTEND
};
