#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class IceRole : int {
    Controlling = 0,
    Controlled = 1,
    Unknown = 2,
};

}
