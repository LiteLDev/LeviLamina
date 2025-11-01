#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class EcnMarking : int {
    KNotEct = 0,
    KEct1 = 1,
    KEct0 = 2,
    KCe = 3,
};

}
