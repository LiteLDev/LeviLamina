#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

enum class TimerBackoffAlgorithm : int {
    KFixed       = 0,
    KExponential = 1,
};

}
