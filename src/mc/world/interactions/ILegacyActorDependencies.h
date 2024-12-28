#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions {

class ILegacyActorDependencies {
public:
    // prevent constructor by default
    ILegacyActorDependencies& operator=(ILegacyActorDependencies const&);
    ILegacyActorDependencies(ILegacyActorDependencies const&);
    ILegacyActorDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILegacyActorDependencies();

    // vIndex: 1
    virtual bool isRemoved() = 0;
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

} // namespace Interactions
