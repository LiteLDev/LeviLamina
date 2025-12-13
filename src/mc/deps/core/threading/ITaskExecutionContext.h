#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITaskExecutionContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITaskExecutionContext() = default;

    virtual bool isAsync() const = 0;

    virtual bool canTaskRunAgain() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
