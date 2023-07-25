#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONEVENT
public:
    ActorAnimationEvent& operator=(ActorAnimationEvent const&) = delete;
    ActorAnimationEvent(ActorAnimationEvent const&)            = delete;
    ActorAnimationEvent()                                      = delete;
#endif

public:
    /**
     * @symbol ??0ActorAnimationEvent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ActorAnimationEvent(class ActorAnimationEvent&&);
    /**
     * @symbol
     * ??0ActorAnimationEvent\@\@QEAA\@MAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CurrentCmdVersion\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI ActorAnimationEvent(float, std::string const&, enum class CurrentCmdVersion, enum class MolangVersion);
    /**
     * @symbol ?fire\@ActorAnimationEvent\@\@QEBAXAEAVRenderParams\@\@PEAVActor\@\@\@Z
     */
    MCAPI void fire(class RenderParams&, class Actor*) const;
    /**
     * @symbol ??1ActorAnimationEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorAnimationEvent();
};
