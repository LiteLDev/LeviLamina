#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlushableEnv : public ::leveldb::EnvWrapper {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlushableEnv() /*override*/;

    // vIndex: 22
    virtual void flushToPermanentStorage() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
