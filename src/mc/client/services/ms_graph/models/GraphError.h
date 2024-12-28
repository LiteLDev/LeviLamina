#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MSGraph::Models {

struct GraphError {
public:
    // prevent constructor by default
    GraphError& operator=(GraphError const&);
    GraphError(GraphError const&);
    GraphError();
};

} // namespace MSGraph::Models
