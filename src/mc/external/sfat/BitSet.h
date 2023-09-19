#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class BitSet {
public:
    // prevent constructor by default
    BitSet& operator=(BitSet const&);
    BitSet(BitSet const&);
    BitSet();

public:
    // NOLINTBEGIN
    // symbol: ?npos@BitSet@SFAT@@2_KB
    MCAPI static uint64 const npos;

    // NOLINTEND
};

}; // namespace SFAT
