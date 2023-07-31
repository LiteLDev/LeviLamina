#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"

class PerfTimer {

public:
    // prevent constructor by default
    PerfTimer& operator=(PerfTimer const&) = delete;
    PerfTimer(PerfTimer const&)            = delete;
    PerfTimer()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0PerfTimer\@\@QEAA\@Vid\@thread\@std\@\@\@Z
     */
    MCAPI PerfTimer(std::thread::id);
    /**
     * @symbol ??1PerfTimer\@\@QEAA\@XZ
     */
    MCAPI ~PerfTimer();
    /**
     * @symbol ?mEnabled\@PerfTimer\@\@2_NA
     */
    MCAPI static bool mEnabled;
    /**
     * @symbol
     * ?test\@PerfTimer\@\@2V?$ThreadLocalObject\@VPerfTimer\@\@V?$allocator\@VPerfTimer\@\@\@std\@\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class PerfTimer, std::allocator<class PerfTimer>> test;
    // NOLINTEND

protected:
    // NOLINTBEGIN
    /**
     * @symbol ?MultiplyDeBruijnBitPosition\@PerfTimer\@\@1QBHB
     */
    MCAPI static int const MultiplyDeBruijnBitPosition[];
    /**
     * @symbol
     * ?mPath\@PerfTimer\@\@1V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@A
     */
    MCAPI static class Core::PathBuffer<std::string> mPath;
    // NOLINTEND
};
