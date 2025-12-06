#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/BoneAnimationRelativeMode.h"
#include "mc/world/actor/animation/BoneBindingMethod.h"
#include "mc/world/actor/animation/BoneOrientationTransform.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
// clang-format on

class BoneOrientation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                 mParentBoneIndex;
    ::ll::TypedStorage<4, 4, ::SkeletalHierarchyIndex>            mParentSkeletalHierarchyIndex;
    ::ll::TypedStorage<8, 48, ::HashedString>                     mName;
    ::ll::TypedStorage<4, 64, ::Matrix>                           mMatrix;
    ::ll::TypedStorage<4, 36, ::BoneOrientationTransform>         mTransform;
    ::ll::TypedStorage<4, 36, ::BoneOrientationTransform>         mDefaultTransform;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Matrix>>         mLocalPreTransformMatrix;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ExpressionNode>> mBoneBindingExpression;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mPivot;
    ::ll::TypedStorage<1, 1, ::BoneBindingMethod>                 mBoneBindingMethod;
    ::ll::TypedStorage<1, 1, ::BoneAnimationRelativeMode>         mRotationRelativeMode;
    ::ll::TypedStorage<1, 1, bool>                                mOverrideStackMatrix;
    // NOLINTEND

public:
    // prevent constructor by default
    BoneOrientation(BoneOrientation const&);
    BoneOrientation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void applyShortestPathBlend(
        ::BoneOrientation const& blendOut,
        ::BoneOrientation const& blendIn,
        float                    blendInWeight,
        float
    );

    MCAPI ::BoneOrientation& operator=(::BoneOrientation const& rhs);

    MCAPI void updateLocalPreTransformMatrix();

    MCAPI ~BoneOrientation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    computeBoneTransform(::BoneOrientation& boneOrientation, ::Vec3 const* offset, ::Matrix& boneToEntitySpaceMatrix);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
