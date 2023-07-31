#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EnvironmentRequirement {

public:
    // prevent constructor by default
    EnvironmentRequirement& operator=(EnvironmentRequirement const&) = delete;
    EnvironmentRequirement(EnvironmentRequirement const&)            = delete;
    EnvironmentRequirement()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?addBlockDescriptor\@EnvironmentRequirement\@\@QEAAXAEBVBlockDescriptor\@\@\@Z
     */
    MCAPI void addBlockDescriptor(class BlockDescriptor const&);
    /**
     * @symbol ??1EnvironmentRequirement\@\@QEAA\@XZ
     */
    MCAPI ~EnvironmentRequirement();
    // NOLINTEND
};
