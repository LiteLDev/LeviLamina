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
    // vIndex: 0
    virtual ~IAddDisplayActorEntityProxy() = default;

    // vIndex: 1
    virtual void initializeActor(::Actor&) const = 0;

    // vIndex: 2
    virtual void registerDisplayEntityToDimension(::Actor const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
