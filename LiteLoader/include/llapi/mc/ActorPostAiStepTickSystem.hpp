/**
 * @file  ActorPostAiStepTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ActorPostAiStepTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPOSTAISTEPTICKSYSTEM
public:
    class ActorPostAiStepTickSystem& operator=(class ActorPostAiStepTickSystem const &) = delete;
    ActorPostAiStepTickSystem(class ActorPostAiStepTickSystem const &) = delete;
    ActorPostAiStepTickSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@ActorPostAiStepTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
