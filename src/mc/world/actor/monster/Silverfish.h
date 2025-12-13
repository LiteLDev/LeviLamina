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
    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    virtual bool isDarkEnoughToSpawn() const /*override*/;

    virtual void spawnAnim() /*override*/;

    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    virtual ~Silverfish() /*override*/ = default;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
