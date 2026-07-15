#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Monster.h"

class Creaking : public ::Monster {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual float getShadowRadius() const /*override*/;

    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getShadowRadius() const;

    MCFOLD bool $checkSpawnRules(bool fromSpawner);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
