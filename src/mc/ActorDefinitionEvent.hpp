/**
 * @file  ActorDefinitionEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinitionEvent.
 *
 */
class ActorDefinitionEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONEVENT
public:
    ActorDefinitionEvent() = delete;
#endif

public:
    /**
     * @symbol  ??0ActorDefinitionEvent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ActorDefinitionEvent(class ActorDefinitionEvent &&);
    /**
     * @symbol  ??0ActorDefinitionEvent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ActorDefinitionEvent(class ActorDefinitionEvent const &);
    /**
     * @symbol  ?evaluateGroups\@ActorDefinitionEvent\@\@QEBAXAEAVActor\@\@AEAV?$vector\@UActorDefinitionModifier\@\@V?$allocator\@UActorDefinitionModifier\@\@\@std\@\@\@std\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI void evaluateGroups(class Actor &, std::vector<struct ActorDefinitionModifier> &, class VariantParameterList const &) const;
    /**
     * @symbol  ??4ActorDefinitionEvent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ActorDefinitionEvent & operator=(class ActorDefinitionEvent const &);
    /**
     * @symbol  ??1ActorDefinitionEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionEvent();

//private:
    /**
     * @symbol  ?_evaluateGroups\@ActorDefinitionEvent\@\@AEBAXAEAVActor\@\@AEAV?$vector\@UActorDefinitionModifier\@\@V?$allocator\@UActorDefinitionModifier\@\@\@std\@\@\@std\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI void _evaluateGroups(class Actor &, std::vector<struct ActorDefinitionModifier> &, class VariantParameterList const &) const;

private:

};