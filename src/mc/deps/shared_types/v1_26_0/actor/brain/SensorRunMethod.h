#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_0::Brain::MemorySensors {

enum class SensorRunMethod : uchar {
    Always  = 0,
    NoValue = 1,
    Count   = 2,
};

}
