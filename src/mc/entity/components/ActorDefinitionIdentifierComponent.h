#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionIdentifierComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnk5cd7ba;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionIdentifierComponent& operator=(ActorDefinitionIdentifierComponent const&);
    ActorDefinitionIdentifierComponent(ActorDefinitionIdentifierComponent const&);
    ActorDefinitionIdentifierComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionIdentifierComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
