#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EnvironmentRequirement {
public:
    // prevent constructor by default
    EnvironmentRequirement& operator=(EnvironmentRequirement const&);
    EnvironmentRequirement(EnvironmentRequirement const&);
    EnvironmentRequirement();

public:
    // NOLINTBEGIN
    // symbol: ?addBlockDescriptor@EnvironmentRequirement@@QEAAXAEBVBlockDescriptor@@@Z
    MCAPI void addBlockDescriptor(class BlockDescriptor const& blockDescriptor);

    // symbol: ??1EnvironmentRequirement@@QEAA@XZ
    MCAPI ~EnvironmentRequirement();

    // NOLINTEND
};
