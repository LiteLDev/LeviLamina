#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InternalSystemInfo {

public:
    // prevent constructor by default
    InternalSystemInfo& operator=(InternalSystemInfo const&) = delete;
    InternalSystemInfo(InternalSystemInfo const&)            = delete;
    InternalSystemInfo()                                     = delete;

public:
    /**
     * @symbol ??0InternalSystemInfo\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI InternalSystemInfo(struct InternalSystemInfo&&); // NOLINT
    /**
     * @symbol ??1InternalSystemInfo\@\@QEAA\@XZ
     */
    MCAPI ~InternalSystemInfo(); // NOLINT
};
