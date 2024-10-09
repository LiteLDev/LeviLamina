#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/ActorAnimationPlayer.h"
#include "mc/world/actor/animation/ActorAnimationType.h"

class ActorSkeletalAnimationPlayer : public ::ActorAnimationPlayer {
public:
    // prevent constructor by default
    ActorSkeletalAnimationPlayer& operator=(ActorSkeletalAnimationPlayer const&);
    ActorSkeletalAnimationPlayer(ActorSkeletalAnimationPlayer const&);
    ActorSkeletalAnimationPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorSkeletalAnimationPlayer() = default;

    // vIndex: 1
    virtual void applyToPose(
        class RenderParams&                                                               renderParams,
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& destBoneOrientationMap,
        float                                                                             blendWeight
    );

    // vIndex: 2
    virtual void resetAnimation();

    // vIndex: 3
    virtual void buildBoneToPartMapping(class AnimationComponent& animationComponent);

    // vIndex: 4
    virtual void
    bindParticleEffects(std::unordered_map<class HashedString, class HashedString> const& actorParticleEffectMap);

    // vIndex: 5
    virtual void bindSoundEffects(std::unordered_map<class HashedString, std::string> const& actorSoundEffectMap);

    // vIndex: 6
    virtual bool hasAnimationFinished() const;

    // vIndex: 7
    virtual std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const&);

    // vIndex: 8
    virtual ::ActorAnimationType getAnimationType() const;

    // vIndex: 9
    virtual class HashedString const& getRawName() const;

    MCAPI ActorSkeletalAnimationPlayer(
        class HashedString const&       friendlyName,
        class ActorSkeletalAnimationPtr animationData,
        class AnimationComponent&       animationComponent,
        class ExpressionNode const&     blendExpression
    );

    // NOLINTEND
};
