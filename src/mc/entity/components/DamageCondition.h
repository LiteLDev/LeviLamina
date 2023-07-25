#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DamageCondition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGECONDITION
public:
    DamageCondition& operator=(DamageCondition const&) = delete;
    DamageCondition(DamageCondition const&)            = delete;
    DamageCondition()                                  = delete;
#endif

public:
    /**
     * @symbol ??1DamageCondition\@\@QEAA\@XZ
     */
    MCAPI ~DamageCondition();
};
