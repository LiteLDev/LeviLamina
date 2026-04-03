#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DensitySplineEvaluation {

struct EvaluationControlPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                         mInput;
    ::ll::TypedStorage<4, 8, ::std::variant<float, ushort>> mValue;
    ::ll::TypedStorage<4, 4, float>                         mDerivative;
    // NOLINTEND
};

} // namespace DensitySplineEvaluation
