#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

struct BiomeIdLatticeBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mAreaOffset;
    ::ll::TypedStorage<4, 4, int>                 mGridOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mBiomeIds;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    BiomeIdLatticeBatch();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI BiomeIdLatticeBatch(int areaOffset, int gridOffset);

    MCAPI void add(::BlockPos const& relativePos, int id);

    MCAPI void clear();

    MCAPI int getBiomeId(::BlockPos const& relativePos) const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(int areaOffset, int gridOffset);
#endif
    // NOLINTEND
};
