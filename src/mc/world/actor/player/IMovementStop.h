#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IMovementStop {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMovementStop() = default;

    virtual bool isRiding() const = 0;

    virtual bool isGliding() const = 0;

    virtual bool hasPassenger() const = 0;

    virtual void stopRiding() = 0;

    virtual void stopGliding() = 0;

    virtual void removeAllPassengers() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
