#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct PlatformRuntimeInfo {
public:
    // prevent constructor by default
    PlatformRuntimeInfo& operator=(PlatformRuntimeInfo const&);
    PlatformRuntimeInfo(PlatformRuntimeInfo const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlatformRuntimeInfo();

    MCAPI PlatformRuntimeInfo();

    // NOLINTEND
};

}; // namespace Bedrock
