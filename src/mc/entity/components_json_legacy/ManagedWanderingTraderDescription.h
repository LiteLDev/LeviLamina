#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class ManagedWanderingTraderDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    ManagedWanderingTraderDescription& operator=(ManagedWanderingTraderDescription const&);
    ManagedWanderingTraderDescription(ManagedWanderingTraderDescription const&);
    ManagedWanderingTraderDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~ManagedWanderingTraderDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
