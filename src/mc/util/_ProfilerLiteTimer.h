#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ProfilerLite.h"

class _ProfilerLiteTimer {

public:
    // prevent constructor by default
    _ProfilerLiteTimer& operator=(_ProfilerLiteTimer const&) = delete;
    _ProfilerLiteTimer(_ProfilerLiteTimer const&)            = delete;
    _ProfilerLiteTimer()                                     = delete;

public:
    /**
     * @symbol ??0_ProfilerLiteTimer\@\@QEAA\@AEAUScopedData\@ProfilerLite\@\@Vid\@thread\@std\@\@\@Z
     */
    MCAPI _ProfilerLiteTimer(struct ProfilerLite::ScopedData&, class std::thread::id); // NOLINT
    /**
     * @symbol ??1_ProfilerLiteTimer\@\@QEAA\@XZ
     */
    MCAPI ~_ProfilerLiteTimer(); // NOLINT
};
