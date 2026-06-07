#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockPos;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class Silverfish : public ::Monster {
public:
    // prevent constructor by default
    Silverfish();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    virtual bool isDarkEnoughToSpawn() const /*override*/;

    virtual void spawnAnim() /*override*/;

    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Silverfish(
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
    MCAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCFOLD bool $isDarkEnoughToSpawn() const;

    MCAPI void $spawnAnim();

    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);

    MCAPI bool $checkSpawnRules(bool fromSpawner);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
