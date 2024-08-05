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
};
