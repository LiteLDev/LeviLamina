#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

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
    ::BlockPos     pos;
    ::Block const* mBlock;
    ::Tick         tick;
    int            priorityOffset;
    // NOLINTEND

public:
    bool operator>(TickNextTickData const& tnd) const {
        if (tick != tnd.tick) {
            return tick > tnd.tick;
        }
        return priorityOffset > tnd.priorityOffset;
    }
};
