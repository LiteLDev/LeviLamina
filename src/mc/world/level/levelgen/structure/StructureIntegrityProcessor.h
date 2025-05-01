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
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<bool> generateFlagsForIndices(int endIndex, int startIndex) const;
    // NOLINTEND
};
