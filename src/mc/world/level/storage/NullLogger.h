#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NullLogger : public ::leveldb::Logger {
public:
    // prevent constructor by default
    NullLogger& operator=(NullLogger const&);
    NullLogger(NullLogger const&);
    NullLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void Logv(char const* format, char* ap) /*override*/;

    // vIndex: 0
    virtual ~NullLogger() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::NullLogger& instance();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $Logv(char const* format, char* ap);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
