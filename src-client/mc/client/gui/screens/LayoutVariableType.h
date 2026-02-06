#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LayoutVariableType : uchar {
    X                    = 0,
    Y                    = 1,
    Width                = 2,
    Height               = 3,
    XOffsetDelta         = 4,
    YOffsetDelta         = 5,
    XGridPosition        = 6,
    YGridPosition        = 7,
    XGridDimention       = 8,
    YGridDimention       = 9,
    StackPanelVisibility = 10,
    Count                = 11,
    Unused               = 100,
};
