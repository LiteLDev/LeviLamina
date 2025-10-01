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
    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    // vIndex: 178
    virtual bool isDarkEnoughToSpawn() const /*override*/;

    // vIndex: 139
    virtual void spawnAnim() /*override*/;

    // vIndex: 172
    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    // vIndex: 148
    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    // vIndex: 8
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
