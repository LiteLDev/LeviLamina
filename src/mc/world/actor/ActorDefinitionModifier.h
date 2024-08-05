#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionModifier {
public:
    // prevent constructor by default
    ActorDefinitionModifier();

public:
    // NOLINTBEGIN
    MCAPI ActorDefinitionModifier(struct ActorDefinitionModifier const&);

    MCAPI struct ActorDefinitionModifier& operator=(struct ActorDefinitionModifier&&);

    MCAPI struct ActorDefinitionModifier& operator=(struct ActorDefinitionModifier const&);

    MCAPI ~ActorDefinitionModifier();

    // NOLINTEND
};
