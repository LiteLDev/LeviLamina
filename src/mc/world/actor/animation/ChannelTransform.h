#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/animation/BoneTransformType.h"
#include "mc/world/actor/animation/ChannelTransformAxisType.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class ChannelTransform_Float;
class RenderParams;
// clang-format on

class ChannelTransform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ExpressionNode[3]>       mXYZ;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mAxis;
    ::ll::TypedStorage<4, 4, ::ChannelTransformAxisType> mTransformDataType;
    // NOLINTEND

public:
    // prevent constructor by default
    ChannelTransform();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChannelTransform(::ChannelTransform_Float const& rhs);

    MCAPI_C void animate(
        ::RenderParams&     renderParams,
        ::BoneOrientation&  destBoneOrientation,
        float               scale,
        ::BoneTransformType boneTransformType
    ) const;

    MCAPI bool getDataValues(::Vec3& minValue, ::Vec3& maxValue) const;

    MCAPI bool operator==(::ChannelTransform const& rhs) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ChannelTransform_Float const& rhs);
    // NOLINTEND
};
