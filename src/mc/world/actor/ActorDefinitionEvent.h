#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionEvent {

public:
    // prevent constructor by default
    ActorDefinitionEvent() = delete;

public:
    /**
     * @symbol ??0ActorDefinitionEvent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ActorDefinitionEvent(class ActorDefinitionEvent&&); // NOLINT
    /**
     * @symbol ??0ActorDefinitionEvent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ActorDefinitionEvent(class ActorDefinitionEvent const&); // NOLINT
    /**
     * @symbol
     * ?evaluateGroups\@ActorDefinitionEvent\@\@QEBAXAEAVActor\@\@AEAV?$vector\@UActorDefinitionModifier\@\@V?$allocator\@UActorDefinitionModifier\@\@\@std\@\@\@std\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI void
    evaluateGroups(class Actor&, std::vector<struct ActorDefinitionModifier>&, class VariantParameterList const&)
        const; // NOLINT
    /**
     * @symbol ??4ActorDefinitionEvent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ActorDefinitionEvent& operator=(class ActorDefinitionEvent const&); // NOLINT
    /**
     * @symbol ??1ActorDefinitionEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionEvent(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_evaluateGroups\@ActorDefinitionEvent\@\@AEBAXAEAVActor\@\@AEAV?$vector\@UActorDefinitionModifier\@\@V?$allocator\@UActorDefinitionModifier\@\@\@std\@\@\@std\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI void
    _evaluateGroups(class Actor&, std::vector<struct ActorDefinitionModifier>&, class VariantParameterList const&)
        const; // NOLINT

private:
};
