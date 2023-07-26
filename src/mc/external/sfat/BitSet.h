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
    /**
     * @symbol ?npos\@BitSet\@SFAT\@\@2_KB
     */
    MCAPI static unsigned __int64 const npos; // NOLINT
};

}; // namespace SFAT
