#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class BidirectionalUnorderedMap {

public:
    std::unordered_map<T0, T1> mRight;
    std::unordered_map<T1, T0> mLeft;

    T1&       operator[](T0 const& key) { return mRight[key]; }
    T1 const& operator[](T0 const& key) const { return mRight[key]; }

    T0&       operator()(T1 const& value) { return mLeft[value]; }
    T0 const& operator()(T1 const& value) const { return mLeft[value]; }
};
