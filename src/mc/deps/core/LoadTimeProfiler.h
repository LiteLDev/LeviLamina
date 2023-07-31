#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class LoadTimeProfiler {

public:
    // prevent constructor by default
    LoadTimeProfiler& operator=(LoadTimeProfiler const&) = delete;
    LoadTimeProfiler(LoadTimeProfiler const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0LoadTimeProfiler\@Core\@\@QEAA\@XZ
     */
    MCAPI LoadTimeProfiler();
    /**
     * @symbol ?setEnabled\@LoadTimeProfiler\@Core\@\@QEAAX_N\@Z
     */
    MCAPI void setEnabled(bool);
    // NOLINTEND
};

}; // namespace Core
