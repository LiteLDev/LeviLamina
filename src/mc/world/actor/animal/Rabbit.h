#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Animal.h"

class Rabbit : public ::Animal {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    virtual ~Rabbit() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onSynchedDataUpdate(int dataId);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
