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

    // vIndex: 148
    virtual bool checkSpawnRules(bool) /*override*/;

    // vIndex: 8
    virtual ~Creaking() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD float $getShadowRadius() const;

    MCFOLD bool $checkSpawnRules(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
