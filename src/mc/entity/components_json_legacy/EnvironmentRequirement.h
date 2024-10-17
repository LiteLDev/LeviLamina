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
    MCAPI void addBlockDescriptor(class BlockDescriptor const& blockDescriptor);

    MCAPI ~EnvironmentRequirement();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
