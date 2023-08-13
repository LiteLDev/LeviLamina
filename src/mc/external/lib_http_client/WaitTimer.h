#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

class WaitTimer {

public:
    // prevent constructor by default
    WaitTimer& operator=(WaitTimer const&) = delete;
    WaitTimer(WaitTimer const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?Cancel\@WaitTimer\@OS\@\@QEAAXXZ
     */
    MCAPI void Cancel();
    /**
     * @symbol ?GetAbsoluteTime\@WaitTimer\@OS\@\@QEAA_KI\@Z
     */
    MCAPI uint64_t GetAbsoluteTime(unsigned int);
    /**
     * @symbol ?Initialize\@WaitTimer\@OS\@\@QEAAJPEAXP6AX0\@Z\@Z
     */
    MCAPI long Initialize(void*, void(__cdecl*)(void*));
    /**
     * @symbol ?Start\@WaitTimer\@OS\@\@QEAAX_K\@Z
     */
    MCAPI void Start(uint64_t);
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
    // NOLINTEND
};

}; // namespace OS
