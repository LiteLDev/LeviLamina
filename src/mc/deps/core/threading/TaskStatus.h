#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncStatus.h"

class TaskStatus {
public:
    // TaskStatus inner types define
    enum class Value : int {
        WaitingForPredecessor = 0x0,
        Pending               = 0x1,
        Running               = 0x2,
        CancelPending         = 0x3,
        Canceled              = 0x4,
        Error                 = 0x5,
        Done                  = 0x6,
    };
    Value mValue; // this+0x0

public:
    // prevent constructor by default
    TaskStatus& operator=(TaskStatus const&);
    TaskStatus(TaskStatus const&);

public:
    // NOLINTBEGIN
    MCAPI TaskStatus();

    MCAPI bool isComplete() const;

    MCAPI explicit operator Value() const;

    MCAPI ::Bedrock::Threading::AsyncStatus toAsyncStatus() const;

    MCAPI std::error_code toErrorCode() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
