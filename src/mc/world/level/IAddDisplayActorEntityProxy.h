#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IAddDisplayActorEntityProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAddDisplayActorEntityProxy() = default;

    virtual void initializeActor(::Actor&) const = 0;

    virtual void registerDisplayEntityToDimension(::Actor const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
