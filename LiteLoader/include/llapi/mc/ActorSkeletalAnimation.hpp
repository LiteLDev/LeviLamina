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
     * @hash   -173133591
     * @symbol  ??0ActorSkeletalAnimation\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI ActorSkeletalAnimation(std::string const &, std::string const &);
    /**
     * @hash   432914190
     * @symbol  ?addActorEvent\@ActorSkeletalAnimation\@\@QEAAAEAVActorAnimationEvent\@\@MAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CurrentCmdVersion\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI class ActorAnimationEvent & addActorEvent(float, std::string const &, enum class CurrentCmdVersion, enum class MolangVersion);
    /**
     * @hash   1294576377
     * @symbol  ?addBoneAnimation\@ActorSkeletalAnimation\@\@QEAAAEAVBoneAnimation\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BoneAnimation & addBoneAnimation(std::string const &);
    /**
     * @hash   209912705
     * @symbol  ?addParticleEffectEvent\@ActorSkeletalAnimation\@\@QEAAAEAVActorParticleEffectEvent\@\@M\@Z
     */
    MCAPI class ActorParticleEffectEvent & addParticleEffectEvent(float);
    /**
     * @hash   -2011404559
     * @symbol  ?addSoundEffectEvent\@ActorSkeletalAnimation\@\@QEAAAEAVActorSoundEffectEvent\@\@M\@Z
     */
    MCAPI class ActorSoundEffectEvent & addSoundEffectEvent(float);
    /**
     * @hash   167660181
     * @symbol  ?calculateAnimationLength\@ActorSkeletalAnimation\@\@QEAAXXZ
     */
    MCAPI void calculateAnimationLength();
    /**
     * @hash   317409428
     * @symbol  ?getBoneAnimations\@ActorSkeletalAnimation\@\@QEAAAEAV?$vector\@VBoneAnimation\@\@V?$allocator\@VBoneAnimation\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class BoneAnimation> & getBoneAnimations();
    /**
     * @hash   752021173
     * @symbol  ?initPrecomputedInterpolation\@ActorSkeletalAnimation\@\@QEAAXXZ
     */
    MCAPI void initPrecomputedInterpolation();
    /**
     * @hash   -1439996525
     * @symbol  ?removeIrrelevantKeyFramesAndConvertAllFloatKeyFramesToSimplifiedVersion\@ActorSkeletalAnimation\@\@QEAAXXZ
     */
    MCAPI void removeIrrelevantKeyFramesAndConvertAllFloatKeyFramesToSimplifiedVersion();
    /**
     * @hash   -469026194
     * @symbol  ?setAnimTimeUpdate\@ActorSkeletalAnimation\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void setAnimTimeUpdate(class ExpressionNode const &);
    /**
     * @hash   -1572628588
     * @symbol  ?setAnimationLength\@ActorSkeletalAnimation\@\@QEAAXM\@Z
     */
    MCAPI void setAnimationLength(float);
    /**
     * @hash   -1346483852
     * @symbol  ?setBlendWeight\@ActorSkeletalAnimation\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void setBlendWeight(class ExpressionNode const &);
    /**
     * @hash   140488936
     * @symbol  ?setLoopDelay\@ActorSkeletalAnimation\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void setLoopDelay(class ExpressionNode const &);
    /**
     * @hash   154790162
     * @symbol  ?setLoopMode\@ActorSkeletalAnimation\@\@QEAAXW4AnimationLoopMode\@\@\@Z
     */
    MCAPI void setLoopMode(enum class AnimationLoopMode);
    /**
     * @hash   1768150306
     * @symbol  ?setShouldOverridePreviousAnimation\@ActorSkeletalAnimation\@\@QEAAX_N\@Z
     */
    MCAPI void setShouldOverridePreviousAnimation(bool);
    /**
     * @hash   -314975382
     * @symbol  ?setStartDelay\@ActorSkeletalAnimation\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void setStartDelay(class ExpressionNode const &);
    /**
     * @hash   1031108021
     * @symbol  ?sortEvents\@ActorSkeletalAnimation\@\@QEAAXXZ
     */
    MCAPI void sortEvents();
    /**
     * @hash   -1594375643
     * @symbol  ?sortParticleEffectEvents\@ActorSkeletalAnimation\@\@QEAAXXZ
     */
    MCAPI void sortParticleEffectEvents();
    /**
     * @hash   -1788590845
     * @symbol  ?sortSoundEffectEvents\@ActorSkeletalAnimation\@\@QEAAXXZ
     */
    MCAPI void sortSoundEffectEvents();
    /**
     * @hash   1830401312
     * @symbol  ??1ActorSkeletalAnimation\@\@QEAA\@XZ
     */
    MCAPI ~ActorSkeletalAnimation();

};