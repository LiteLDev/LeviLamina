#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

class ConsumeItemDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    ConsumeItemDefinition& operator=(ConsumeItemDefinition const&);
    ConsumeItemDefinition(ConsumeItemDefinition const&);
    ConsumeItemDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConsumeItemDefinition() /*override*/;
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
