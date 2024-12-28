#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class RootOperationNode {
public:
    // prevent constructor by default
    RootOperationNode& operator=(RootOperationNode const&);
    RootOperationNode(RootOperationNode const&);
    RootOperationNode();
};
