#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class VariantPriorityLevel : uchar {
    Unknown = 0,
    Other = 1,
    Integer = 2,
    Float = 3,
    Double = 4,
};

}
