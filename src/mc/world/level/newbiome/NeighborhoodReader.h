#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

template <typename T0, int32_t T1, int32_t T2>
struct NeighborhoodReader {

public:
    // prevent constructor by default
    NeighborhoodReader& operator=(NeighborhoodReader const&) = delete;
    NeighborhoodReader(NeighborhoodReader const&)            = delete;
    NeighborhoodReader()                                     = delete;
};

}; // namespace OperationNodeDetails
