#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
namespace DensitySplineEvaluation { struct EvaluationControlPoint; }
// clang-format on

namespace DensitySplineEvaluation {

class EvaluationControlPoints {
public:
    // EvaluationControlPoints inner types define
    using OptionalBoundingIndex = ::std::optional<ushort>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::Bedrock::small_vector<::DensitySplineEvaluation::EvaluationControlPoint, 7>>
        mControlPoints;
    // NOLINTEND
};

} // namespace DensitySplineEvaluation
