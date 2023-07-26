#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EnvironmentRequirement {

public:
    // prevent constructor by default
    EnvironmentRequirement& operator=(EnvironmentRequirement const&) = delete;
    EnvironmentRequirement(EnvironmentRequirement const&)            = delete;
    EnvironmentRequirement()                                         = delete;

public:
    /**
     * @symbol ?addBlockDescriptor\@EnvironmentRequirement\@\@QEAAXAEBVBlockDescriptor\@\@\@Z
     */
    MCAPI void addBlockDescriptor(class BlockDescriptor const&); // NOLINT
    /**
     * @symbol ??1EnvironmentRequirement\@\@QEAA\@XZ
     */
    MCAPI ~EnvironmentRequirement(); // NOLINT
};
