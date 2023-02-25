/**
 * @file  ProfilerLite.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ProfilerLite.
 *
 */
class ProfilerLite {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROFILERLITE
public:
    class ProfilerLite& operator=(class ProfilerLite const &) = delete;
    ProfilerLite(class ProfilerLite const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ProfilerLite\@\@QEAA\@XZ
     */
    MCAPI ProfilerLite();
    /**
     * @symbol  ?calculateAndSetServerNetworkTime\@ProfilerLite\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void calculateAndSetServerNetworkTime(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @symbol  ?calculateAndSetServerTickTimes\@ProfilerLite\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void calculateAndSetServerTickTimes(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @symbol  ?getServerTickTime\@ProfilerLite\@\@QEBA?AV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@XZ
     */
    MCAPI class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> getServerTickTime() const;
    /**
     * @symbol  ??1ProfilerLite\@\@QEAA\@XZ
     */
    MCAPI ~ProfilerLite();
    /**
     * @symbol  ?sEmptyThreadID\@ProfilerLite\@\@2Vid\@thread\@std\@\@A
     */
    MCAPI static class std::thread::id sEmptyThreadID;

//private:

private:
    /**
     * @symbol  ?gProfilerLiteInstance\@ProfilerLite\@\@0V1\@A
     */
    MCAPI static class ProfilerLite gProfilerLiteInstance;

};