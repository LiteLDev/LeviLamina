#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

struct ExpectedAnywhereConsume {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnkefab32;
    ::ll::UntypedStorage<4, 4>   mUnkb207bd;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpectedAnywhereConsume& operator=(ExpectedAnywhereConsume const&);
    ExpectedAnywhereConsume(ExpectedAnywhereConsume const&);
    ExpectedAnywhereConsume();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExpectedAnywhereConsume(::ItemStack const& item, uint quantity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemStack const& item, uint quantity);
    // NOLINTEND
};
