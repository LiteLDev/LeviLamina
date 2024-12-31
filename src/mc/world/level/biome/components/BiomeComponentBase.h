#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeComponentBase {
public:
    // prevent constructor by default
    BiomeComponentBase& operator=(BiomeComponentBase const&);
    BiomeComponentBase(BiomeComponentBase const&);
    BiomeComponentBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeComponentBase() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
