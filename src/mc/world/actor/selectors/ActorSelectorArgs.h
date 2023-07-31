#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorSelectorArgs {

public:
    // prevent constructor by default
    ActorSelectorArgs& operator=(ActorSelectorArgs const&) = delete;
    ActorSelectorArgs(ActorSelectorArgs const&)            = delete;

public:
    // NOLINTBEGIN
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
    MCAPI static std::pair<int, int> const DEFAULT_LEVEL;
    // NOLINTEND
};
