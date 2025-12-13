#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/RenderParams.h"

struct HeartbeatServerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mHeartRateExpression;
#ifdef LL_PLAT_S
    ::ll::TypedStorage<8, 496, ::RenderParams> mRenderParams;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 512, ::RenderParams> mRenderParams;
#endif
    // NOLINTEND
};
