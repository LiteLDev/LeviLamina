#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class LoadTimeProfiler {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_LOADTIMEPROFILER
public:
    LoadTimeProfiler& operator=(LoadTimeProfiler const&) = delete;
    LoadTimeProfiler(LoadTimeProfiler const&)            = delete;
#endif

public:
    /**
     * @symbol ??0LoadTimeProfiler\@Core\@\@QEAA\@XZ
     */
    MCAPI LoadTimeProfiler();
    /**
     * @symbol ?setEnabled\@LoadTimeProfiler\@Core\@\@QEAAX_N\@Z
     */
    MCAPI void setEnabled(bool);
};

}; // namespace Core
