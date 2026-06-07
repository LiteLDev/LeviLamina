#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

namespace ParticleSystem {

struct ColorFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                              mValue;
    ::ll::TypedStorage<8, 64, ::std::array<::ExpressionNode, 4>> mColorExpr;
    // NOLINTEND
};

} // namespace ParticleSystem
