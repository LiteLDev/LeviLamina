#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Monster.h"

class Creaking : public ::Monster {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 147
    virtual bool checkSpawnRules(bool) /*override*/;

    // vIndex: 8
    virtual ~Creaking() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getShadowRadius() const;

    MCFOLD bool $checkSpawnRules(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
