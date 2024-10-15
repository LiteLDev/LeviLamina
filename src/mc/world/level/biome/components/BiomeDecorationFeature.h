#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeDecorationFeature {
public:
    // prevent constructor by default
    BiomeDecorationFeature& operator=(BiomeDecorationFeature const&);
    BiomeDecorationFeature();

public:
    // NOLINTBEGIN
    MCAPI BiomeDecorationFeature(struct BiomeDecorationFeature&&);

    MCAPI BiomeDecorationFeature(struct BiomeDecorationFeature const&);

    MCAPI ~BiomeDecorationFeature();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct BiomeDecorationFeature const&);

    MCAPI void* ctor$(struct BiomeDecorationFeature&&);

    MCAPI void dtor$();

    // NOLINTEND
};
