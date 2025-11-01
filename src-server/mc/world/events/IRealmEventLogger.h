#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IRealmEventLogger {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRealmEventLogger() = default;

    // vIndex: 1
    virtual void logEvent(::std::string const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
