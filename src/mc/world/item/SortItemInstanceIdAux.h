#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SortItemInstanceIdAux {
public:
    // prevent constructor by default
    SortItemInstanceIdAux& operator=(SortItemInstanceIdAux const&);
    SortItemInstanceIdAux(SortItemInstanceIdAux const&);
    SortItemInstanceIdAux();

public:
    // NOLINTBEGIN
    MCAPI bool operator()(class ItemInstance const& lhs, class ItemInstance const& rhs) const;

    // NOLINTEND
};
