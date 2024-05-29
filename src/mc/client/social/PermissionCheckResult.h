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
    // symbol: ?denyReasonsForTelemetry@PermissionCheckResult@Social@@QEBAHXZ
    MCAPI int denyReasonsForTelemetry() const;

    // symbol: ??1PermissionCheckResult@Social@@QEAA@XZ
    MCAPI ~PermissionCheckResult();

    // NOLINTEND
};

}; // namespace Social
