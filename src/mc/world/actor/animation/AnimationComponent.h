#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
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
class BoneOrientation;
class CommonResourceDefinitionMap;
class DataDrivenGeometry;
class ExpressionNode;
class Matrix;
class ModelPartLocator;
class MolangVariableMap;
class DataDrivenModel;
struct RenderControllerToProcess;
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
        ::ll::UntypedStorage<8, 8>  mUnk301dd5;
        ::ll::UntypedStorage<8, 56> mUnkb77211;
        ::ll::UntypedStorage<8, 16> mUnka46f8f;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChildAnimationComponentInfo& operator=(ChildAnimationComponentInfo const&);
        ChildAnimationComponentInfo(ChildAnimationComponentInfo const&);
        ChildAnimationComponentInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ::std::shared_ptr<::AnimationComponent>&
        getAnimationComponent(::Actor& owner, ushort attachableDepth, ::AttachableSlotIndex attachableIndex);
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
#ifdef LL_PLAT_C
    ::ll::TypedStorage<8, 24, ::std::vector<::RenderControllerToProcess>> mRenderControllersToProcess;
    ::ll::TypedStorage<8, 24, ::std::vector<::SkeletalHierarchyIndex>>    mSkeletalHierarchiesToProcess;
    ::ll::TypedStorage<8, 24, ::std::vector<::Matrix>>                    mQueryableBoneOrientations;
    ::ll::TypedStorage<1, 1, bool>                                        mAreRenderControllersConstant;
#endif
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
    MCNAPI
    AnimationComponent(::AnimationComponentGroupType animationComponentGroup, ::AnimationComponentID const& ownerUUID);

    MCNAPI_C void _addAnimationToStatePlayer(
        ::HashedString const&                                    friendlyName,
        ::std::shared_ptr<::ActorAnimationControllerStatePlayer> player
    );

    MCNAPI_C ::RenderParams& _prepRenderParamsForActor(::Actor& actor);

    MCNAPI void applyAnimations(bool setDefaultPose);

    MCNAPI_C bool attemptToSetParentBoneMapping(
        ::AnimationComponent& parentAnimationComponent,
        ::BoneOrientation&    childBoneOrientation
    ) const;

    MCNAPI ::std::shared_ptr<::ActorAnimationPlayer> createAnimationPlayer(
        ::HashedString const&                                    friendlyName,
        ::ExpressionNode const&                                  blendExpression,
        ::std::set<::HashedString, ::std::hash<::HashedString>>& animationControllerNameStack
    );

    MCNAPI_C ::std::shared_ptr<::ActorAnimationControllerStatePlayer> editGlobalAnimationData(
        ::HashedString const& friendlyName,
        float                 blendOutTime,
        ::std::string const&  stopExpression,
        ::MolangVersion       stopExpressionVersion,
        ::std::string const&  nextStateName,
        ::std::string const&  runtimeController
    );

    MCNAPI_C void ensureClientAnimationComponentIsInitialized();

    MCNAPI_C ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const& rawAnimationName);

    MCNAPI_C void forceNextUpdateToApplyAnimations();

    MCNAPI_C ::std::shared_ptr<::ActorAnimationControllerPlayer>
    getAnimationControllerPlayer(::HashedString const& destControllerName, bool createIfMissing);

    MCNAPI_C ::std::vector<::BoneOrientation>& getBoneOrientations(::DataDrivenGeometry const& sourceGeo);

    MCNAPI ::std::vector<::BoneOrientation>*
    getBoneOrientations(::SkeletalHierarchyIndex skeletalHierarchyIndex, bool missingIsOkay);

    MCNAPI_C ::ModelPartLocator* getLocator(::HashedString const& locatorNameHash);

    MCNAPI_C ::Matrix const* getQueryableBoneOrientation(uint64 boneNameHash) const;

    MCNAPI_C float getRegisteredAnimationLength(::std::string const& friendlyName) const;

    MCNAPI_C bool haveInitializedScriptsRun() const;

    MCNAPI void initInstanceSpecificAnimationData(::MolangVariableMap* variableMap);

    MCNAPI_C void
    initializeClientAnimationComponent(::std::function<void(::ActorAnimationPlayer&)> animationComponentInitFunction);

    MCNAPI void initializeServerAnimationComponent(
        ::Actor&                                         actor,
        ::std::shared_ptr<::CommonResourceDefinitionMap> animationResourceDefinition,
        ::std::function<void(::ActorAnimationPlayer&)>   animationComponentInitFunction
    );

    MCNAPI_C bool isAnimationRegistered(::HashedString const& friendlyName) const;

    MCNAPI_C ::std::shared_ptr<::ActorAnimationControllerStatePlayer> playAnimation(
        ::HashedString const& friendlyName,
        ::HashedString const& owningStateName,
        ::std::string const&  runtimeController
    );

    MCNAPI void setDirty();

    MCNAPI_C void setInitializedScriptsRun(bool);

    MCNAPI_C void setupDeltaTimeAndLifeTimeParams(bool incrementLifetime);

    MCNAPI_C bool tryRegisterAnimation(::HashedString const& friendlyName, ::ActorSkeletalAnimationPtr animation);

    MCNAPI_C void updateQueryableGeometryBoneOrientations();

    MCNAPI_C void updateRenderControllersToProcess(
        ::std::shared_ptr<::DataDrivenModel> itemModel,
        ::RenderParams&                      renderParamsToUseForRenderControllerEvalulation
    );

    MCNAPI ~AnimationComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::atomic<int64>& mClientFrameIndex();

    MCNAPI static ::std::atomic<int64>& mReloadTimeStampClient();

    MCNAPI static ::std::atomic<int64>& mServerFrameIndex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AnimationComponentGroupType animationComponentGroup, ::AnimationComponentID const& ownerUUID);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
