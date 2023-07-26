#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class LoadTimeProfiler {

public:
    // prevent constructor by default
    LoadTimeProfiler& operator=(LoadTimeProfiler const&) = delete;
    LoadTimeProfiler(LoadTimeProfiler const&)            = delete;

public:
    /**
     * @symbol ??0LoadTimeProfiler\@Core\@\@QEAA\@XZ
     */
    MCAPI LoadTimeProfiler(); // NOLINT
    /**
     * @symbol ?setEnabled\@LoadTimeProfiler\@Core\@\@QEAAX_N\@Z
     */
    MCAPI void setEnabled(bool); // NOLINT
};

}; // namespace Core
