#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/HumanoidMonster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class ActorInteraction;
class EntityContext;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class Piglin : public ::HumanoidMonster {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 120
    virtual bool getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location) /*override*/;

    // vIndex: 182
    virtual bool isDarkEnoughToSpawn() const /*override*/;

    // vIndex: 8
    virtual ~Piglin() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Piglin(
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

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location);

    MCFOLD bool $isDarkEnoughToSpawn() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
