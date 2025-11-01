#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SortedSplittedPackets {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk737f47;
    ::ll::UntypedStorage<4, 4> mUnk41d47c;
    ::ll::UntypedStorage<4, 4> mUnkeb44fe;
    ::ll::UntypedStorage<2, 2> mUnk57ca23;
    // NOLINTEND

public:
    // prevent constructor by default
    SortedSplittedPackets& operator=(SortedSplittedPackets const&);
    SortedSplittedPackets(SortedSplittedPackets const&);
    SortedSplittedPackets();

};

}
