#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class MushroomCow : public ::Animal {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    virtual ~MushroomCow() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $checkSpawnRules(bool fromSpawner);

    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
