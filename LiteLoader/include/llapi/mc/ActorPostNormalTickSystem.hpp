/**
 * @file  ActorPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ActorPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPOSTNORMALTICKSYSTEM
public:
    class ActorPostNormalTickSystem& operator=(class ActorPostNormalTickSystem const &) = delete;
    ActorPostNormalTickSystem(class ActorPostNormalTickSystem const &) = delete;
    ActorPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystemClient\@ActorPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystemClient();
    /**
     * @symbol ?createSystemServer\@ActorPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystemServer();

};
