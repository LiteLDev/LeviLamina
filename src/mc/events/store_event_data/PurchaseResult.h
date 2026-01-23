#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StoreEventData {

enum class PurchaseResult : int {
    Success  = 1,
    Canceled = 0,
    Failed   = -1,
};

}
