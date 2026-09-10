#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemActor;
class ItemStack;
// clang-format on

struct HopperCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool(::ItemActor&, ::ItemStack const&, int)>> beforeAcquireItem;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ItemActor&, ::ItemStack const&, int)>> afterAcquireItem;
    // NOLINTEND
};
