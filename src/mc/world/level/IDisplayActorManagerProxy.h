#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IDisplayActorManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDisplayActorManagerProxy() = default;

    // vIndex: 1
    virtual void initializeActor(::Actor&) const = 0;

    // vIndex: 2
    virtual void unregisterDisplayEntityFromDimension(::Actor const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
