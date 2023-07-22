/**
 * @file  ActorDefinitionTrigger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinitionTrigger.
 *
 */
class ActorDefinitionTrigger {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONTRIGGER
public:
    ActorDefinitionTrigger() = delete;
#endif

public:
    /**
     * @symbol  ??0ActorDefinitionTrigger\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ActorDefinitionTrigger(class ActorDefinitionTrigger &&);
    /**
     * @symbol  ??0ActorDefinitionTrigger\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ActorDefinitionTrigger(class ActorDefinitionTrigger const &);
    /**
     * @symbol  ?canTrigger\@ActorDefinitionTrigger\@\@QEBA_NAEBVActor\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI bool canTrigger(class Actor const &, class VariantParameterList const &) const;
    /**
     * @symbol  ??4ActorDefinitionTrigger\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ActorDefinitionTrigger & operator=(class ActorDefinitionTrigger const &);
    /**
     * @symbol  ??4ActorDefinitionTrigger\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ActorDefinitionTrigger & operator=(class ActorDefinitionTrigger &&);
    /**
     * @symbol  ??1ActorDefinitionTrigger\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionTrigger();

};