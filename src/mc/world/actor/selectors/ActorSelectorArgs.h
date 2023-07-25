#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorSelectorArgs {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSELECTORARGS
public:
    ActorSelectorArgs& operator=(ActorSelectorArgs const&) = delete;
    ActorSelectorArgs(ActorSelectorArgs const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ActorSelectorArgs\@\@QEAA\@XZ
     */
    MCAPI ActorSelectorArgs();
    /**
     * @symbol ??1ActorSelectorArgs\@\@QEAA\@XZ
     */
    MCAPI ~ActorSelectorArgs();
    /**
     * @symbol ?DEFAULT_LEVEL\@ActorSelectorArgs\@\@2U?$pair\@HH\@std\@\@B
     */
    MCAPI static struct std::pair<int, int> const DEFAULT_LEVEL;
};
