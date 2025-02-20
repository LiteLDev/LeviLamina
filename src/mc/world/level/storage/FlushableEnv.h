#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlushableEnv : public ::leveldb::EnvWrapper {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlushableEnv() /*override*/;

    // vIndex: 20
    virtual void flushToPermanentStorage() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
