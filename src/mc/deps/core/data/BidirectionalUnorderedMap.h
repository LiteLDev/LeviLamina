#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class BidirectionalUnorderedMap {

public:
    std::unordered_map<T0, T1> mRight;
    std::unordered_map<T1, T0> mLeft;
};
