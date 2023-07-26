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

public:
    // prevent constructor by default
    TaskStatus& operator=(TaskStatus const&) = delete;
    TaskStatus(TaskStatus const&)            = delete;

public:
    /**
     * @symbol ??0TaskStatus\@\@QEAA\@XZ
     */
    MCAPI TaskStatus(); // NOLINT
    /**
     * @symbol ?isComplete\@TaskStatus\@\@QEBA_NXZ
     */
    MCAPI bool isComplete() const; // NOLINT
    /**
     * @symbol ??BTaskStatus\@\@QEBA?AW4Value\@0\@XZ
     */
    MCAPI operator enum TaskStatus::Value() const; // NOLINT
    /**
     * @symbol ?toAsyncStatus\@TaskStatus\@\@QEBA?AW4AsyncStatus\@Threading\@Bedrock\@\@XZ
     */
    MCAPI enum class Bedrock::Threading::AsyncStatus toAsyncStatus() const; // NOLINT
    /**
     * @symbol ?toErrorCode\@TaskStatus\@\@QEBA?AVerror_code\@std\@\@XZ
     */
    MCAPI class std::error_code toErrorCode() const; // NOLINT
};
