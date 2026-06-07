#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
struct ItemQueryOptions;
// clang-format on

class ItemQuery {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool matches(::ItemStack const& item, ::ItemQueryOptions const& options);
    // NOLINTEND
};
