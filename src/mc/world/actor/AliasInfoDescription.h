#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AliasInfoDescription {
public:
    // prevent constructor by default
    AliasInfoDescription();

public:
    // NOLINTBEGIN
    MCAPI AliasInfoDescription(struct AliasInfoDescription const&);

    MCAPI struct AliasInfoDescription& operator=(struct AliasInfoDescription const&);

    MCAPI ~AliasInfoDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct AliasInfoDescription const&);

    MCAPI void dtor$();

    // NOLINTEND
};
