#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionEvent {
public:
    // prevent constructor by default
    ActorDefinitionEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorDefinitionEvent@@QEAA@$$QEAV0@@Z
    MCAPI ActorDefinitionEvent(class ActorDefinitionEvent&&);

    // symbol: ??0ActorDefinitionEvent@@QEAA@AEBV0@@Z
    MCAPI ActorDefinitionEvent(class ActorDefinitionEvent const&);

    // symbol: ??4ActorDefinitionEvent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ActorDefinitionEvent& operator=(class ActorDefinitionEvent const&);

    // symbol: ??1ActorDefinitionEvent@@QEAA@XZ
    MCAPI ~ActorDefinitionEvent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_evaluateGroups@ActorDefinitionEvent@@AEBAXAEAVActor@@AEAV?$vector@UActorDefinitionModifier@@V?$allocator@UActorDefinitionModifier@@@std@@@std@@AEBVVariantParameterList@@@Z
    MCAPI void _evaluateGroups(
        class Actor&                                 entity,
        std::vector<struct ActorDefinitionModifier>& modifications,
        class VariantParameterList const&            list
    ) const;

    // NOLINTEND
};
