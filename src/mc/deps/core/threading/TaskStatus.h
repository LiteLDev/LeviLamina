#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncStatus.h"

class TaskStatus {
public:
    // TaskStatus inner types define
    enum class Value {};

public:
    // prevent constructor by default
    TaskStatus& operator=(TaskStatus const&);
    TaskStatus(TaskStatus const&);

public:
    // NOLINTBEGIN
    MCAPI TaskStatus();

    MCAPI bool isComplete() const;

    MCAPI explicit operator enum TaskStatus::Value() const;

    MCAPI ::Bedrock::Threading::AsyncStatus toAsyncStatus() const;

    MCAPI std::error_code toErrorCode() const;

    // NOLINTEND
};
