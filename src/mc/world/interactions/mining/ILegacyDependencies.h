#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions::Mining {

class ILegacyDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILegacyDependencies() = default;

    // vIndex: 1
    virtual void hurtAndBreak(int) = 0;
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

} // namespace Interactions::Mining
