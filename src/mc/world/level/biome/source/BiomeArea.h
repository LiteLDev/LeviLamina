#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BiomeArea {
public:
    // prevent constructor by default
    BiomeArea& operator=(BiomeArea const&);
    BiomeArea(BiomeArea const&);
    BiomeArea();

public:
    // NOLINTBEGIN
    // symbol: ??0BiomeArea@@QEAA@AEBVBoundingBox@@I@Z
    MCAPI BiomeArea(class BoundingBox const& area, uint scale);

    // symbol: ?containsAny@BiomeArea@@QEAA_NV?$span@$$CB_K$0?0@gsl@@@Z
    MCAPI bool containsAny(gsl::span<uint64 const>);

    // symbol: ??1BiomeArea@@QEAA@XZ
    MCAPI ~BiomeArea();

    // NOLINTEND
};
