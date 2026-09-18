#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class PartyEligibilityOutcome : uchar {
    Pending       = 0,
    AllEligible   = 1,
    Partial       = 2,
    None          = 3,
    PartyTooLarge = 4,
};

}
