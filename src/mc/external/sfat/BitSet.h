#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class BitSet {

public:
    // prevent constructor by default
    BitSet& operator=(BitSet const&) = delete;
    BitSet(BitSet const&)            = delete;
    BitSet()                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?npos\@BitSet\@SFAT\@\@2_KB
     */
    MCAPI static uint64_t const npos;
    // NOLINTEND
};

}; // namespace SFAT
