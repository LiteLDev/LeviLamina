#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

class WaitTimer {
public:
    // prevent constructor by default
    WaitTimer& operator=(WaitTimer const&);
    WaitTimer(WaitTimer const&);

public:
    // NOLINTBEGIN
    // symbol: ?Cancel@WaitTimer@OS@@QEAAXXZ
    MCAPI void Cancel();

    // symbol: ?GetAbsoluteTime@WaitTimer@OS@@QEAA_KI@Z
    MCAPI uint64 GetAbsoluteTime(uint);

    // symbol: ?Initialize@WaitTimer@OS@@QEAAJPEAXP6AX0@Z@Z
    MCAPI long Initialize(void*, void (*)(void*));

    // symbol: ?Start@WaitTimer@OS@@QEAAX_K@Z
    MCAPI void Start(uint64);

    // symbol: ?Terminate@WaitTimer@OS@@QEAAXXZ
    MCAPI void Terminate();

    // symbol: ??0WaitTimer@OS@@QEAA@XZ
    MCAPI WaitTimer();

    // symbol: ??1WaitTimer@OS@@QEAA@XZ
    MCAPI ~WaitTimer();

    // NOLINTEND
};

}; // namespace OS
