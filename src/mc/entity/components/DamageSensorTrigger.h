#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DamageSensorTrigger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGESENSORTRIGGER
public:
    DamageSensorTrigger& operator=(DamageSensorTrigger const&) = delete;
    DamageSensorTrigger()                                      = delete;
#endif

public:
    /**
     * @symbol ??0DamageSensorTrigger\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI DamageSensorTrigger(struct DamageSensorTrigger const&);
    /**
     * @symbol
     * ?setCause\@DamageSensorTrigger\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCause(std::string const&);
    /**
     * @symbol ??1DamageSensorTrigger\@\@QEAA\@XZ
     */
    MCAPI ~DamageSensorTrigger();
};
