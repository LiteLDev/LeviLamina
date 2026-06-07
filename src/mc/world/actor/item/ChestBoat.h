#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/Boat.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionGroup;
class EntityContext;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class ChestBoat : public ::Boat {
public:
    // prevent constructor by default
    ChestBoat();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void kill() /*override*/;

    virtual void destroy(::Actor* sourceActor) /*override*/;

    virtual ::std::string getEntityLocNameString() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChestBoat(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _dropChestContents(::Vec3 const& pos);
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
    MCAPI void $kill();

    MCAPI void $destroy(::Actor* sourceActor);

    MCAPI ::std::string $getEntityLocNameString() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
