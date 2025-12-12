#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Monster.h"

class Creaking : public ::Monster {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual float getShadowRadius() const /*override*/;

    virtual bool checkSpawnRules(bool) /*override*/;

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
