#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class OperationGraphResult {
public:
    // prevent constructor by default
    OperationGraphResult& operator=(OperationGraphResult const&);
    OperationGraphResult(OperationGraphResult const&);
    OperationGraphResult();
};
