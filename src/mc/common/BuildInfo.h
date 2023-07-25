#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Common {

struct BuildInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMON_BUILDINFO
public:
    BuildInfo& operator=(BuildInfo const&) = delete;
    BuildInfo(BuildInfo const&)            = delete;
    BuildInfo()                            = delete;
#endif

public:
    /**
     * @symbol ??1BuildInfo\@Common\@\@QEAA\@XZ
     */
    MCAPI ~BuildInfo();
};

}; // namespace Common
