#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionAttribute {
public:
    // prevent constructor by default
    ActorDefinitionAttribute& operator=(ActorDefinitionAttribute const&);
    ActorDefinitionAttribute(ActorDefinitionAttribute const&);
    ActorDefinitionAttribute();

public:
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionAttribute();

    // NOLINTEND
};
