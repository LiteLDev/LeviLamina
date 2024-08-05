#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorAnimationType.h"
#include "mc/enums/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"

class ActorAnimationControllerPlayer : public ::ActorAnimationPlayer {
public:
    // prevent constructor by default
    ActorAnimationControllerPlayer& operator=(ActorAnimationControllerPlayer const&);
    ActorAnimationControllerPlayer(ActorAnimationControllerPlayer const&);
    ActorAnimationControllerPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorAnimationControllerPlayer() = default;

    // vIndex: 1
    virtual void applyToPose(
        class RenderParams&                                                               renderParams,
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    );

    // vIndex: 2
    virtual void resetAnimation();

    // vIndex: 4
    virtual void
    bindParticleEffects(std::unordered_map<class HashedString, class HashedString> const& actorParticleEffectMap);

    // vIndex: 5
    virtual void bindSoundEffects(std::unordered_map<class HashedString, std::string> const& actorSoundEffectMap);

    // vIndex: 6
    virtual bool hasAnimationFinished() const;

    // vIndex: 7
    virtual std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const& friendlyName);

    // vIndex: 8
    virtual ::ActorAnimationType getAnimationType() const;

    // vIndex: 9
    virtual class HashedString const& getRawName() const;

    MCAPI
    ActorAnimationControllerPlayer(class HashedString const& friendlyName, class ActorAnimationControllerPtr const& animationControllerPtr, class AnimationComponent& animationComponent, class ExpressionNode const& blendExpression, std::set<class HashedString, std::hash<class HashedString>>&);

    MCAPI void applyStateAnimationToPose(
        class RenderParams&                                                               renderParams,
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    );

    MCAPI void blendViaShortestPath(
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& destBoneOrientationsMap,
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& blendOutBoneOrientationsMap,
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& blendInBoneOrientationsMap,
        float                                                                             blendInWeight,
        float                                                                             blendWeight
    );

    // NOLINTEND
};
