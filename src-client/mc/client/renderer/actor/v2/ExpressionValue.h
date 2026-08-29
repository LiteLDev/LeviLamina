#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
// clang-format on

struct ExpressionValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ExpressionNode const*> mExpression;
    ::ll::TypedStorage<8, 8, ::RenderParams*>         mRenderParams;
    ::ll::TypedStorage<8, 8, uint*>                   mOutput;
    // NOLINTEND
};
