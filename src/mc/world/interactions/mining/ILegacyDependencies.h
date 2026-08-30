#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions::Mining {

class ILegacyDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILegacyDependencies();

    virtual void hurtAndBreak(int damage) = 0;
    // NOLINTEND
};

} // namespace Interactions::Mining
