/**
 * @file  ActorRefreshComponentsSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ActorRefreshComponentsSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORREFRESHCOMPONENTSSYSTEM
public:
    class ActorRefreshComponentsSystem& operator=(class ActorRefreshComponentsSystem const &) = delete;
    ActorRefreshComponentsSystem(class ActorRefreshComponentsSystem const &) = delete;
    ActorRefreshComponentsSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@ActorRefreshComponentsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};