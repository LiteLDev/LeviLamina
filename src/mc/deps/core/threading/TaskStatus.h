#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/AsyncStatus.h"

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
    // symbol: ??0TaskStatus@@QEAA@XZ
    MCAPI TaskStatus();

    // symbol: ?isComplete@TaskStatus@@QEBA_NXZ
    MCAPI bool isComplete() const;

    // symbol: ??BTaskStatus@@QEBA?AW4Value@0@XZ
    MCAPI explicit operator enum class TaskStatus::Value() const;

    // symbol: ?toAsyncStatus@TaskStatus@@QEBA?AW4AsyncStatus@Threading@Bedrock@@XZ
    MCAPI ::Bedrock::Threading::AsyncStatus toAsyncStatus() const;

    // symbol: ?toErrorCode@TaskStatus@@QEBA?AVerror_code@std@@XZ
    MCAPI std::error_code toErrorCode() const;

    // NOLINTEND
};
