#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

class ThreadPoolImpl {
public:
    // ThreadPoolImpl inner types declare
    // clang-format off
    struct ActionStatusImpl;
    // clang-format on

    // ThreadPoolImpl inner types define
    struct ActionStatusImpl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OS_THREADPOOLIMPL_ACTIONSTATUSIMPL
    public:
        ActionStatusImpl& operator=(ActionStatusImpl const&) = delete;
        ActionStatusImpl(ActionStatusImpl const&)            = delete;
        ActionStatusImpl()                                   = delete;
#endif

    public:
        /**
         * @vftbl 0
         * @symbol ?Complete\@ActionStatusImpl\@ThreadPoolImpl\@OS\@\@UEAAXXZ
         */
        virtual void Complete();
        /**
         * @vftbl 1
         * @symbol ?MayRunLong\@ActionStatusImpl\@ThreadPoolImpl\@OS\@\@UEAAXXZ
         */
        virtual void MayRunLong();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OS_THREADPOOLIMPL
public:
    ThreadPoolImpl& operator=(ThreadPoolImpl const&) = delete;
    ThreadPoolImpl(ThreadPoolImpl const&)            = delete;
    ThreadPoolImpl()                                 = delete;
#endif

public:
    // private:
    /**
     * @symbol ?TPCallback\@ThreadPoolImpl\@OS\@\@CAXPEAU_TP_CALLBACK_INSTANCE\@\@PEAXPEAU_TP_WORK\@\@\@Z
     */
    MCAPI static void TPCallback(struct _TP_CALLBACK_INSTANCE*, void*, struct _TP_WORK*);

private:
};

}; // namespace OS
