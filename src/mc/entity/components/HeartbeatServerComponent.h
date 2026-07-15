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
    ::ll::TypedStorage<8, 504, ::RenderParams> mRenderParams;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 520, ::RenderParams> mRenderParams;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    HeartbeatServerComponent& operator=(HeartbeatServerComponent const&);
    HeartbeatServerComponent(HeartbeatServerComponent const&);
    HeartbeatServerComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::HeartbeatServerComponent& operator=(::HeartbeatServerComponent&&);
    // NOLINTEND
};
