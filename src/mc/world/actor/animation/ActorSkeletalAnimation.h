#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AnimationLoopMode.h"
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/util/molang/MolangVersion.h"

class ActorSkeletalAnimation {
public:
    // prevent constructor by default
    ActorSkeletalAnimation& operator=(ActorSkeletalAnimation const&);
    ActorSkeletalAnimation(ActorSkeletalAnimation const&);
    ActorSkeletalAnimation();

public:
    // NOLINTBEGIN
    MCAPI ActorSkeletalAnimation(std::string const& name, std::string const& sourceFilePathWithExtension);

    MCAPI class ActorAnimationEvent& addActorEvent(
        float               time,
        std::string const&  event,
        ::CurrentCmdVersion commandVersion,
        ::MolangVersion     molangVersion
    );

    MCAPI class BoneAnimation& addBoneAnimation(std::string const& name);

    MCAPI class ActorParticleEffectEvent& addParticleEffectEvent(float time);

    MCAPI class ActorSoundEffectEvent& addSoundEffectEvent(float time);

    MCAPI void calculateAnimationLength();

    MCAPI std::vector<class BoneAnimation>& getBoneAnimations();

    MCAPI void initPrecomputedInterpolation();

    MCAPI void removeIrrelevantKeyFramesAndConvertAllFloatKeyFramesToSimplifiedVersion();

    MCAPI void setAnimTimeUpdate(class ExpressionNode const& expression);

    MCAPI void setAnimationLength(float animationLength);

    MCAPI void setBlendWeight(class ExpressionNode const& expression);

    MCAPI void setLoopDelay(class ExpressionNode const& expression);

    MCAPI void setLoopMode(::AnimationLoopMode);

    MCAPI void setShouldOverridePreviousAnimation(bool overridePreviousAnimation);

    MCAPI void setStartDelay(class ExpressionNode const& expression);

    MCAPI void sortEvents();

    MCAPI void sortParticleEffectEvents();

    MCAPI void sortSoundEffectEvents();

    MCAPI ~ActorSkeletalAnimation();

    // NOLINTEND
};
