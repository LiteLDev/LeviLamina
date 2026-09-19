#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RefreshRate : int {
    Nominal60Hz  = 60,
    Nominal120Hz = 120,
    Variable     = 0,
};
