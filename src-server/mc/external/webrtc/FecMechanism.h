#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class FecMechanism : int {
    Red = 0,
    RedAndUlpfec = 1,
    Flexfec = 2,
};

}
