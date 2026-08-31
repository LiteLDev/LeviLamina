#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
// clang-format on

struct PartVisibilityExpression {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ExpressionNode const*> mExpression;
    ::ll::TypedStorage<8, 8, ::RenderParams*>         mParams;
    // NOLINTEND
};
