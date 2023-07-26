#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BatteryMonitorInterface {

public:
    // prevent constructor by default
    BatteryMonitorInterface& operator=(BatteryMonitorInterface const&) = delete;
    BatteryMonitorInterface(BatteryMonitorInterface const&)            = delete;
    BatteryMonitorInterface()                                          = delete;
};
