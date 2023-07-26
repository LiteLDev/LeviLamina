#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorComponentFactory {

public:
    // prevent constructor by default
    ActorComponentFactory& operator=(ActorComponentFactory const&) = delete;
    ActorComponentFactory(ActorComponentFactory const&)            = delete;
    ActorComponentFactory()                                        = delete;

    // private:
    /**
     * @symbol ?_initialize\@ActorComponentFactory\@\@AEAAXAEBVExperiments\@\@\@Z
     */
    MCAPI void _initialize(class Experiments const&); // NOLINT

private:
};
