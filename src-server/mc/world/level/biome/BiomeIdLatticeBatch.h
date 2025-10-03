#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeIdLatticeBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4db9b2;
    ::ll::UntypedStorage<4, 4>  mUnk3613e5;
    ::ll::UntypedStorage<8, 24> mUnk86174d;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeIdLatticeBatch& operator=(BiomeIdLatticeBatch const&);
    BiomeIdLatticeBatch(BiomeIdLatticeBatch const&);
    BiomeIdLatticeBatch();
};
