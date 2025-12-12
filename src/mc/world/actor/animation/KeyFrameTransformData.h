#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChannelTransform;
class ChannelTransform_Float;
class ExpressionNode;
// clang-format on

class KeyFrameTransformData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ChannelTransform>>       mChannelTransforms;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChannelTransform_Float>> mChannelTransforms_Floats;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyFrameTransformData& operator=(KeyFrameTransformData const&);
    KeyFrameTransformData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI KeyFrameTransformData(::KeyFrameTransformData const&);

    MCAPI void addChannelTransform(::ExpressionNode const& expression, int axisIndex);

    MCAPI float getFirstChannelFloat(uint64 axisIndex) const;

    MCAPI bool operator==(::KeyFrameTransformData const& rhs) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::KeyFrameTransformData const&);
    // NOLINTEND
};
