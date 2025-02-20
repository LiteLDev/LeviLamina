#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_10 {

enum class CoordinateEvaluationOrder : int {
    Xyz = 0,
    Xzy = 1,
    Yxz = 2,
    Yzx = 3,
    Zxy = 4,
    Zyx = 5,
};

}
