#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class BidirectionalUnorderedMap {
public:
    // prevent constructor by default
    BidirectionalUnorderedMap& operator=(BidirectionalUnorderedMap const&);
    BidirectionalUnorderedMap(BidirectionalUnorderedMap const&);
    BidirectionalUnorderedMap();
};
