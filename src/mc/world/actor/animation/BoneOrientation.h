#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/BoneAnimationRelativeMode.h"
#include "mc/world/actor/animation/BoneBindingMethod.h"
#include "mc/world/actor/animation/BoneOrientationTransform.h"

class BoneOrientation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                         mParentBoneIndex;
    ::ll::TypedStorage<4, 4, ::SkeletalHierarchyIndex>    mParentSkeletalHierarchyIndex;
    ::ll::TypedStorage<8, 48, ::HashedString>             mName;
    ::ll::TypedStorage<4, 64, ::Matrix>                   mMatrix;
    ::ll::TypedStorage<4, 36, ::BoneOrientationTransform> mTransform;
    ::ll::TypedStorage<4, 36, ::BoneOrientationTransform> mDefaultTransform;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Matrix>> mLocalPreTransformMatrix;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>           mBoneBindingExpression;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mPivot;
    ::ll::TypedStorage<1, 1, ::BoneBindingMethod>         mBoneBindingMethod;
    ::ll::TypedStorage<1, 1, ::BoneAnimationRelativeMode> mRotationRelativeMode;
    ::ll::TypedStorage<1, 1, bool>                        mOverrideStackMatrix;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    BoneOrientation();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI BoneOrientation();

    MCAPI BoneOrientation(::BoneOrientation&&);

    MCAPI explicit BoneOrientation(::HashedString const& boneName);
#endif

    MCAPI BoneOrientation(::BoneOrientation const& rhs);

#ifdef LL_PLAT_C
    MCFOLD ::ExpressionNode const* getBoneBindingExpression() const;

    MCAPI ::BoneBindingMethod getBoneBindingMethod() const;

    MCAPI ::BoneOrientationTransform& getDefaultTransform();

    MCFOLD ::Matrix const& getMatrix() const;
#endif

    MCFOLD ::HashedString const& getName() const;

    MCFOLD ::Vec3 const& getPivot() const;

    MCFOLD ::Vec3& getPivot();

#ifdef LL_PLAT_C
    MCAPI ::BoneAnimationRelativeMode getRotationRelativeMode() const;

    MCFOLD ::BoneOrientationTransform const& getTransform() const;
#endif

    MCAPI ::BoneOrientation& operator=(::BoneOrientation const& rhs);

#ifdef LL_PLAT_C
    MCAPI void setBoneBindingExpression(::std::string const& bindingExpression, ::MolangVersion molangVersion);

    MCAPI void setBoneBindingMethod(::BoneBindingMethod boneBindingMethod);

    MCAPI void setDefaultTransform(::BoneOrientationTransform const& transform);

    MCAPI void setMatrix(::Matrix const& matrix);

    MCAPI void setOverrideStackMatrix(bool arg);

    MCFOLD void setPivot(::Vec3 const& pivot);

    MCAPI void setTransform(::BoneOrientationTransform const& transform);

    MCAPI void LL_CC_V updateBoneTransform(::Vec3 const* offset, ::DirectX::XMMATRIX& boneToEntitySpaceMatrix);
#endif

    MCAPI ::DirectX::XMMATRIX LL_CC_V updateLocalPreTransformMatrix();

    MCAPI ~BoneOrientation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::BoneOrientation& getIdentityBoneOrientation();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BoneOrientation&&);

    MCAPI void* $ctor(::HashedString const& boneName);
#endif

    MCAPI void* $ctor(::BoneOrientation const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
