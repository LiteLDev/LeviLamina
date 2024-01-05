#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionTrigger {
public:
    // prevent constructor by default
    ActorDefinitionTrigger(ActorDefinitionTrigger const&);
    ActorDefinitionTrigger();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorDefinitionTrigger@@QEAA@$$QEAV0@@Z
    MCAPI ActorDefinitionTrigger(class ActorDefinitionTrigger&&);

    // symbol: ?canTrigger@ActorDefinitionTrigger@@QEBA_NAEBVActor@@AEBVVariantParameterList@@@Z
    MCAPI bool canTrigger(class Actor const& entity, class VariantParameterList const& list) const;

    // symbol: ??4ActorDefinitionTrigger@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ActorDefinitionTrigger& operator=(class ActorDefinitionTrigger&&);

    // symbol: ??4ActorDefinitionTrigger@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ActorDefinitionTrigger& operator=(class ActorDefinitionTrigger const&);

    // symbol: ??1ActorDefinitionTrigger@@QEAA@XZ
    MCAPI ~ActorDefinitionTrigger();

    // NOLINTEND
};
