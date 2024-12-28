#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureLoading {

enum class FeatureVersion : int {
    OnlyTests                = 0,
    Invalid                  = 1,
    InitialRelease           = 2,
    ScatterFeatureUpdate     = 3,
    SingleBlockFeatureUpdate = 4,
};

}
