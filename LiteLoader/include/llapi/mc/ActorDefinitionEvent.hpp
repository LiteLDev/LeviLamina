/**
 * @file  ActorDefinitionEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   929566637
     * @symbol ??0ActorDefinitionEvent@@QEAA@$$QEAV0@@Z
     */
    MCAPI ActorDefinitionEvent(class ActorDefinitionEvent &&);
    /**
     * @hash   380553489
     * @symbol ??0ActorDefinitionEvent@@QEAA@AEBV0@@Z
     */
    MCAPI ActorDefinitionEvent(class ActorDefinitionEvent const &);
    /**
     * @hash   -1011652106
     * @symbol ?evaluateGroups@ActorDefinitionEvent@@QEBAXAEAVActor@@AEAV?$vector@UActorDefinitionModifier@@V?$allocator@UActorDefinitionModifier@@@std@@@std@@AEBVVariantParameterList@@@Z
     */
    MCAPI void evaluateGroups(class Actor &, std::vector<struct ActorDefinitionModifier> &, class VariantParameterList const &) const;
    /**
     * @hash   1451493460
     * @symbol ??4ActorDefinitionEvent@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ActorDefinitionEvent & operator=(class ActorDefinitionEvent const &);
    /**
     * @hash   536590396
     * @symbol ??1ActorDefinitionEvent@@QEAA@XZ
     */
    MCAPI ~ActorDefinitionEvent();

//private:
    /**
     * @hash   -1883912915
     * @symbol ?_evaluateGroups@ActorDefinitionEvent@@AEBAXAEAVActor@@AEAV?$vector@UActorDefinitionModifier@@V?$allocator@UActorDefinitionModifier@@@std@@@std@@AEBVVariantParameterList@@@Z
     */
    MCAPI void _evaluateGroups(class Actor &, std::vector<struct ActorDefinitionModifier> &, class VariantParameterList const &) const;

private:

};