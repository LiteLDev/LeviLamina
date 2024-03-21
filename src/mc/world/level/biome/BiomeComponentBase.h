#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeComponentBase {
public:
    // prevent constructor by default
    BiomeComponentBase& operator=(BiomeComponentBase const&);
    BiomeComponentBase(BiomeComponentBase const&);
    BiomeComponentBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BiomeComponentBase@@UEAA@XZ
    virtual ~BiomeComponentBase() = default;

    // NOLINTEND
};
