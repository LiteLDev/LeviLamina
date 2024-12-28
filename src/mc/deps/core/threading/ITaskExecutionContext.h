#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITaskExecutionContext {
public:
    // prevent constructor by default
    ITaskExecutionContext& operator=(ITaskExecutionContext const&);
    ITaskExecutionContext(ITaskExecutionContext const&);
    ITaskExecutionContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITaskExecutionContext();

    // vIndex: 1
    virtual bool isAsync() const = 0;

    // vIndex: 2
    virtual bool canTaskRunAgain() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
