#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

template <typename T0, int T1, int T2>
struct NeighborhoodReader {

public:
    // prevent constructor by default
    NeighborhoodReader& operator=(NeighborhoodReader const&) = delete;
    NeighborhoodReader(NeighborhoodReader const&)            = delete;
    NeighborhoodReader()                                     = delete;
};

}; // namespace OperationNodeDetails
