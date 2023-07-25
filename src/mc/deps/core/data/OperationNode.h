#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class OperationNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPERATIONNODE
public:
    OperationNode& operator=(OperationNode const&) = delete;
    OperationNode(OperationNode const&)            = delete;
    OperationNode()                                = delete;
#endif

public:
};
