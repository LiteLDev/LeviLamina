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
    MCAPI ~PlatformBuildInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock
