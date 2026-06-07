#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureIntegrityProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mIntegrity;
    ::ll::TypedStorage<4, 4, uint>  mStartSeed;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureIntegrityProcessor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureIntegrityProcessor(float integrity, uint startSeed);

    MCAPI ::std::vector<bool> generateFlagsForIndices(int startIndex, int endIndex) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(float integrity, uint startSeed);
    // NOLINTEND
};
