#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ExpressionNode; }
// clang-format on

namespace ParticleSystem {

struct ColorFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                              mValue;
    ::ll::TypedStorage<8, 64, ::std::array<::ExpressionNode, 4>> mColorExpr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setColorExprFromData(::std::array<::SharedTypes::Legacy::ExpressionNode, 4>& data);
    // NOLINTEND
};

} // namespace ParticleSystem
