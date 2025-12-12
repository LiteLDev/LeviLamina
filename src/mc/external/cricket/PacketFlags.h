#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class PacketFlags : int {
    Normal     = 0,
    SrtpBypass = 1,
};

}
