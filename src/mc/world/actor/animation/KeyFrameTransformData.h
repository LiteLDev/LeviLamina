#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChannelTransform;
class ChannelTransform_Float;
class ExpressionNode;
class Vec3;
// clang-format on

class KeyFrameTransformData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ChannelTransform>>       mChannelTransforms;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChannelTransform_Float>> mChannelTransforms_Floats;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addChannelTransform(::ExpressionNode const& expression);

    MCAPI void addChannelTransform(::ExpressionNode const& expression, ::Vec3 const& axis);

    MCAPI void addChannelTransform(::ExpressionNode const& expression, int axisIndex);
    // NOLINTEND
};
