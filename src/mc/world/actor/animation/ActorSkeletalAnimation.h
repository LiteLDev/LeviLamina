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
    // symbol: ??0ActorSkeletalAnimation@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI ActorSkeletalAnimation(std::string const& name, std::string const& sourceFilePathWithExtension);

    // symbol:
    // ?addActorEvent@ActorSkeletalAnimation@@QEAAAEAVActorAnimationEvent@@MAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CurrentCmdVersion@@W4MolangVersion@@@Z
    MCAPI class ActorAnimationEvent& addActorEvent(
        float               time,
        std::string const&  event,
        ::CurrentCmdVersion commandVersion,
        ::MolangVersion     molangVersion
    );

    // symbol:
    // ?addBoneAnimation@ActorSkeletalAnimation@@QEAAAEAVBoneAnimation@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class BoneAnimation& addBoneAnimation(std::string const& name);

    // symbol: ?addParticleEffectEvent@ActorSkeletalAnimation@@QEAAAEAVActorParticleEffectEvent@@M@Z
    MCAPI class ActorParticleEffectEvent& addParticleEffectEvent(float time);

    // symbol: ?addSoundEffectEvent@ActorSkeletalAnimation@@QEAAAEAVActorSoundEffectEvent@@M@Z
    MCAPI class ActorSoundEffectEvent& addSoundEffectEvent(float time);

    // symbol: ?calculateAnimationLength@ActorSkeletalAnimation@@QEAAXXZ
    MCAPI void calculateAnimationLength();

    // symbol:
    // ?getBoneAnimations@ActorSkeletalAnimation@@QEAAAEAV?$vector@VBoneAnimation@@V?$allocator@VBoneAnimation@@@std@@@std@@XZ
    MCAPI std::vector<class BoneAnimation>& getBoneAnimations();

    // symbol: ?initPrecomputedInterpolation@ActorSkeletalAnimation@@QEAAXXZ
    MCAPI void initPrecomputedInterpolation();

    // symbol: ?removeIrrelevantKeyFramesAndConvertAllFloatKeyFramesToSimplifiedVersion@ActorSkeletalAnimation@@QEAAXXZ
    MCAPI void removeIrrelevantKeyFramesAndConvertAllFloatKeyFramesToSimplifiedVersion();

    // symbol: ?setAnimTimeUpdate@ActorSkeletalAnimation@@QEAAXAEBVExpressionNode@@@Z
    MCAPI void setAnimTimeUpdate(class ExpressionNode const& expression);

    // symbol: ?setAnimationLength@ActorSkeletalAnimation@@QEAAXM@Z
    MCAPI void setAnimationLength(float animationLength);

    // symbol: ?setBlendWeight@ActorSkeletalAnimation@@QEAAXAEBVExpressionNode@@@Z
    MCAPI void setBlendWeight(class ExpressionNode const& expression);

    // symbol: ?setLoopDelay@ActorSkeletalAnimation@@QEAAXAEBVExpressionNode@@@Z
    MCAPI void setLoopDelay(class ExpressionNode const& expression);

    // symbol: ?setLoopMode@ActorSkeletalAnimation@@QEAAXW4AnimationLoopMode@@@Z
    MCAPI void setLoopMode(::AnimationLoopMode);

    // symbol: ?setShouldOverridePreviousAnimation@ActorSkeletalAnimation@@QEAAX_N@Z
    MCAPI void setShouldOverridePreviousAnimation(bool overridePreviousAnimation);

    // symbol: ?setStartDelay@ActorSkeletalAnimation@@QEAAXAEBVExpressionNode@@@Z
    MCAPI void setStartDelay(class ExpressionNode const& expression);

    // symbol: ?sortEvents@ActorSkeletalAnimation@@QEAAXXZ
    MCAPI void sortEvents();

    // symbol: ?sortParticleEffectEvents@ActorSkeletalAnimation@@QEAAXXZ
    MCAPI void sortParticleEffectEvents();

    // symbol: ?sortSoundEffectEvents@ActorSkeletalAnimation@@QEAAXXZ
    MCAPI void sortSoundEffectEvents();

    // symbol: ??1ActorSkeletalAnimation@@QEAA@XZ
    MCAPI ~ActorSkeletalAnimation();

    // NOLINTEND
};
