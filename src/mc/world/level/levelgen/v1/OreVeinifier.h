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
    // symbol: ??0OreVeinifier@@QEAA@AEBVOreVeinifierNoises@@@Z
    MCAPI explicit OreVeinifier(class OreVeinifierNoises const&);

    // symbol: ?getVeinBlockOrFallback@OreVeinifier@@QEBAPEBVBlock@@VVec3@@PEBV2@@Z
    MCAPI class Block const* getVeinBlockOrFallback(class Vec3 pos, class Block const*) const;

    // NOLINTEND
};
