/**
 * @file  ActorAnimationControllerState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorAnimationControllerState.
 *
 */
class ActorAnimationControllerState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONCONTROLLERSTATE
public:
    class ActorAnimationControllerState& operator=(class ActorAnimationControllerState const &) = delete;
    ActorAnimationControllerState(class ActorAnimationControllerState const &) = delete;
    ActorAnimationControllerState() = delete;
#endif

public:
    /**
     * @hash   -1659870936
     * @symbol ?addAnimation@ActorAnimationControllerState@@QEAAXAEBVHashedString@@@Z
     */
    MCAPI void addAnimation(class HashedString const &);
    /**
     * @hash   -1616829587
     * @symbol ?addAnimation@ActorAnimationControllerState@@QEAAXAEBVHashedString@@AEBVExpressionNode@@@Z
     */
    MCAPI void addAnimation(class HashedString const &, class ExpressionNode const &);
    /**
     * @hash   -386641807
     * @symbol ?addBlendTransitionKeyFrame@ActorAnimationControllerState@@QEAAXMM@Z
     */
    MCAPI void addBlendTransitionKeyFrame(float, float);
    /**
     * @hash   1022437450
     * @symbol ?addEntryActorEvent@ActorAnimationControllerState@@QEAAAEAVActorAnimationEvent@@MAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CurrentCmdVersion@@W4MolangVersion@@@Z
     */
    MCAPI class ActorAnimationEvent & addEntryActorEvent(float, std::string const &, enum CurrentCmdVersion, enum MolangVersion);
    /**
     * @hash   1020487976
     * @symbol ?addExitActorEvent@ActorAnimationControllerState@@QEAAAEAVActorAnimationEvent@@MAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CurrentCmdVersion@@W4MolangVersion@@@Z
     */
    MCAPI class ActorAnimationEvent & addExitActorEvent(float, std::string const &, enum CurrentCmdVersion, enum MolangVersion);
    /**
     * @hash   1950573840
     * @symbol ?addParticleEffect@ActorAnimationControllerState@@QEAAAEAVActorParticleEffect@@XZ
     */
    MCAPI class ActorParticleEffect & addParticleEffect();
    /**
     * @hash   -1684797060
     * @symbol ?addSoundEffect@ActorAnimationControllerState@@QEAAAEAVActorSoundEffect@@XZ
     */
    MCAPI class ActorSoundEffect & addSoundEffect();
    /**
     * @hash   1407261696
     * @symbol ?addTransition@ActorAnimationControllerState@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4MolangVersion@@_N@Z
     */
    MCAPI void addTransition(std::string const &, std::string const &, enum MolangVersion, bool);
    /**
     * @hash   -1362697169
     * @symbol ?addVariable@ActorAnimationControllerState@@QEAAAEAVStateAnimationVariable@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class StateAnimationVariable & addVariable(std::string const &);
    /**
     * @hash   519544116
     * @symbol ?setBlendTransitionTime@ActorAnimationControllerState@@QEAAXM@Z
     */
    MCAPI void setBlendTransitionTime(float);

};