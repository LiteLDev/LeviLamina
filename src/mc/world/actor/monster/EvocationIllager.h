#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/HumanoidMonster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
class Mob;
struct ActorDefinitionIdentifier;
// clang-format on

class EvocationIllager : public ::HumanoidMonster {
public:
    // prevent constructor by default
    EvocationIllager& operator=(EvocationIllager const&);
    EvocationIllager(EvocationIllager const&);
    EvocationIllager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 158
    virtual bool isAlliedTo(::Mob* other) /*override*/;

    // vIndex: 160
    virtual int getArmorValue() const /*override*/;

    // vIndex: 8
    virtual ~EvocationIllager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EvocationIllager(
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
    MCAPI bool $isAlliedTo(::Mob* other);

    MCAPI int $getArmorValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
