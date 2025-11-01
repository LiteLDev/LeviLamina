#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IMovementStop {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IMovementStop() = default;

    // vIndex: 1
    virtual bool isRiding() const = 0;

    // vIndex: 2
    virtual bool isGliding() const = 0;

    // vIndex: 3
    virtual bool hasPassenger() const = 0;

    // vIndex: 4
    virtual void stopRiding() = 0;

    // vIndex: 5
    virtual void stopGliding() = 0;

    // vIndex: 6
    virtual void removeAllPassengers() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
