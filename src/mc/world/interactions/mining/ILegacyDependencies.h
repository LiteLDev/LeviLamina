#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions::Mining {

class ILegacyDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILegacyDependencies() = default;

    virtual void hurtAndBreak(int) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Interactions::Mining
