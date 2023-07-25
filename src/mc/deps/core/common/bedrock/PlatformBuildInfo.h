#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct PlatformBuildInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PLATFORMBUILDINFO
public:
    PlatformBuildInfo& operator=(PlatformBuildInfo const&) = delete;
    PlatformBuildInfo(PlatformBuildInfo const&)            = delete;
    PlatformBuildInfo()                                    = delete;
#endif

public:
    /**
     * @symbol ??1PlatformBuildInfo\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~PlatformBuildInfo();
};

}; // namespace Bedrock
