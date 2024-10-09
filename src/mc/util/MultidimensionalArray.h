#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

template <typename T0, int T1, int T2, int T3>
class MultidimensionalArray {
public:
    // prevent constructor by default
    MultidimensionalArray& operator=(MultidimensionalArray const&);
    MultidimensionalArray(MultidimensionalArray const&);
    MultidimensionalArray();
};

}; // namespace Util
