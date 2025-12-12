#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
struct BlockPlacementCondition;
// clang-format on

struct BlockPlacementFilterComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPlacementCondition>> conditions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;
    // NOLINTEND
};
