#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ColorGradient.h"

namespace SharedTypes::v1_20_80::ParticleAppearanceTintingComponentHelper {

struct ColorProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_20_80::ColorGradient> mInterpolatedColor;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>  mInterpolantExpr;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80::ParticleAppearanceTintingComponentHelper
