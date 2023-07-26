#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationEvent {

public:
    // prevent constructor by default
    ActorAnimationEvent& operator=(ActorAnimationEvent const&) = delete;
    ActorAnimationEvent(ActorAnimationEvent const&)            = delete;
    ActorAnimationEvent()                                      = delete;

public:
    /**
     * @symbol ??0ActorAnimationEvent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ActorAnimationEvent(class ActorAnimationEvent&&); // NOLINT
    /**
     * @symbol
     * ??0ActorAnimationEvent\@\@QEAA\@MAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CurrentCmdVersion\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI
    ActorAnimationEvent(float, std::string const&, enum class CurrentCmdVersion, enum class MolangVersion); // NOLINT
    /**
     * @symbol ?fire\@ActorAnimationEvent\@\@QEBAXAEAVRenderParams\@\@PEAVActor\@\@\@Z
     */
    MCAPI void fire(class RenderParams&, class Actor*) const; // NOLINT
    /**
     * @symbol ??1ActorAnimationEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorAnimationEvent(); // NOLINT
};
