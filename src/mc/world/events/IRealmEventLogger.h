#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IRealmEventLogger {
public:
    // prevent constructor by default
    IRealmEventLogger& operator=(IRealmEventLogger const&);
    IRealmEventLogger(IRealmEventLogger const&);
    IRealmEventLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRealmEventLogger();

    // vIndex: 1
    virtual void logEvent(::std::string const&) = 0;
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
};
