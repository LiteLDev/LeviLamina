/**
 * @file  ActorDefinitionPtr.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinitionPtr.
 *
 */
class ActorDefinitionPtr {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONPTR
public:
    class ActorDefinitionPtr& operator=(class ActorDefinitionPtr const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ActorDefinitionPtr\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ActorDefinitionPtr(class ActorDefinitionPtr const &);
    /**
     * @symbol  ??0ActorDefinitionPtr\@\@QEAA\@AEAVActorDefinitionGroup\@\@AEAVActorDefinition\@\@\@Z
     */
    MCAPI ActorDefinitionPtr(class ActorDefinitionGroup &, class ActorDefinition &);
    /**
     * @symbol  ??0ActorDefinitionPtr\@\@QEAA\@XZ
     */
    MCAPI ActorDefinitionPtr();
    /**
     * @symbol  ??4ActorDefinitionPtr\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ActorDefinitionPtr & operator=(class ActorDefinitionPtr &&);
    /**
     * @symbol  ??1ActorDefinitionPtr\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionPtr();
    /**
     * @symbol  ?NONE\@ActorDefinitionPtr\@\@2V1\@B
     */
    MCAPI static class ActorDefinitionPtr const NONE;

};