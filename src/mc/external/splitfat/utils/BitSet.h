#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class BitSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8d4d51;
    ::ll::UntypedStorage<8, 24> mUnkb92740;
    // NOLINTEND

public:
    // prevent constructor by default
    BitSet& operator=(BitSet const&);
    BitSet(BitSet const&);
    BitSet();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64 const& npos();
    // NOLINTEND
};

} // namespace SFAT
