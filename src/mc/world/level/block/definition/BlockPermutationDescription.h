#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPermutationDescription {
public:
    // prevent constructor by default
    BlockPermutationDescription& operator=(BlockPermutationDescription const&);
    BlockPermutationDescription(BlockPermutationDescription const&);
    BlockPermutationDescription();

public:
    // NOLINTBEGIN
    MCAPI ~BlockPermutationDescription();

    // NOLINTEND
};
