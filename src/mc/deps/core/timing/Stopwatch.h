#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Stopwatch {
public:
    // prevent constructor by default
    Stopwatch& operator=(Stopwatch const&);
    Stopwatch(Stopwatch const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Stopwatch@@UEAA@XZ
    virtual ~Stopwatch();

    // vIndex: 1, symbol: ?stop@Stopwatch@@UEAANXZ
    virtual double stop();

    // vIndex: 2, symbol: ?stopContinue@Stopwatch@@UEAANXZ
    virtual double stopContinue();

    // vIndex: 3, symbol: ?print@Stopwatch@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void print(std::string const& prepend);

    // symbol: ??0Stopwatch@@QEAA@XZ
    MCAPI Stopwatch();

    // symbol: ?reset@Stopwatch@@QEAAXXZ
    MCAPI void reset();

    // symbol: ?start@Stopwatch@@QEAAXXZ
    MCAPI void start();

    // NOLINTEND
};
