#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ClientBrush {

class BrushShapeWeightedSphere {
public:
    // BrushShapeWeightedSphere inner types declare
    // clang-format off
    struct Calculator;
    struct ConstantCalculator;
    // clang-format on

    // BrushShapeWeightedSphere inner types define
    enum class WeightingType : int {};

    struct Calculator {};

    struct ConstantCalculator {};
};

} // namespace Editor::ClientBrush
