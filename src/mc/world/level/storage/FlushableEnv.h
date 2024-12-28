#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlushableEnv : public ::leveldb::EnvWrapper {
public:
    // prevent constructor by default
    FlushableEnv& operator=(FlushableEnv const&);
    FlushableEnv(FlushableEnv const&);
    FlushableEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlushableEnv() /*override*/;

    // vIndex: 20
    virtual void flushToPermanentStorage() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FlushableEnv(::leveldb::Env* env);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::leveldb::Env* env);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
