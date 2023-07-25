#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EnvironmentRequirement {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENVIRONMENTREQUIREMENT
public:
    EnvironmentRequirement& operator=(EnvironmentRequirement const&) = delete;
    EnvironmentRequirement(EnvironmentRequirement const&)            = delete;
    EnvironmentRequirement()                                         = delete;
#endif

public:
    /**
     * @symbol ?addBlockDescriptor\@EnvironmentRequirement\@\@QEAAXAEBVBlockDescriptor\@\@\@Z
     */
    MCAPI void addBlockDescriptor(class BlockDescriptor const&);
    /**
     * @symbol ??1EnvironmentRequirement\@\@QEAA\@XZ
     */
    MCAPI ~EnvironmentRequirement();
};
