#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

class WaitTimer {

public:
    // prevent constructor by default
    WaitTimer& operator=(WaitTimer const&) = delete;
    WaitTimer(WaitTimer const&)            = delete;

public:
    /**
     * @symbol ?Cancel\@WaitTimer\@OS\@\@QEAAXXZ
     */
    MCAPI void Cancel(); // NOLINT
    /**
     * @symbol ?GetAbsoluteTime\@WaitTimer\@OS\@\@QEAA_KI\@Z
     */
    MCAPI unsigned __int64 GetAbsoluteTime(unsigned int); // NOLINT
    /**
     * @symbol ?Initialize\@WaitTimer\@OS\@\@QEAAJPEAXP6AX0\@Z\@Z
     */
    MCAPI long Initialize(void*, void (*)(void*)); // NOLINT
    /**
     * @symbol ?Start\@WaitTimer\@OS\@\@QEAAX_K\@Z
     */
    MCAPI void Start(unsigned __int64); // NOLINT
    /**
     * @symbol ?Terminate\@WaitTimer\@OS\@\@QEAAXXZ
     */
    MCAPI void Terminate(); // NOLINT
    /**
     * @symbol ??0WaitTimer\@OS\@\@QEAA\@XZ
     */
    MCAPI WaitTimer(); // NOLINT
    /**
     * @symbol ??1WaitTimer\@OS\@\@QEAA\@XZ
     */
    MCAPI ~WaitTimer(); // NOLINT
};

}; // namespace OS
