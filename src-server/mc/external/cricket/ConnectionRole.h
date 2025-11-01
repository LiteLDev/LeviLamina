#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class ConnectionRole : int {
    None     = 0,
    Active   = 1,
    Passive  = 2,
    Actpass  = 3,
    Holdconn = 4,
};

}
