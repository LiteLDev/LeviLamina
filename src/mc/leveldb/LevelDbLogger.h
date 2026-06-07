#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbLogger : public ::leveldb::Logger {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void Logv(char const*, char*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Logv(char const*, char*);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
