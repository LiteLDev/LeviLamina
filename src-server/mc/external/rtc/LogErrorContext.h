#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class LogErrorContext : int {
    None    = 0,
    Errno   = 1,
    Hresult = 2,
    En      = 1,
    Hr      = 2,
};

}
