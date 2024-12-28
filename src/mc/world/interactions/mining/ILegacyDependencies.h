#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions::Mining {

class ILegacyDependencies {
public:
    // prevent constructor by default
    ILegacyDependencies& operator=(ILegacyDependencies const&);
    ILegacyDependencies(ILegacyDependencies const&);
    ILegacyDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILegacyDependencies();

    // vIndex: 1
    virtual void hurtAndBreak(int) = 0;
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

} // namespace Interactions::Mining
