#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/BoneTransformType.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class ChannelTransform;
class ChannelTransform_Float;
class ExpressionNode;
class RenderParams;
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

    MCAPI void animate(
        ::RenderParams&     renderParams,
        ::BoneOrientation&  destBoneOrientation,
        float               scale,
        ::BoneTransformType boneTransformType
    ) const;

    MCAPI bool operator==(::KeyFrameTransformData const& rhs) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::KeyFrameTransformData const&);
    // NOLINTEND
};
