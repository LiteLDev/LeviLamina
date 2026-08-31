#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/FlushableEnv.h"

class FlushableStorageAreaEnv : public ::FlushableEnv {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk35823d;
    // NOLINTEND

public:
    // prevent constructor by default
    FlushableStorageAreaEnv& operator=(FlushableStorageAreaEnv const&);
    FlushableStorageAreaEnv(FlushableStorageAreaEnv const&);
    FlushableStorageAreaEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlushableStorageAreaEnv() /*override*/;

    virtual void flushToPermanentStorage() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $flushToPermanentStorage();


    // NOLINTEND
};
