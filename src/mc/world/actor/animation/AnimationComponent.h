#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/MolangVariableMap.h"
#include "mc/world/actor/RenderParams.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/AnimationComponentGroupType.h"
#include "mc/world/actor/animation/AnimationComponentID.h"
#include "mc/world/actor/animation/AttachableSlotIndex.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorAnimationControllerInfo;
class ActorAnimationControllerPlayer;
class ActorAnimationControllerStatePlayer;
class ActorAnimationPlayer;
class ActorSkeletalAnimationPtr;
class ApplyAnimationContext;
class BoneOrientation;
class CommonResourceDefinitionMap;
class ExpressionNode;
class Matrix;
class ModelPartLocator;
struct AnimationComponentArguments;
class ActorRenderData;
class ClientAnimationComponent;
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

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI_C ::std::shared_ptr<::AnimationComponent>&
        getAnimationComponent(::Actor& owner, ::SubClientId subClientId, ::AttachableSlotIndex attachableIndex);
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
#ifdef LL_PLAT_S
    ::ll::TypedStorage<8, 496, ::RenderParams> mRenderParams;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 512, ::RenderParams> mRenderParams;
#endif
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorAnimationPlayer>>      mPlaySingleAnimation;
    ::ll::TypedStorage<8, 8, void*>                                           mModelRenderControllerCacheWasBuiltFrom;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CommonResourceDefinitionMap>> mCommonResourceDefinitionMap;
    ::ll::TypedStorage<8, 8, ::std::unordered_map<::HashedString, ::HashedString> const*> mParticleEffectMap;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ActorAnimationPlayer&)>> mAnimationComponentInitFunction;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimationComponent::ChildAnimationComponentInfo>>
        mChildAnimationComponents;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>>
                                                            mBoneOrientations;
    ::ll::TypedStorage<1, 1, bool>                          mAnimationComponentInitialized;
    ::ll::TypedStorage<4, 4, ::AnimationComponentGroupType> mAnimationComponentGroupType;
    ::ll::TypedStorage<8, 8, ::AnimationComponentID>        mOwnerUUID;
    ::ll::TypedStorage<8, 8, int64>                         mLastUpdateFrame;
    ::ll::TypedStorage<8, 8, uint64>                        mLastReloadInitTimeStampClient;
    ::ll::TypedStorage<1, 1, bool>                          mApplyAnimations;
    ::ll::TypedStorage<1, 1, bool>                          mNeedToUpdateQueryableBoneOrientations;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimationComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnimationComponent();

    virtual ::ClientAnimationComponent* tryGetClient();

    virtual void visitApplyContext(
        ::brstd::function_ref<void(::ApplyAnimationContext const&) const, void(::ApplyAnimationContext const&)> visitor
    ) const;

    virtual void
    initializeClientAnimationComponent(::std::function<void(::ActorAnimationPlayer&)> animationComponentInitFunction);

    virtual void ensureClientAnimationComponentIsInitialized();

    virtual void setDirty();

    virtual void updateQueryableGeometryBoneOrientations();

    virtual ::Matrix const* getQueryableBoneOrientation(uint64 boneNameHash) const;

    virtual ::gsl::span<::SkeletalHierarchyIndex const> getSkeletalHierarchiesToProcess() const;

    virtual float _getActorRenderDeltaTime(::ActorRenderData const& data) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AnimationComponent(::AnimationComponentArguments&& args);

    MCAPI_C void _addAnimationToStatePlayer(
        ::HashedString const&                                    friendlyName,
        ::std::shared_ptr<::ActorAnimationControllerStatePlayer> player
    );

    MCAPI_C ::RenderParams& _prepRenderParamsForActor(::Actor& actor);

    MCAPI_C void applyAnimations(bool setDefaultPose);

    MCAPI ::std::shared_ptr<::ActorAnimationPlayer> createAnimationPlayer(
        ::HashedString const&                                    friendlyName,
        ::ExpressionNode const&                                  blendExpression,
        ::std::set<::HashedString, ::std::hash<::HashedString>>& animationControllerNameStack
    );

    MCAPI_C ::std::shared_ptr<::ActorAnimationControllerStatePlayer> editGlobalAnimationData(
        ::HashedString const& friendlyName,
        float                 blendOutTime,
        ::std::string const&  stopExpression,
        ::MolangVersion       stopExpressionVersion,
        ::std::string const&  nextStateName,
        ::std::string const&  runtimeController
    );

    MCAPI_C ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const& rawAnimationName);

    MCAPI_C void forceNextUpdateToApplyAnimations();

    MCAPI_C ::std::shared_ptr<::ActorAnimationControllerPlayer>
    getAnimationControllerPlayer(::HashedString const& destControllerName, bool createIfMissing);

    MCAPI ::std::vector<::BoneOrientation>*
    getBoneOrientations(::SkeletalHierarchyIndex skeletalHierarchyIndex, bool missingIsOkay);

    MCAPI_C ::std::weak_ptr<::CommonResourceDefinitionMap> getCommonResourceDefinitionMap();

    MCAPI_C float getRegisteredAnimationLength(::std::string const& friendlyName) const;

    MCAPI_C bool haveInitializedScriptsRun() const;

    MCAPI void initInstanceSpecificAnimationData(::MolangVariableMap* variableMap);

    MCAPI void initializeServerAnimationComponent(
        ::Actor&                                         actor,
        ::std::shared_ptr<::CommonResourceDefinitionMap> animationResourceDefinition,
        ::std::function<void(::ActorAnimationPlayer&)>   animationComponentInitFunction
    );

    MCAPI_C bool isAnimationRegistered(::HashedString const& friendlyName) const;

    MCAPI_C ::std::shared_ptr<::ActorAnimationControllerStatePlayer> playAnimation(
        ::HashedString const& friendlyName,
        ::HashedString const& owningStateName,
        ::std::string const&  runtimeController
    );

    MCAPI_C void setInitializedScriptsRun(bool);

    MCAPI void setupDeltaTimeAndLifeTimeParams(bool incrementLifetime);

    MCAPI_C bool tryRegisterAnimation(::HashedString const& friendlyName, ::ActorSkeletalAnimationPtr animation);
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
    MCAPI void* $ctor(::AnimationComponentArguments&& args);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ClientAnimationComponent* $tryGetClient();

    MCAPI void $visitApplyContext(
        ::brstd::function_ref<void(::ApplyAnimationContext const&) const, void(::ApplyAnimationContext const&)> visitor
    ) const;

    MCFOLD void
    $initializeClientAnimationComponent(::std::function<void(::ActorAnimationPlayer&)> animationComponentInitFunction);

    MCFOLD void $ensureClientAnimationComponentIsInitialized();

    MCAPI void $setDirty();

    MCFOLD void $updateQueryableGeometryBoneOrientations();

    MCFOLD ::Matrix const* $getQueryableBoneOrientation(uint64 boneNameHash) const;

    MCFOLD ::gsl::span<::SkeletalHierarchyIndex const> $getSkeletalHierarchiesToProcess() const;

    MCFOLD float $_getActorRenderDeltaTime(::ActorRenderData const& data) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
