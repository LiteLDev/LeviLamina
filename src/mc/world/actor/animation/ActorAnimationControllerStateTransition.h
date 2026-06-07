#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/ExpressionNode.h"

class ActorAnimationControllerStateTransition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>    mTargetStateName;
    ::ll::TypedStorage<8, 8, uint64>            mTargetStateIndex;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mTransitionExpression;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerStateTransition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorAnimationControllerStateTransition(
        ::std::string const& targetStateName,
        ::std::string const& expression,
        ::MolangVersion      molangVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string const& targetStateName, ::std::string const& expression, ::MolangVersion molangVersion);
    // NOLINTEND
};
