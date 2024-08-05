#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorAnimationType.h"
#include "mc/enums/SkeletalHierarchyIndex.h"

class ActorAnimationPlayer {
public:
    // prevent constructor by default
    ActorAnimationPlayer& operator=(ActorAnimationPlayer const&);
    ActorAnimationPlayer(ActorAnimationPlayer const&);
    ActorAnimationPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorAnimationPlayer();

    // vIndex: 1
    virtual void applyToPose(
        class RenderParams&                                                               renderParams,
        std::unordered_map<::SkeletalHierarchyIndex, std::vector<class BoneOrientation>>& destBoneOrientationsMap,
        float                                                                             blendWeight
    ) = 0;

    // vIndex: 2
    virtual void resetAnimation() = 0;

    // vIndex: 3
    virtual void buildBoneToPartMapping(class AnimationComponent&);

    // vIndex: 4
    virtual void bindParticleEffects(std::unordered_map<class HashedString, class HashedString> const&);

    // vIndex: 5
    virtual void bindSoundEffects(std::unordered_map<class HashedString, std::string> const&);

    // vIndex: 6
    virtual bool hasAnimationFinished() const = 0;

    // vIndex: 7
    virtual std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const& friendlyName) = 0;

    // vIndex: 8
    virtual ::ActorAnimationType getAnimationType() const = 0;

    // vIndex: 9
    virtual class HashedString const& getRawName() const = 0;

    // NOLINTEND
};
