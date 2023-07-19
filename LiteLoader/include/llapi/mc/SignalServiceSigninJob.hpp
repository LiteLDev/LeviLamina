/**
 * @file  SignalServiceSigninJob.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SignalServiceSigninJob {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIGNALSERVICESIGNINJOB
public:
    class SignalServiceSigninJob& operator=(class SignalServiceSigninJob const &) = delete;
    SignalServiceSigninJob(class SignalServiceSigninJob const &) = delete;
    SignalServiceSigninJob() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?signin\@SignalServiceSigninJob\@\@UEAAX_NV?$optional\@V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@\@std\@\@\@Z
     */
    virtual void signin(bool, class std::optional<class std::chrono::duration<__int64, struct std::ratio<1, 1>>>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIGNALSERVICESIGNINJOB
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SignalServiceSigninJob();
#endif
    /**
     * @symbol ??0SignalServiceSigninJob\@\@QEAA\@$$QEAV?$function\@$$A6AX_N\@Z\@std\@\@$$QEAV?$function\@$$A6AXXZ\@2\@\@Z
     */
    MCAPI SignalServiceSigninJob(class std::function<void (bool)> &&, class std::function<void (void)> &&);

};
