#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionPtr {

public:
    // prevent constructor by default
    ActorDefinitionPtr& operator=(ActorDefinitionPtr const&) = delete;
    ActorDefinitionPtr(ActorDefinitionPtr const&)            = delete;
    ActorDefinitionPtr()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ActorDefinitionPtr\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionPtr();
    /**
     * @symbol ?NONE\@ActorDefinitionPtr\@\@2V1\@B
     */
    MCAPI static class ActorDefinitionPtr const NONE;
    // NOLINTEND
};
