#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

class WaitTimer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OS_WAITTIMER
public:
    WaitTimer& operator=(WaitTimer const&) = delete;
    WaitTimer(WaitTimer const&)            = delete;
#endif

public:
    /**
     * @symbol ?Cancel\@WaitTimer\@OS\@\@QEAAXXZ
     */
    MCAPI void Cancel();
    /**
     * @symbol ?GetAbsoluteTime\@WaitTimer\@OS\@\@QEAA_KI\@Z
     */
    MCAPI unsigned __int64 GetAbsoluteTime(unsigned int);
    /**
     * @symbol ?Initialize\@WaitTimer\@OS\@\@QEAAJPEAXP6AX0\@Z\@Z
     */
    MCAPI long Initialize(void*, void (*)(void*));
    /**
     * @symbol ?Start\@WaitTimer\@OS\@\@QEAAX_K\@Z
     */
    MCAPI void Start(unsigned __int64);
    /**
     * @symbol ?Terminate\@WaitTimer\@OS\@\@QEAAXXZ
     */
    MCAPI void Terminate();
    /**
     * @symbol ??0WaitTimer\@OS\@\@QEAA\@XZ
     */
    MCAPI WaitTimer();
    /**
     * @symbol ??1WaitTimer\@OS\@\@QEAA\@XZ
     */
    MCAPI ~WaitTimer();
};

}; // namespace OS
