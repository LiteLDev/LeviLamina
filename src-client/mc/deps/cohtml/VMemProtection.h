#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::VMemProtection {

enum class VMemProtection : int {
    None             = 0,
    Read             = 1,
    Write            = 2,
    ReadWrite        = 3,
    Execute          = 4,
    ReadExecute      = 5,
    ReadWriteExecute = 7,
};

}
