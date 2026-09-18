#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::Task {

enum class BlockUtilityFloodMatchCriteria : uchar {
    NonAir                 = 0,
    SameBlockType          = 1,
    Solid                  = 2,
    Custom                 = 3,
    SameBlockTypeAndStates = 4,
};

}
