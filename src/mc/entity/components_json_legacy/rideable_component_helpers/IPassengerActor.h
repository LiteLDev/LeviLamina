#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
// clang-format on

namespace RideableComponentHelpers {

class IPassengerActor {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPassengerActor() = default;

    // vIndex: 1
    virtual bool canBePulledIntoVehicle() const = 0;

    // vIndex: 2
    virtual bool isRiding() const = 0;

    // vIndex: 3
    virtual bool isLeashed() const = 0;

    // vIndex: 4
    virtual bool isUnderLeashHardDistance() const = 0;

    // vIndex: 5
    virtual ::AABB const& getAABB() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RideableComponentHelpers
