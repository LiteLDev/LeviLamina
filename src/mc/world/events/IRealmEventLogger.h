#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IRealmEventLogger {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRealmEventLogger() = default;

    virtual void logEvent(::std::string const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
