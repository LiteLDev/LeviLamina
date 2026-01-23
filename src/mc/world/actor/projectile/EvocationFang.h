#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct ActorUniqueID;
// clang-format on

class EvocationFang : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mClientSideAttackStarted;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void normalTick() /*override*/;

    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual ~EvocationFang() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _dealDamageTo(::Mob& entity);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $normalTick();

    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;

    MCAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCFOLD float $getShadowRadius() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
