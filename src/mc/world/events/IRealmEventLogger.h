#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IRealmEventLogger {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRealmEventLogger();

    virtual void logEvent(::std::string const& message) = 0;
    // NOLINTEND
};
