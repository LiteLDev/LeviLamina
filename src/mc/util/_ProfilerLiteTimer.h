#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ProfilerLite.h"

class _ProfilerLiteTimer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION__PROFILERLITETIMER
public:
    _ProfilerLiteTimer& operator=(_ProfilerLiteTimer const&) = delete;
    _ProfilerLiteTimer(_ProfilerLiteTimer const&)            = delete;
    _ProfilerLiteTimer()                                     = delete;
#endif

public:
    /**
     * @symbol ??0_ProfilerLiteTimer\@\@QEAA\@AEAUScopedData\@ProfilerLite\@\@Vid\@thread\@std\@\@\@Z
     */
    MCAPI _ProfilerLiteTimer(struct ProfilerLite::ScopedData&, class std::thread::id);
    /**
     * @symbol ??1_ProfilerLiteTimer\@\@QEAA\@XZ
     */
    MCAPI ~_ProfilerLiteTimer();
};
