#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct PlatformBuildInfo {
public:
    // prevent constructor by default
    PlatformBuildInfo& operator=(PlatformBuildInfo const&);
    PlatformBuildInfo(PlatformBuildInfo const&);
    PlatformBuildInfo();

public:
    // NOLINTBEGIN
    // symbol: ??1PlatformBuildInfo@Bedrock@@QEAA@XZ
    MCAPI ~PlatformBuildInfo();

    // NOLINTEND
};

}; // namespace Bedrock
