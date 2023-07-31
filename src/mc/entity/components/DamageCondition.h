#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DamageCondition {

public:
    // prevent constructor by default
    DamageCondition& operator=(DamageCondition const&) = delete;
    DamageCondition(DamageCondition const&)            = delete;
    DamageCondition()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1DamageCondition\@\@QEAA\@XZ
     */
    MCAPI ~DamageCondition();
    // NOLINTEND
};
