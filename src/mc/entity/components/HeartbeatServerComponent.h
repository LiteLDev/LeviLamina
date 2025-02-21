#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
// clang-format on

struct HeartbeatServerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 216, ::ExpressionNode> mHeartRateExpression;
    ::ll::TypedStorage<8, 496, ::RenderParams>   mRenderParams;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~HeartbeatServerComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
