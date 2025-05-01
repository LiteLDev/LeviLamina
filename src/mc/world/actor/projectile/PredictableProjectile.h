#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"

class PredictableProjectile : public ::Actor {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void _doInitialMove() /*override*/;

    // vIndex: 8
    virtual ~PredictableProjectile() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_doInitialMove();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
