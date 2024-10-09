#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct PermissionCheckResult {
public:
    // prevent constructor by default
    PermissionCheckResult& operator=(PermissionCheckResult const&);
    PermissionCheckResult(PermissionCheckResult const&);
    PermissionCheckResult();

public:
    // NOLINTBEGIN
    MCAPI int denyReasonsForTelemetry() const;

    MCAPI ~PermissionCheckResult();

    // NOLINTEND
};

}; // namespace Social
