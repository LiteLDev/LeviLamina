#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace RideableComponentHelpers {

class IActorWrapper {
public:
    // prevent constructor by default
    IActorWrapper& operator=(IActorWrapper const&);
    IActorWrapper(IActorWrapper const&);
    IActorWrapper();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IActorWrapper();

    // vIndex: 1
    virtual ::Actor& getWrappedObject() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RideableComponentHelpers
