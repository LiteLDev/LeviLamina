#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

template <typename T0, int T1, int T2, int T3>
class MultidimensionalArray {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UTIL_MULTIDIMENSIONALARRAY
public:
    MultidimensionalArray& operator=(MultidimensionalArray const&) = delete;
    MultidimensionalArray(MultidimensionalArray const&)            = delete;
    MultidimensionalArray()                                        = delete;
#endif

public:
};

}; // namespace Util
