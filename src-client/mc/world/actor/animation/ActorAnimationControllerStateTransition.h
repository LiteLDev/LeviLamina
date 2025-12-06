#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

class ActorAnimationControllerStateTransition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>    mTargetStateName;
    ::ll::TypedStorage<8, 8, uint64>            mTargetStateIndex;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mTransitionExpression;
    // NOLINTEND
};
