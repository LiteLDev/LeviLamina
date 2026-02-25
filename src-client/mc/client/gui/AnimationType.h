#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

enum class AnimationType : schar {
    Alpha            = 0,
    Clip             = 1,
    Color            = 2,
    FlipBook         = 3,
    AsepriteFlipBook = 4,
    Offset           = 5,
    Size             = 6,
    Uv               = 7,
    Wait             = 8,
    Unknown          = 9,
};

}
