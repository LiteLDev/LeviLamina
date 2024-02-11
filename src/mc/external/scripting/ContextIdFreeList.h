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
    // symbol: ??1ContextIdFreeList@Scripting@@QEAA@XZ
    MCAPI ~ContextIdFreeList();

    // NOLINTEND
};

}; // namespace Scripting
