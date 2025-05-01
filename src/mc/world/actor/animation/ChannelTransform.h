#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChannelTransform_Float;
class ExpressionNode;
class Vec3;
// clang-format on

class ChannelTransform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 648> mUnk2837bb;
    ::ll::UntypedStorage<4, 12>  mUnkcedb21;
    ::ll::UntypedStorage<4, 4>   mUnk44ec16;
    // NOLINTEND

public:
    // prevent constructor by default
    ChannelTransform& operator=(ChannelTransform const&);
    ChannelTransform(ChannelTransform const&);
    ChannelTransform();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ChannelTransform(::ExpressionNode const& expression);

    MCNAPI explicit ChannelTransform(::ChannelTransform_Float const& rhs);

    MCNAPI ChannelTransform(::ExpressionNode const& expression, ::Vec3 const& axis);

    MCNAPI ChannelTransform(::ExpressionNode const& expression, int axisIndex);

    MCNAPI bool getDataValues(::Vec3& minValue, ::Vec3& maxValue) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ExpressionNode const& expression);

    MCNAPI void* $ctor(::ChannelTransform_Float const& rhs);

    MCNAPI void* $ctor(::ExpressionNode const& expression, ::Vec3 const& axis);

    MCNAPI void* $ctor(::ExpressionNode const& expression, int axisIndex);
    // NOLINTEND
};
