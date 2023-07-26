#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThermalMonitorInterface {

public:
    // prevent constructor by default
    ThermalMonitorInterface& operator=(ThermalMonitorInterface const&) = delete;
    ThermalMonitorInterface(ThermalMonitorInterface const&)            = delete;
    ThermalMonitorInterface()                                          = delete;
};
