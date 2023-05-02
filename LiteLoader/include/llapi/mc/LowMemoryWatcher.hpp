/**
 * @file  LowMemoryWatcher.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class LowMemoryWatcher {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOWMEMORYWATCHER
public:
    class LowMemoryWatcher& operator=(class LowMemoryWatcher const &) = delete;
    LowMemoryWatcher(class LowMemoryWatcher const &) = delete;
    LowMemoryWatcher() = delete;
#endif

public:

//private:

private:
    /**
     * @symbol ?mPlatformToldUsLowMemory\@LowMemoryWatcher\@\@0_NA
     */
    MCAPI static bool mPlatformToldUsLowMemory;
    /**
     * @symbol ?mPleaseLeakMemory\@LowMemoryWatcher\@\@0V?$list\@V?$vector\@DV?$allocator\@D\@std\@\@\@std\@\@V?$allocator\@V?$vector\@DV?$allocator\@D\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::list<class std::vector<char, class std::allocator<char>>> mPleaseLeakMemory;
    /**
     * @symbol ?mTimeToResetWarning\@LowMemoryWatcher\@\@0V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@A
     */
    MCAPI static class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> mTimeToResetWarning;

};
