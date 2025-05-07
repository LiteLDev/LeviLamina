#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITaskExecutionContext {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITaskExecutionContext() = default;

    // vIndex: 1
    virtual bool isAsync() const = 0;

    // vIndex: 2
    virtual bool canTaskRunAgain() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
