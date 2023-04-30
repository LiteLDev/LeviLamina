/**
 * @file  ActorAnimationControllerState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol ?addVariable\@ActorAnimationControllerState\@\@QEAAAEAVStateAnimationVariable\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StateAnimationVariable & addVariable(std::string const &);
    /**
     * @symbol ?setBlendTransitionTime\@ActorAnimationControllerState\@\@QEAAXM\@Z
     */
    MCAPI void setBlendTransitionTime(float);
    /**
     * @symbol ?setVariables\@ActorAnimationControllerState\@\@QEBAXAEAVRenderParams\@\@\@Z
     */
    MCAPI void setVariables(class RenderParams &) const;

};
