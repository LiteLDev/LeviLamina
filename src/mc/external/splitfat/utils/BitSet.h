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
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static uint64 const& npos();

    // NOLINTEND
};

}; // namespace SFAT
