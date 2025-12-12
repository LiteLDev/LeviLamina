#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/MolangVariableMap.h"
#include "mc/world/actor/RenderParams.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/AnimationComponentGroupType.h"
#include "mc/world/actor/animation/AnimationComponentID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorAnimationControllerInfo;
class ActorAnimationControllerStatePlayer;
class ActorAnimationPlayer;
class BoneOrientation;
class CommonResourceDefinitionMap;
class DataDrivenModel;
class ExpressionNode;
class ModelPartLocator;
// clang-format on

class AnimationComponent {
public:
    // AnimationComponent inner types declare
    // clang-format off
    struct ChildAnimationComponentInfo;
    // clang-format on

    // AnimationComponent inner types define
    struct ChildAnimationComponentInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void const*>                              mChildObjectKey;
        ::ll::TypedStorage<8, 56, ::MolangVariableMap>                     mMolangVariableMap;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>> mChildAnimationComponent;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorAnimationControllerStatePlayer>>
        mCurrentAnimationControllerStatePlayer;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ActorAnimationPlayer>>> mComponentAnimationPlayers;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ActorAnimationControllerInfo>>>
                                                                                        mOwnedAnimationControllers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ModelPartLocator>> mModelPartLocators;
    ::ll::TypedStorage<8, 496, ::RenderParams>                                          mRenderParams;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorAnimationPlayer>>                mPlaySingleAnimation;
    ::ll::TypedStorage<8, 8, void*>                                           mModelRenderControllerCacheWasBuiltFrom;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CommonResourceDefinitionMap>> mCommonResourceDefinitionMap;
    ::ll::TypedStorage<8, 8, ::std::unordered_map<::HashedString, ::HashedString> const*> mParticleEffectMap;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ActorAnimationPlayer&)>> mAnimationComponentInitFunction;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimationComponent::ChildAnimationComponentInfo>>
        mChildAnimationComponents;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>>
                                                                        mBoneOrientations;
    ::ll::TypedStorage<1, 1, bool>                                      mAnimationComponentInitialized;
    ::ll::TypedStorage<4, 4, ::AnimationComponentGroupType>             mAnimationComponentGroupType;
    ::ll::TypedStorage<8, 8, ::AnimationComponentID>                    mOwnerUUID;
    ::ll::TypedStorage<8, 8, int64>                                     mLastUpdateFrame;
    ::ll::TypedStorage<8, 8, uint64>                                    mLastReloadInitTimeStampClient;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenModel const>> mLastModelInitializedWith;
    ::ll::TypedStorage<1, 1, bool>                                      mApplyAnimations;
    ::ll::TypedStorage<1, 1, bool>                                      mNeedToUpdateQueryableBoneOrientations;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimationComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    AnimationComponent(::AnimationComponentGroupType animationComponentGroup, ::AnimationComponentID const& ownerUUID);

    MCAPI void applyAnimations(bool setDefaultPose);

    MCAPI ::std::shared_ptr<::ActorAnimationPlayer> createAnimationPlayer(
        ::HashedString const&                                    friendlyName,
        ::ExpressionNode const&                                  blendExpression,
        ::std::set<::HashedString, ::std::hash<::HashedString>>& animationControllerNameStack
    );

    MCAPI ::std::vector<::BoneOrientation>*
    getBoneOrientations(::SkeletalHierarchyIndex skeletalHierarchyIndex, bool missingIsOkay);

    MCAPI void initInstanceSpecificAnimationData(::MolangVariableMap* variableMap);

    MCAPI void initializeServerAnimationComponent(
        ::Actor&                                         actor,
        ::std::shared_ptr<::CommonResourceDefinitionMap> animationResourceDefinition,
        ::std::function<void(::ActorAnimationPlayer&)>   animationComponentInitFunction
    );

    MCAPI void setDirty();

    MCAPI ~AnimationComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::atomic<int64>& mClientFrameIndex();

    MCAPI static ::std::atomic<int64>& mReloadTimeStampClient();

    MCAPI static ::std::atomic<int64>& mServerFrameIndex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AnimationComponentGroupType animationComponentGroup, ::AnimationComponentID const& ownerUUID);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
