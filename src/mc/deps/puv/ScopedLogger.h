#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal {

class ScopedLogger {
public:
    // prevent constructor by default
    ScopedLogger& operator=(ScopedLogger const&);
    ScopedLogger(ScopedLogger const&);
    ScopedLogger();

public:
    // NOLINTBEGIN
    // symbol: ?commit@ScopedLogger@internal@Puv@@QEAAXXZ
    MCAPI void commit();

    // symbol: ??1ScopedLogger@internal@Puv@@QEAA@XZ
    MCAPI ~ScopedLogger();

    // NOLINTEND
};

}; // namespace Puv::internal
