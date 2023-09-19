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
    // symbol: ??RSortItemInstanceIdAux@@QEBA_NAEBVItemInstance@@0@Z
    MCAPI bool operator()(class ItemInstance const&, class ItemInstance const&) const;

    // NOLINTEND
};
