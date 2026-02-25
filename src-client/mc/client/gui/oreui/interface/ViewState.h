#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class ViewState : uchar {
    Idle                               = 0,
    Active                             = 1,
    ActiveFirstMeaningfulPaintHappened = 2,
    Leaving                            = 3,
};

}
