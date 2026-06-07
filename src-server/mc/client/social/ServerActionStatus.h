#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class ServerActionStatus : int {
    None                  = 0,
    Allowed               = 1,
    ServerDisabled        = 2,
    TenantServersDisabled = 3,
    Removed               = 4,
};

}
