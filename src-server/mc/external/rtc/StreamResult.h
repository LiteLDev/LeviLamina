#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class StreamResult : int {
    Error = 0,
    Success = 1,
    Block = 2,
    Eos = 3,
};

}
