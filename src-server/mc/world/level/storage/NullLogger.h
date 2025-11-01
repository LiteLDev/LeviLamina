#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NullLogger : public ::leveldb::Logger {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void Logv(char const* format, char* ap) /*override*/;

    // vIndex: 0
    virtual ~NullLogger() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::NullLogger& instance();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Logv(char const* format, char* ap);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
