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
    MCAPI StructureIntegrityProcessor(float integrity, uint startSeed);

    MCAPI std::vector<bool> generateFlagsForIndices(int startIndex, int endIndex) const;

    // NOLINTEND
};
