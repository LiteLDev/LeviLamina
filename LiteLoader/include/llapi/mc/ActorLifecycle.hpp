/**
 * @file  ActorLifecycle.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ActorLifecycle {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?clearIsFirstTick\@ActorLifecycle\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void clearIsFirstTick(class EntityContext &);
    /**
     * @symbol ?initializeActor\@ActorLifecycle\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializeActor(class EntityContext &);
    /**
     * @symbol ?isFirstTick\@ActorLifecycle\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool isFirstTick(class EntityContext const &);

};