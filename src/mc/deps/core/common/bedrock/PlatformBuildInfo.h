#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct PlatformBuildInfo {

public:
    // prevent constructor by default
    PlatformBuildInfo& operator=(PlatformBuildInfo const&) = delete;
    PlatformBuildInfo(PlatformBuildInfo const&)            = delete;
    PlatformBuildInfo()                                    = delete;

public:
    /**
     * @symbol ??1PlatformBuildInfo\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~PlatformBuildInfo(); // NOLINT
};

}; // namespace Bedrock
