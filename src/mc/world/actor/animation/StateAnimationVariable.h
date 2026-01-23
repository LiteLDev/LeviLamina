#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangEntityVariable.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class AnimationValueCurveKeyFrame;
class RenderParams;
// clang-format on

class StateAnimationVariable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::MolangEntityVariable>                       mVariableName;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                             mInput;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimationValueCurveKeyFrame>> mKeyFrames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setVariable(::RenderParams& renderParams) const;
    // NOLINTEND
};
