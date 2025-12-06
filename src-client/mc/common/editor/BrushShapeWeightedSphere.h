#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ClientBrush {

struct BrushShapeWeightedSphere {
public:
    // BrushShapeWeightedSphere inner types declare
    // clang-format off
    struct Calculator;
    struct ConstantCalculator;
    struct InverseLinearCalculator;
    struct LinearCalculator;
    struct QuadraticCalculator;
    // clang-format on

    // BrushShapeWeightedSphere inner types define
    enum class WeightingType : uint {};

    struct Calculator {};

    struct ConstantCalculator {};

    struct InverseLinearCalculator {};

    struct LinearCalculator {};

    struct QuadraticCalculator {};
};

} // namespace Editor::ClientBrush
