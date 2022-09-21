/**
 * @file  MC/ActorSkeletalAnimation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   865853481
     * @symbol ??0ActorSkeletalAnimation@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI ActorSkeletalAnimation(std::string const &, std::string const &);
    /**
     * @hash   1472055022
     * @symbol ?addActorEvent@ActorSkeletalAnimation@@QEAAAEAVActorAnimationEvent@@MAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CurrentCmdVersion@@W4MolangVersion@@@Z
     */
    MCAPI class ActorAnimationEvent & addActorEvent(float, std::string const &, enum CurrentCmdVersion, enum MolangVersion);
    /**
     * @hash   -1961250087
     * @symbol ?addBoneAnimation@ActorSkeletalAnimation@@QEAAAEAVBoneAnimation@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class BoneAnimation & addBoneAnimation(std::string const &);
    /**
     * @hash   1249053537
     * @symbol ?addParticleEffectEvent@ActorSkeletalAnimation@@QEAAAEAVActorParticleEffectEvent@@M@Z
     */
    MCAPI class ActorParticleEffectEvent & addParticleEffectEvent(float);
    /**
     * @hash   -972263727
     * @symbol ?addSoundEffectEvent@ActorSkeletalAnimation@@QEAAAEAVActorSoundEffectEvent@@M@Z
     */
    MCAPI class ActorSoundEffectEvent & addSoundEffectEvent(float);
    /**
     * @hash   1206785637
     * @symbol ?calculateAnimationLength@ActorSkeletalAnimation@@QEAAXXZ
     */
    MCAPI void calculateAnimationLength();
    /**
     * @hash   1356642516
     * @symbol ?getBoneAnimations@ActorSkeletalAnimation@@QEAAAEAV?$vector@VBoneAnimation@@V?$allocator@VBoneAnimation@@@std@@@std@@XZ
     */
    MCAPI std::vector<class BoneAnimation> & getBoneAnimations();
    /**
     * @hash   1791254261
     * @symbol ?initPrecomputedInterpolation@ActorSkeletalAnimation@@QEAAXXZ
     */
    MCAPI void initPrecomputedInterpolation();
    /**
     * @hash   -400809565
     * @symbol ?removeIrrelevantKeyFramesAndConvertAllFloatKeyFramesToSimplifiedVersion@ActorSkeletalAnimation@@QEAAXXZ
     */
    MCAPI void removeIrrelevantKeyFramesAndConvertAllFloatKeyFramesToSimplifiedVersion();
    /**
     * @hash   570145390
     * @symbol ?setAnimTimeUpdate@ActorSkeletalAnimation@@QEAAXAEBVExpressionNode@@@Z
     */
    MCAPI void setAnimTimeUpdate(class ExpressionNode const &);
    /**
     * @hash   -533457004
     * @symbol ?setAnimationLength@ActorSkeletalAnimation@@QEAAXM@Z
     */
    MCAPI void setAnimationLength(float);
    /**
     * @hash   -307312268
     * @symbol ?setBlendWeight@ActorSkeletalAnimation@@QEAAXAEBVExpressionNode@@@Z
     */
    MCAPI void setBlendWeight(class ExpressionNode const &);
    /**
     * @hash   1179706648
     * @symbol ?setLoopDelay@ActorSkeletalAnimation@@QEAAXAEBVExpressionNode@@@Z
     */
    MCAPI void setLoopDelay(class ExpressionNode const &);
    /**
     * @hash   1194007874
     * @symbol ?setLoopMode@ActorSkeletalAnimation@@QEAAXW4AnimationLoopMode@@@Z
     */
    MCAPI void setLoopMode(enum AnimationLoopMode);
    /**
     * @hash   500994178
     * @symbol ?setShouldOverridePreviousAnimation@ActorSkeletalAnimation@@QEAAX_N@Z
     */
    MCAPI void setShouldOverridePreviousAnimation(bool);
    /**
     * @hash   724257706
     * @symbol ?setStartDelay@ActorSkeletalAnimation@@QEAAXAEBVExpressionNode@@@Z
     */
    MCAPI void setStartDelay(class ExpressionNode const &);
    /**
     * @hash   2070341109
     * @symbol ?sortEvents@ActorSkeletalAnimation@@QEAAXXZ
     */
    MCAPI void sortEvents();
    /**
     * @hash   -555142555
     * @symbol ?sortParticleEffectEvents@ActorSkeletalAnimation@@QEAAXXZ
     */
    MCAPI void sortParticleEffectEvents();
    /**
     * @hash   -749357757
     * @symbol ?sortSoundEffectEvents@ActorSkeletalAnimation@@QEAAXXZ
     */
    MCAPI void sortSoundEffectEvents();
    /**
     * @hash   -1674643952
     * @symbol ??1ActorSkeletalAnimation@@QEAA@XZ
     */
    MCAPI ~ActorSkeletalAnimation();

};