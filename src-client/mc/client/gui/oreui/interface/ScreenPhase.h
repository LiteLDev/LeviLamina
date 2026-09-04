#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class ScreenPhase : uchar {
    None              = 0,
    Loading           = 1,
    Interaction       = 2,
    IdleOrDataChanged = 3,
};

}
