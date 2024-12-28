#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

class UseActorDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    UseActorDefinition& operator=(UseActorDefinition const&);
    UseActorDefinition(UseActorDefinition const&);
    UseActorDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UseActorDefinition() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
