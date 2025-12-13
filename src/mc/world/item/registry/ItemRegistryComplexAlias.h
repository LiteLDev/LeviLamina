#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemRegistryComplexAlias {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk155811;
    ::ll::UntypedStorage<8, 24> mUnk62f67f;
    ::ll::UntypedStorage<1, 1>  mUnk38813f;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRegistryComplexAlias& operator=(ItemRegistryComplexAlias const&);
    ItemRegistryComplexAlias(ItemRegistryComplexAlias const&);
    ItemRegistryComplexAlias();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ItemRegistryComplexAlias();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
