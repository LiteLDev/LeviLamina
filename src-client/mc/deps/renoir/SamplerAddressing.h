#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum class SamplerAddressing : int {
    Wrap   = 0,
    Mirror = 1,
    Clamp  = 2,
};

}
