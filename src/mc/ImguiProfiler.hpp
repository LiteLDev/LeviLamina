/**
 * @file  ImguiProfiler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ImguiProfiler.
 *
 */
struct ImguiProfiler {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMGUIPROFILER
public:
    struct ImguiProfiler& operator=(struct ImguiProfiler const &) = delete;
    ImguiProfiler(struct ImguiProfiler const &) = delete;
    ImguiProfiler() = delete;
#endif

public:
    /**
     * @symbol  ?getTimeAccumulator\@ImguiProfiler\@\@QEAA?AVTimeAccumulator\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCAPI class TimeAccumulator getTimeAccumulator(std::string const &, std::string const &, bool);
    /**
     * @symbol  ?reset\@ImguiProfiler\@\@QEAAXXZ
     */
    MCAPI void reset();

//private:

};