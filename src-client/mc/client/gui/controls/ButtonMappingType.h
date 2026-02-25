#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ButtonMappingType : uint {
    Global        = 0,
    DoublePressed = 1,
    Pressed       = 2,
    Focused       = 3,
};
