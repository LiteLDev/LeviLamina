#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::internal {

enum class DstRange : int {
    OverlapsRange = 0,
    ContainsRange = 1,
};

}
