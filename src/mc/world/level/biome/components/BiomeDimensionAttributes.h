#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeDimensionAttributes {
public:
    // prevent constructor by default
    BiomeDimensionAttributes& operator=(BiomeDimensionAttributes const&);
    BiomeDimensionAttributes(BiomeDimensionAttributes const&);
    BiomeDimensionAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeDimensionAttributes() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
