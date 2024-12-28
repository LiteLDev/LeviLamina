#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncStatus.h"

class TaskStatus {
public:
    // TaskStatus inner types define
    enum class Value : int {
        WaitingForPredecessor = 0,
        Pending               = 1,
        Running               = 2,
        CancelPending         = 3,
        Canceled              = 4,
        Error                 = 5,
        Done                  = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TaskStatus::Value> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskStatus& operator=(TaskStatus const&);
    TaskStatus(TaskStatus const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TaskStatus();

    MCAPI bool isComplete() const;

    MCAPI explicit operator ::TaskStatus::Value() const;

    MCAPI ::Bedrock::Threading::AsyncStatus toAsyncStatus() const;

    MCAPI ::std::error_code toErrorCode() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
