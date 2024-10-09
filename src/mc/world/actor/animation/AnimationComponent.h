#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/AnimationComponentGroupType.h"

class AnimationComponent {
public:
    // prevent constructor by default
    AnimationComponent& operator=(AnimationComponent const&);
    AnimationComponent(AnimationComponent const&);
    AnimationComponent();

public:
    // NOLINTBEGIN
    MCAPI AnimationComponent(
        ::AnimationComponentGroupType     animationComponentGroup,
        class AnimationComponentID const& ownerUUID
    );

    MCAPI void applyAnimations(bool setDefaultPose);

    MCAPI std::shared_ptr<class ActorAnimationPlayer> createAnimationPlayer(
        class HashedString const&                                    friendlyName,
        class ExpressionNode const&                                  blendExpression,
        std::set<class HashedString, std::hash<class HashedString>>& animationControllerNameStack
    );

    MCAPI std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& getAllBoneOrientations();

    MCAPI std::vector<class BoneOrientation>*
          getBoneOrientations(::SkeletalHierarchyIndex skeletalHierarchyIndex, bool missingIsOkay);

    MCAPI std::shared_ptr<class ActorAnimationControllerStatePlayer> const
          getCurrentAnimationControllerStatePlayer() const;

    MCAPI int64 getCurrentFrameIndex();

    MCAPI class ModelPartLocator* getLocator(uint64 const& locatorNameHash);

    MCAPI class RenderParams& getRenderParams();

    MCAPI void initInstanceSpecificAnimationData(class MolangVariableMap* variableMap);

    MCAPI void initializeServerAnimationComponent(
        class Actor&                                       actor,
        std::shared_ptr<class CommonResourceDefinitionMap> animationResourceDefinition,
        std::function<void(class ActorAnimationPlayer&)>   animationComponentInitFunction
    );

    MCAPI bool isInitialized();

    MCAPI void serverUpdate(class Actor& actor);

    MCAPI void
    setCurrentAnimationControllerStatePlayer(std::shared_ptr<class ActorAnimationControllerStatePlayer> statePlayer);

    MCAPI void setDirty();

    MCAPI void setLastReloadInitTimeStampClient(uint64 lastReloadInitTimeStamp);

    MCAPI void setupDeltaTimeAndLifeTimeParams(bool incrementLifetime);

    MCAPI bool shouldReloadBasedOnLastReloadInitTimeStamp() const;

    MCAPI bool usesLastReloadInitTimeStampClient() const;

    MCAPI ~AnimationComponent();

    MCAPI static uint64 getReloadTimeStampClient();

    MCAPI static void incrementCurrentServerFrameIndex();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::atomic<int64> mClientFrameIndex;

    MCAPI static std::atomic<int64> mReloadTimeStampClient;

    MCAPI static std::atomic<int64> mServerFrameIndex;

    // NOLINTEND
};
