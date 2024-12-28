#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0, typename T1, int T2>
class DenseEnumMap {
public:
    // prevent constructor by default
    DenseEnumMap& operator=(DenseEnumMap const&);
    DenseEnumMap(DenseEnumMap const&);
    DenseEnumMap();
};

} // namespace Bedrock
