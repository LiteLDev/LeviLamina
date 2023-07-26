/**
 * @file  TaskStatus.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TaskStatus.
 *
 */
class TaskStatus {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKSTATUS
public:
    class TaskStatus& operator=(class TaskStatus const &) = delete;
    TaskStatus(class TaskStatus const &) = delete;
#endif

public:
    /**
     * @symbol  ??0TaskStatus\@\@QEAA\@XZ
     */
    MCAPI TaskStatus();
    /**
     * @symbol  ?isComplete\@TaskStatus\@\@QEBA_NXZ
     */
    MCAPI bool isComplete() const;
    /**
     * @symbol  ??BTaskStatus\@\@QEBA?AW4Value\@0\@XZ
     */
    MCAPI operator enum TaskStatus::Value() const;
    /**
     * @symbol  ?toAsyncStatus\@TaskStatus\@\@QEBA?AW4AsyncStatus\@Threading\@Bedrock\@\@XZ
     */
    MCAPI enum class Bedrock::Threading::AsyncStatus toAsyncStatus() const;
    /**
     * @symbol  ?toErrorCode\@TaskStatus\@\@QEBA?AVerror_code\@std\@\@XZ
     */
    MCAPI class std::error_code toErrorCode() const;

};