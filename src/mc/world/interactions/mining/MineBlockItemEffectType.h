#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions::Mining {

enum class MineBlockItemEffectType : int {
    Default       = 0,
    DoNothing     = 1,
    ComponentItem = 2,
    DiggerItem    = 3,
    ShearsItem    = 4,
};

}
