#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class BitSet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SFAT_BITSET
public:
    BitSet& operator=(BitSet const&) = delete;
    BitSet(BitSet const&)            = delete;
    BitSet()                         = delete;
#endif

public:
    /**
     * @symbol ?npos\@BitSet\@SFAT\@\@2_KB
     */
    MCAPI static unsigned __int64 const npos;
};

}; // namespace SFAT
