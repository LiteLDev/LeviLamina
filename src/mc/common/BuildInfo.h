#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Common {

struct BuildInfo {

public:
    // prevent constructor by default
    BuildInfo& operator=(BuildInfo const&) = delete;
    BuildInfo(BuildInfo const&)            = delete;
    BuildInfo()                            = delete;

public:
    /**
     * @symbol ??1BuildInfo\@Common\@\@QEAA\@XZ
     */
    MCAPI ~BuildInfo(); // NOLINT
};

}; // namespace Common
