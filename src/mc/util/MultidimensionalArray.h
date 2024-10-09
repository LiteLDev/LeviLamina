#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

template <typename T0, int T1, int T2, int T3>
class MultidimensionalArray : public std::array<T0, T1 * T2 * T3> {
public:
    // prevent constructor by default
    MultidimensionalArray& operator=(MultidimensionalArray const&);
    MultidimensionalArray(MultidimensionalArray const&);
    MultidimensionalArray();
};

}; // namespace Util
