#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

enum class FaceDimmingMethod : int {
    NDotL       = 0,
    Barycentric = 1,
    Brdf        = 2,
};

}
