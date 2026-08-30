#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions {

class ILegacyActorDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILegacyActorDependencies();

    virtual bool isRemoved() = 0;
    // NOLINTEND
};

} // namespace Interactions
