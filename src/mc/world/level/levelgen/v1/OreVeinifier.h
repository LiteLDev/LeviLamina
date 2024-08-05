#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OreVeinifier {
public:
    // prevent constructor by default
    OreVeinifier& operator=(OreVeinifier const&);
    OreVeinifier(OreVeinifier const&);
    OreVeinifier();

public:
    // NOLINTBEGIN
    MCAPI explicit OreVeinifier(class OreVeinifierNoises const&);

    MCAPI class Block const* getVeinBlockOrFallback(class Vec3 pos, class Block const*) const;

    // NOLINTEND
};
