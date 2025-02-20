#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
// clang-format on

class ItemGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnkbedaf1;
    ::ll::UntypedStorage<4, 4>   mUnk968ea9;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemGroup& operator=(ItemGroup const&);
    ItemGroup(ItemGroup const&);
    ItemGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemGroup(::ItemInstance const& itemInstance);

    MCAPI ~ItemGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemInstance const& itemInstance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
