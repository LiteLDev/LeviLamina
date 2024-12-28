#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/Boat.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class ChestBoat : public ::Boat {
public:
    // prevent constructor by default
    ChestBoat& operator=(ChestBoat const&);
    ChestBoat(ChestBoat const&);
    ChestBoat();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 124
    virtual void kill() /*override*/;

    // vIndex: 143
    virtual void destroy(::Actor* source) /*override*/;

    // vIndex: 30
    virtual ::std::string getEntityLocNameString() const /*override*/;

    // vIndex: 8
    virtual ~ChestBoat() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChestBoat(
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
    MCAPI void $kill();

    MCAPI void $destroy(::Actor* source);

    MCAPI ::std::string $getEntityLocNameString() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
