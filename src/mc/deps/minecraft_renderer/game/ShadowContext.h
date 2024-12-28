#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ShadowContext : int {
    Unknown             = 0,
    ShadowOnly          = 1,
    PlayerShadowMapOnly = 2,
    FullDraw            = 3,
};
