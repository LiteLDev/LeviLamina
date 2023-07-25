#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionPtr {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONPTR
public:
    ActorDefinitionPtr& operator=(ActorDefinitionPtr const&) = delete;
    ActorDefinitionPtr(ActorDefinitionPtr const&)            = delete;
    ActorDefinitionPtr()                                     = delete;
#endif

public:
    /**
     * @symbol ??1ActorDefinitionPtr\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionPtr();
    /**
     * @symbol ?NONE\@ActorDefinitionPtr\@\@2V1\@B
     */
    MCAPI static class ActorDefinitionPtr const NONE;
};
