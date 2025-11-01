#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BatteryStatus : int {
    Unknown = 0,
    Discharging = 1,
    Charging = 2,
    Full = 3,
    Count = 4,
};
