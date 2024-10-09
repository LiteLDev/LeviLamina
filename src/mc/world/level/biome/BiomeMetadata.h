#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeMetadata {
public:
    // prevent constructor by default
    BiomeMetadata& operator=(BiomeMetadata const&);
    BiomeMetadata(BiomeMetadata const&);
    BiomeMetadata();

public:
    // NOLINTBEGIN
    MCAPI ~BiomeMetadata();

    // NOLINTEND
};
