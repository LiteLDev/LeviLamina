#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InternalSystemInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERNALSYSTEMINFO
public:
    InternalSystemInfo& operator=(InternalSystemInfo const&) = delete;
    InternalSystemInfo(InternalSystemInfo const&)            = delete;
    InternalSystemInfo()                                     = delete;
#endif

public:
    /**
     * @symbol ??0InternalSystemInfo\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI InternalSystemInfo(struct InternalSystemInfo&&);
    /**
     * @symbol ??1InternalSystemInfo\@\@QEAA\@XZ
     */
    MCAPI ~InternalSystemInfo();
};
