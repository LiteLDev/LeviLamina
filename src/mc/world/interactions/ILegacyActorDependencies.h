#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions {

class ILegacyActorDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILegacyActorDependencies() = default;

    virtual bool isRemoved() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Interactions
