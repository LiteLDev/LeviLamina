#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace RideableComponentHelpers {

class IActorWrapper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IActorWrapper() = default;

    virtual ::Actor& getWrappedObject() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RideableComponentHelpers
