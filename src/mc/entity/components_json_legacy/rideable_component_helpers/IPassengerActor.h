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
    virtual ~IPassengerActor() = default;

    virtual bool canBePulledIntoVehicle() const = 0;

    virtual bool isRiding() const = 0;

    virtual bool isLeashed() const = 0;

    virtual bool isUnderLeashHardDistance() const = 0;

    virtual ::AABB const& getAABB() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RideableComponentHelpers
