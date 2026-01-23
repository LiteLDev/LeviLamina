#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IEventTime {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEventTime() = default;

    virtual double getSecondsSinceLaunch_DEPRECATED() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
