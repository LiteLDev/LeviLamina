#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeTagAttributes {
public:
    // prevent constructor by default
    BiomeTagAttributes& operator=(BiomeTagAttributes const&);
    BiomeTagAttributes(BiomeTagAttributes const&);
    BiomeTagAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeTagAttributes() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
