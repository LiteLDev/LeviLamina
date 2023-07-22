/**
 * @file  ActorAnimationEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorAnimationEvent.
 *
 */
class ActorAnimationEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONEVENT
public:
    class ActorAnimationEvent& operator=(class ActorAnimationEvent const &) = delete;
    ActorAnimationEvent(class ActorAnimationEvent const &) = delete;
    ActorAnimationEvent() = delete;
#endif

public:
    /**
     * @symbol  ??0ActorAnimationEvent\@\@QEAA\@MAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CurrentCmdVersion\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI ActorAnimationEvent(float, std::string const &, enum class CurrentCmdVersion, enum class MolangVersion);
    /**
     * @symbol  ??0ActorAnimationEvent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ActorAnimationEvent(class ActorAnimationEvent &&);
    /**
     * @symbol  ?fire\@ActorAnimationEvent\@\@QEBAXAEAVRenderParams\@\@PEAVActor\@\@\@Z
     */
    MCAPI void fire(class RenderParams &, class Actor *) const;
    /**
     * @symbol  ??1ActorAnimationEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorAnimationEvent();

};