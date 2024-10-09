#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class OperationNode {
public:
    // prevent constructor by default
    OperationNode& operator=(OperationNode const&);
    OperationNode(OperationNode const&);
    OperationNode();
};
