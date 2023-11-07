#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"

class PerfTimer {
public:
    // prevent constructor by default
    PerfTimer& operator=(PerfTimer const&);
    PerfTimer(PerfTimer const&);
    PerfTimer();

public:
    // NOLINTBEGIN
    // symbol: ??0PerfTimer@@QEAA@Vid@thread@std@@@Z
    MCAPI explicit PerfTimer(std::thread::id);

    // symbol: ??1PerfTimer@@QEAA@XZ
    MCAPI ~PerfTimer();

    // symbol: ?mEnabled@PerfTimer@@2_NA
    MCAPI static bool mEnabled;

    // symbol: ?test@PerfTimer@@2V?$ThreadLocalObject@VPerfTimer@@V?$allocator@VPerfTimer@@@std@@@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class PerfTimer> test;

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?MultiplyDeBruijnBitPosition@PerfTimer@@1QBHB
    MCAPI static int const MultiplyDeBruijnBitPosition[];

    // symbol: ?mPath@PerfTimer@@1V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@A
    MCAPI static class Core::PathBuffer<std::string> mPath;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $MultiplyDeBruijnBitPosition() { return MultiplyDeBruijnBitPosition; }

    static auto& $mPath() { return mPath; }

    // NOLINTEND
};
