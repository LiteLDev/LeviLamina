#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockCullingData::CullingRule {

enum class Condition : uchar {
    SameCullingLayer = 0,
    SameBlock = 1,
    SameBlockPermutation = 2,
};

}
