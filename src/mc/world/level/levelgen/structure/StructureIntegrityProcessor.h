#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureIntegrityProcessor {
public:
    // prevent constructor by default
    StructureIntegrityProcessor& operator=(StructureIntegrityProcessor const&);
    StructureIntegrityProcessor(StructureIntegrityProcessor const&);
    StructureIntegrityProcessor();

public:
    // NOLINTBEGIN
    // symbol: ?generateFlagsForIndices@StructureIntegrityProcessor@@QEBA?AV?$vector@_NV?$allocator@_N@std@@@std@@HH@Z
    MCAPI std::vector<bool> generateFlagsForIndices(int startIndex, int endIndex) const;

    // NOLINTEND
};
