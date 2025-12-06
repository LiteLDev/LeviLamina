#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/BoneTransformType.h"
#include "mc/world/actor/animation/KeyFrameLerpMode.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class ExpressionNode;
class KeyFrameTransformData;
class RenderParams;
class Vec3;
// clang-format on

class KeyFrameTransform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::KeyFrameTransformData>> mPrePost;
    ::ll::TypedStorage<8, 16, ::KeyFrameLerpMode>                     mLerpMode;
    ::ll::TypedStorage<4, 4, float>                                   mKeyFrameTimeStamp;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyFrameTransform& operator=(KeyFrameTransform const&);
    KeyFrameTransform();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI KeyFrameTransform(::KeyFrameTransform const&);

    MCAPI void animate(
        ::RenderParams&     renderParams,
        ::BoneOrientation&  destBoneOrientation,
        float               scale,
        ::BoneTransformType boneTransformType
    ) const;

    MCAPI ::KeyFrameTransform& operator=(::KeyFrameTransform&&);

    MCAPI bool optimizeAndGetDataValues(::Vec3& minValue, ::Vec3& maxValue);

    MCAPI void set(::ExpressionNode const& expression);

    MCAPI void set(::ExpressionNode const& expression, ::Vec3 const& axis);

    MCAPI void set(::ExpressionNode const& expression, int axisIndex);

    MCAPI ~KeyFrameTransform();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void computeCubicPolynomial(
        ::KeyFrameTransform* p0,
        ::KeyFrameTransform& p1,
        ::KeyFrameTransform& p2,
        ::KeyFrameTransform* p3
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::KeyFrameTransform const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
