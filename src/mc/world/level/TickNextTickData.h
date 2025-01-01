#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
struct Tick;
// clang-format on

class TickNextTickData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>    pos;
    ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
    ::ll::TypedStorage<8, 8, ::Tick>         tick;
    ::ll::TypedStorage<4, 4, int>            priorityOffset;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TickNextTickData(::BlockPos const& pos, ::Block const& block, ::Tick const& tick, int pOffset);

    MCAPI bool operator==(::TickNextTickData const& t) const;

    MCAPI bool operator>(::TickNextTickData const& tnd) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos, ::Block const& block, ::Tick const& tick, int pOffset);
    // NOLINTEND
};
