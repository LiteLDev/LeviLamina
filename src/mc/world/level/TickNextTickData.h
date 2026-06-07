#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class TickNextTickData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>    pos;
    ::ll::TypedStorage<4, 4, int>            priorityOffset;
    ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
    ::ll::TypedStorage<8, 8, ::Tick>         tick;
    // NOLINTEND

public:
    // prevent constructor by default
    TickNextTickData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TickNextTickData(::BlockPos const& pos, ::Block const& block, ::Tick const& tick, int pOffset);

    MCNAPI bool operator==(::TickNextTickData const& t) const;

    MCNAPI bool operator>(::TickNextTickData const& tnd) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos, ::Block const& block, ::Tick const& tick, int pOffset);
    // NOLINTEND
};
