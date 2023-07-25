#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { enum class AsyncStatus; }
// clang-format on

class TaskStatus {
public:
    // TaskStatus inner types declare
    // clang-format off

    // clang-format on

    // TaskStatus inner types define
    enum class Value {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKSTATUS
public:
    TaskStatus& operator=(TaskStatus const&) = delete;
    TaskStatus(TaskStatus const&)            = delete;
#endif

public:
    /**
     * @symbol ??0TaskStatus\@\@QEAA\@XZ
     */
    MCAPI TaskStatus();
    /**
     * @symbol ?isComplete\@TaskStatus\@\@QEBA_NXZ
     */
    MCAPI bool isComplete() const;
    /**
     * @symbol ??BTaskStatus\@\@QEBA?AW4Value\@0\@XZ
     */
    MCAPI operator enum TaskStatus::Value() const;
    /**
     * @symbol ?toAsyncStatus\@TaskStatus\@\@QEBA?AW4AsyncStatus\@Threading\@Bedrock\@\@XZ
     */
    MCAPI enum class Bedrock::Threading::AsyncStatus toAsyncStatus() const;
    /**
     * @symbol ?toErrorCode\@TaskStatus\@\@QEBA?AVerror_code\@std\@\@XZ
     */
    MCAPI class std::error_code toErrorCode() const;
};
