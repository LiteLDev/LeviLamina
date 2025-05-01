#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ExpressionNode.h"
#include "mc/world/actor/RenderParams.h"

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
    MCNAPI ~HeartbeatServerComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
