/**
 * @file  _ProfilerLiteTimer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProfilerLite.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class _ProfilerLiteTimer.
 *
 */
class _ProfilerLiteTimer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION__PROFILERLITETIMER
public:
    class _ProfilerLiteTimer& operator=(class _ProfilerLiteTimer const &) = delete;
    _ProfilerLiteTimer(class _ProfilerLiteTimer const &) = delete;
    _ProfilerLiteTimer() = delete;
#endif

public:
    /**
     * @hash   1691333375
     * @symbol ??0_ProfilerLiteTimer@@QEAA@AEAUScopedData@ProfilerLite@@Vid@thread@std@@@Z
     */
    MCAPI _ProfilerLiteTimer(struct ProfilerLite::ScopedData &, class std::thread::id);
    /**
     * @hash   -41955223
     * @symbol ??1_ProfilerLiteTimer@@QEAA@XZ
     */
    MCAPI ~_ProfilerLiteTimer();

};