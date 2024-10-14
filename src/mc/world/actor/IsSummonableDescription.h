#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IsSummonableDescription {
public:
    // prevent constructor by default
    IsSummonableDescription& operator=(IsSummonableDescription const&);
    IsSummonableDescription(IsSummonableDescription const&);
    IsSummonableDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IsSummonableDescription() = default;

    // vIndex: 1
    virtual char const* getJsonName() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
