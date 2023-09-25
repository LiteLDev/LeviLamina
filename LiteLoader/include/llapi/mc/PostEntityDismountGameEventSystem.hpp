/**
 * @file  PostEntityDismountGameEventSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PostEntityDismountGameEventSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSTENTITYDISMOUNTGAMEEVENTSYSTEM
public:
    class PostEntityDismountGameEventSystem& operator=(class PostEntityDismountGameEventSystem const &) = delete;
    PostEntityDismountGameEventSystem(class PostEntityDismountGameEventSystem const &) = delete;
    PostEntityDismountGameEventSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@PostEntityDismountGameEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
