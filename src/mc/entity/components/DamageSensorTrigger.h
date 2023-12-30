#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DamageSensorTrigger {
public:
    // prevent constructor by default
    DamageSensorTrigger& operator=(DamageSensorTrigger const&);
    DamageSensorTrigger();

public:
    // NOLINTBEGIN
    // symbol: ??0DamageSensorTrigger@@QEAA@AEBU0@@Z
    MCAPI DamageSensorTrigger(struct DamageSensorTrigger const&);

    // symbol: ?setCause@DamageSensorTrigger@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setCause(std::string const& causeName);

    // symbol: ??1DamageSensorTrigger@@QEAA@XZ
    MCAPI ~DamageSensorTrigger();

    // NOLINTEND
};
