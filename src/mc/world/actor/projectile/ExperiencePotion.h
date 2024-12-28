#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/projectile/Throwable.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class ExperiencePotion : public ::Throwable {
public:
    // prevent constructor by default
    ExperiencePotion& operator=(ExperiencePotion const&);
    ExperiencePotion(ExperiencePotion const&);
    ExperiencePotion();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 145
    virtual float getGravity() /*override*/;

    // vIndex: 143
    virtual float getThrowPower() /*override*/;

    // vIndex: 144
    virtual float getThrowUpAngleOffset() /*override*/;

    // vIndex: 8
    virtual ~ExperiencePotion() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExperiencePotion(
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getGravity();

    MCAPI float $getThrowPower();

    MCAPI float $getThrowUpAngleOffset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
