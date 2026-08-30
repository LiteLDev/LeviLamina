#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITaskExecutionContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITaskExecutionContext();

    virtual bool isAsync() const = 0;

    virtual bool canTaskRunAgain() const = 0;
    // NOLINTEND
};
