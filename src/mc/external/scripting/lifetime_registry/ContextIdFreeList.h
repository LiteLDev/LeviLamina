#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ContextIdFreeList {
public:
    // prevent constructor by default
    ContextIdFreeList& operator=(ContextIdFreeList const&);
    ContextIdFreeList(ContextIdFreeList const&);
    ContextIdFreeList();

public:
    // NOLINTBEGIN
    MCAPI ~ContextIdFreeList();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
