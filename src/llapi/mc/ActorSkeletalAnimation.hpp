/**
 * @file  ActorSkeletalAnimation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorSkeletalAnimation.
 *
 */
class ActorSkeletalAnimation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSKELETALANIMATION
public:
    class ActorSkeletalAnimation& operator=(class ActorSkeletalAnimation const &) = delete;
    ActorSkeletalAnimation(class ActorSkeletalAnimation const &) = delete;
    ActorSkeletalAnimation() = delete;
#endif

public:
    /**
     * @symbol  ??0ActorSkeletalAnimation\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI ActorSkeletalAnimation(std::string const &, std::string const &);
    /**
     * @symbol  ?addActorEvent\@ActorSkeletalAnimation\@\@QEAAAEAVActorAnimationEvent\@\@MAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CurrentCmdVersion\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI class ActorAnimationEvent & addActorEvent(float, std::string const &, enum class CurrentCmdVersion, enum class MolangVersion);
    /**
     * @symbol  ?addBoneAnimation\@ActorSkeletalAnimation\@\@QEAAAEAVBoneAnimation\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BoneAnimation & addBoneAnimation(std::string const &);
    /**
     * @symbol  ?addParticleEffectEvent\@ActorSkeletalAnimation\@\@QEAAAEAVActorParticleEffectEvent\@\@M\@Z
     */
    MCAPI class ActorParticleEffectEvent & addParticleEffectEvent(float);
    /**
     * @symbol  ?addSoundEffectEvent\@ActorSkeletalAnimation\@\@QEAAAEAVActorSoundEffectEvent\@\@M\@Z
     */
    MCAPI class ActorSoundEffectEvent & addSoundEffectEvent(float);
    /**
     * @symbol  ?calculateAnimationLength\@ActorSkeletalAnimation\@\@QEAAXXZ
     */
    MCAPI void calculateAnimationLength();
    /**
     * @symbol  ?getBoneAnimations\@ActorSkeletalAnimation\@\@QEAAAEAV?$vector\@VBoneAnimation\@\@V?$allocator\@VBoneAnimation\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class BoneAnimation> & getBoneAnimations();
    /**
     * @symbol  ?initPrecomputedInterpolation\@ActorSkeletalAnimation\@\@QEAAXXZ
     */
    MCAPI void initPrecomputedInterpolation();
    /**
     * @symbol  ?removeIrrelevantKeyFramesAndConvertAllFloatKeyFramesToSimplifiedVersion\@ActorSkeletalAnimation\@\@QEAAXXZ
     */
    MCAPI void removeIrrelevantKeyFramesAndConvertAllFloatKeyFramesToSimplifiedVersion();
    /**
     * @symbol  ?setAnimTimeUpdate\@ActorSkeletalAnimation\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void setAnimTimeUpdate(class ExpressionNode const &);
    /**
     * @symbol  ?setAnimationLength\@ActorSkeletalAnimation\@\@QEAAXM\@Z
     */
    MCAPI void setAnimationLength(float);
    /**
     * @symbol  ?setBlendWeight\@ActorSkeletalAnimation\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void setBlendWeight(class ExpressionNode const &);
    /**
     * @symbol  ?setLoopDelay\@ActorSkeletalAnimation\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void setLoopDelay(class ExpressionNode const &);
    /**
     * @symbol  ?setLoopMode\@ActorSkeletalAnimation\@\@QEAAXW4AnimationLoopMode\@\@\@Z
     */
    MCAPI void setLoopMode(enum class AnimationLoopMode);
    /**
     * @symbol  ?setShouldOverridePreviousAnimation\@ActorSkeletalAnimation\@\@QEAAX_N\@Z
     */
    MCAPI void setShouldOverridePreviousAnimation(bool);
    /**
     * @symbol  ?setStartDelay\@ActorSkeletalAnimation\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void setStartDelay(class ExpressionNode const &);
    /**
     * @symbol  ?sortEvents\@ActorSkeletalAnimation\@\@QEAAXXZ
     */
    MCAPI void sortEvents();
    /**
     * @symbol  ?sortParticleEffectEvents\@ActorSkeletalAnimation\@\@QEAAXXZ
     */
    MCAPI void sortParticleEffectEvents();
    /**
     * @symbol  ?sortSoundEffectEvents\@ActorSkeletalAnimation\@\@QEAAXXZ
     */
    MCAPI void sortSoundEffectEvents();
    /**
     * @symbol  ??1ActorSkeletalAnimation\@\@QEAA\@XZ
     */
    MCAPI ~ActorSkeletalAnimation();

};