#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ScreenshotPostProcessFilter : int {
    None                 = 0,
    Grayscale            = 1,
    Sepia                = 2,
    Inverted             = 3,
    Warm                 = 4,
    Cool                 = 5,
    AchromatopsiaXlinked = 6,
    Deuteranopia         = 7,
    Protanopia           = 8,
    Tritanopia           = 9,
};
