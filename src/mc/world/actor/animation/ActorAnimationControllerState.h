#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationControllerState {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONCONTROLLERSTATE
public:
    ActorAnimationControllerState& operator=(ActorAnimationControllerState const&) = delete;
    ActorAnimationControllerState(ActorAnimationControllerState const&)            = delete;
    ActorAnimationControllerState()                                                = delete;
#endif

public:
    /**
     * @symbol
     * ?addVariable\@ActorAnimationControllerState\@\@QEAAAEAVStateAnimationVariable\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StateAnimationVariable& addVariable(std::string const&);
    /**
     * @symbol ?setBlendTransitionTime\@ActorAnimationControllerState\@\@QEAAXM\@Z
     */
    MCAPI void setBlendTransitionTime(float);
    /**
     * @symbol ?setVariables\@ActorAnimationControllerState\@\@QEBAXAEAVRenderParams\@\@\@Z
     */
    MCAPI void setVariables(class RenderParams&) const;
};
