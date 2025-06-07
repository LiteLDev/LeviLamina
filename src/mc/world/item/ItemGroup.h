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
    ::ll::UntypedStorage<4, 8>   mUnk6986f0;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemGroup& operator=(ItemGroup const&);
    ItemGroup(ItemGroup const&);
    ItemGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ItemGroup(::ItemInstance const& itemInstance);

    MCNAPI ~ItemGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemInstance const& itemInstance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
