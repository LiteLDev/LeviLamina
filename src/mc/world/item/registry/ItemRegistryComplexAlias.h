#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemRegistryComplexAlias {
public:
    // prevent constructor by default
    ItemRegistryComplexAlias& operator=(ItemRegistryComplexAlias const&);
    ItemRegistryComplexAlias(ItemRegistryComplexAlias const&);
    ItemRegistryComplexAlias();

public:
    // NOLINTBEGIN
    MCAPI ~ItemRegistryComplexAlias();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
