#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class Silverfish : public ::Monster {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 177
    virtual bool isDarkEnoughToSpawn() const /*override*/;

    // vIndex: 139
    virtual void spawnAnim() /*override*/;

    // vIndex: 171
    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    // vIndex: 147
    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    // vIndex: 8
    virtual ~Silverfish() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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
