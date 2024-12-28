#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
// clang-format on

struct SortItemInstanceIdAux {
public:
    // prevent constructor by default
    SortItemInstanceIdAux& operator=(SortItemInstanceIdAux const&);
    SortItemInstanceIdAux(SortItemInstanceIdAux const&);
    SortItemInstanceIdAux();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator()(::ItemInstance const& lhs, ::ItemInstance const& rhs) const;
    // NOLINTEND
};
