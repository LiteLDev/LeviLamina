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
    // symbol: ??1PlatformRuntimeInfo@Bedrock@@UEAA@XZ
    MCVAPI ~PlatformRuntimeInfo();

    // symbol: ??0PlatformRuntimeInfo@Bedrock@@QEAA@XZ
    MCAPI PlatformRuntimeInfo();

    // NOLINTEND
};

}; // namespace Bedrock
