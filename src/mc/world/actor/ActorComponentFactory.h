#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorComponentFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORCOMPONENTFACTORY
public:
    ActorComponentFactory& operator=(ActorComponentFactory const&) = delete;
    ActorComponentFactory(ActorComponentFactory const&)            = delete;
    ActorComponentFactory()                                        = delete;
#endif

public:
    // private:
    /**
     * @symbol ?_initialize\@ActorComponentFactory\@\@AEAAXAEBVExperiments\@\@\@Z
     */
    MCAPI void _initialize(class Experiments const&);

private:
};
