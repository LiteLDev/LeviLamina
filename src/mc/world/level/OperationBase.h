#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PositionTrackingDB {

class OperationBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSITIONTRACKINGDB_OPERATIONBASE
public:
    OperationBase& operator=(OperationBase const&) = delete;
    OperationBase(OperationBase const&)            = delete;
    OperationBase()                                = delete;
#endif

public:
};

}; // namespace PositionTrackingDB
