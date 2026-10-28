#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IConnectionContextEvents {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IConnectionContextEvents() = default;

    virtual void onStartLocalServer(::std::string const& worldName) = 0;
    // NOLINTEND
};
