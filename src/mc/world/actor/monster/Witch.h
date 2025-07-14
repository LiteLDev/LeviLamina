#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/monster/HumanoidMonster.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class EntityContext;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class Witch : public ::HumanoidMonster {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb0db77;
    // NOLINTEND

public:
    // prevent constructor by default
    Witch& operator=(Witch const&);
    Witch(Witch const&);
    Witch();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 12
    virtual ::Vec3 getFiringPos() const /*override*/;

    // vIndex: 166
    virtual float getDamageAfterEnchantReduction(::ActorDamageSource const& source, float damage) const /*override*/;

    // vIndex: 8
    virtual ~Witch() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Witch(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCAPI ::Vec3 $getFiringPos() const;

    MCAPI float $getDamageAfterEnchantReduction(::ActorDamageSource const& source, float damage) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
