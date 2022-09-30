/**
 * @file  TaskStatus.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   606966515
     * @symbol ??0TaskStatus@@QEAA@XZ
     */
    MCAPI TaskStatus();
    /**
     * @hash   -1169196986
     * @symbol ?isComplete@TaskStatus@@QEBA_NXZ
     */
    MCAPI bool isComplete() const;
    /**
     * @hash   751778496
     * @symbol ??BTaskStatus@@QEBA?AW4Value@0@XZ
     */
    MCAPI operator enum class TaskStatus::Value() const;
    /**
     * @hash   -577171104
     * @symbol ?toAsyncStatus@TaskStatus@@QEBA?AW4AsyncStatus@Threading@Bedrock@@XZ
     */
    MCAPI enum class Bedrock::Threading::AsyncStatus toAsyncStatus() const;
    /**
     * @hash   1163702464
     * @symbol ?toErrorCode@TaskStatus@@QEBA?AVerror_code@std@@XZ
     */
    MCAPI class std::error_code toErrorCode() const;

};