#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

template <typename T0, int32_t T1, int32_t T2, int32_t T3>
class MultidimensionalArray {

public:
    // prevent constructor by default
    MultidimensionalArray& operator=(MultidimensionalArray const&) = delete;
    MultidimensionalArray(MultidimensionalArray const&)            = delete;
    MultidimensionalArray()                                        = delete;
};

}; // namespace Util
