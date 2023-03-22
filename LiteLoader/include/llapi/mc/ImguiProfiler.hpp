/**
 * @file  ImguiProfiler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ImguiProfiler {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMGUIPROFILER
public:
    class ImguiProfiler& operator=(class ImguiProfiler const &) = delete;
    ImguiProfiler(class ImguiProfiler const &) = delete;
    ImguiProfiler() = delete;
#endif

public:
    /**
     * @symbol ?getTimeAccumulator\@ImguiProfiler\@\@QEAA?AVTimeAccumulator\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCAPI class TimeAccumulator getTimeAccumulator(std::string const &, std::string const &, bool);
    /**
     * @symbol ?reset\@ImguiProfiler\@\@QEAAXXZ
     */
    MCAPI void reset();

//private:

private:
    /**
     * @symbol ?sPendingRecords\@ImguiProfiler\@\@0V?$vector\@URecord\@ImguiProfiler\@\@V?$allocator\@URecord\@ImguiProfiler\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::vector<struct ImguiProfiler::Record> sPendingRecords;
    /**
     * @symbol ?sRecordMutex\@ImguiProfiler\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex sRecordMutex;

};
