#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/animal/Animal.h"

class Sheep : public ::Animal {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    virtual ~Sheep() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
