#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

template <typename T0, int T1, int T2>
struct NeighborhoodReader {
public:
    // prevent constructor by default
    NeighborhoodReader& operator=(NeighborhoodReader const&);
    NeighborhoodReader(NeighborhoodReader const&);
    NeighborhoodReader();
};

}; // namespace OperationNodeDetails
