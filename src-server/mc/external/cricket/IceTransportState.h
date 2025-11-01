#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class IceTransportState : int {
    Init = 0,
    Connecting = 1,
    Completed = 2,
    Failed = 3,
};

}
