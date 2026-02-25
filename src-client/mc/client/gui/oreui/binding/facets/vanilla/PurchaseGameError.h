#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class PurchaseGameError : int {
    PlatformHasNoTrialOfferings = 0,
    UnknownGameStoreError       = 1,
};

}
