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
    MCAPI ~BuildInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Common
