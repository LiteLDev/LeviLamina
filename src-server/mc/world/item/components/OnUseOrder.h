#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class OnUseOrder : int {
    Trigger      = 0,
    Food         = 1,
    Wearable     = 2,
    Shooter      = 3,
    Throwable    = 4,
    UseModifiers = 5,
    Custom       = 6,
};
