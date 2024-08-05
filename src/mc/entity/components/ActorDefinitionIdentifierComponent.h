#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionIdentifierComponent {
public:
    // prevent constructor by default
    ActorDefinitionIdentifierComponent& operator=(ActorDefinitionIdentifierComponent const&);
    ActorDefinitionIdentifierComponent(ActorDefinitionIdentifierComponent const&);
    ActorDefinitionIdentifierComponent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionIdentifierComponent();

    // NOLINTEND
};
