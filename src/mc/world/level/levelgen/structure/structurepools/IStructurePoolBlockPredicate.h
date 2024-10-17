#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IStructurePoolBlockPredicate {
public:
    // prevent constructor by default
    IStructurePoolBlockPredicate& operator=(IStructurePoolBlockPredicate const&);
    IStructurePoolBlockPredicate(IStructurePoolBlockPredicate const&);
    IStructurePoolBlockPredicate();

public:
    // NOLINTBEGIN
    MCVAPI bool finalize(class BlockSource&, class IRandom&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI bool finalize$(class BlockSource&, class IRandom&);

    // NOLINTEND
};
