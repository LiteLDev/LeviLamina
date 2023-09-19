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
    // symbol: ?finalize@IStructurePoolBlockPredicate@@UEAA_NAEAVBlockSource@@AEAVIRandom@@@Z
    MCVAPI bool finalize(class BlockSource&, class IRandom&);

    // NOLINTEND
};
