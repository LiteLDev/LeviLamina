#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Common {

struct BuildInfo {
public:
    // prevent constructor by default
    BuildInfo& operator=(BuildInfo const&);
    BuildInfo(BuildInfo const&);
    BuildInfo();

public:
    // NOLINTBEGIN
    // symbol: ??1BuildInfo@Common@@QEAA@XZ
    MCAPI ~BuildInfo();

    // NOLINTEND
};

}; // namespace Common
