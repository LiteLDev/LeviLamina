#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeColorSampling {

enum class Pattern : int {
    Single = 0,
    CornersAndMidpointsRange4 = 1,
    Grid3x3 = 2,
    CrossRange8 = 3,
};

}
