#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class ILocalPlayerEntityGetter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILocalPlayerEntityGetter() = default;

    virtual ::EntityContext* getLocalPlayerEntityContext() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
