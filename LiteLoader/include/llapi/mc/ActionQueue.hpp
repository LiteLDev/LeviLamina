/**
 * @file  MC/ActionQueue.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActionQueue.
 *
 */
class ActionQueue {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTIONQUEUE
public:
    class ActionQueue& operator=(class ActionQueue const &) = delete;
    ActionQueue(class ActionQueue const &) = delete;
#endif

public:
    /**
     * @hash   -1692121193
     * @symbol ??0ActionQueue@@QEAA@XZ
     */
    MCAPI ActionQueue();
    /**
     * @hash   -952942800
     * @symbol ?pushBackActionEvent@ActionQueue@@QEAAXVActionEvent@@@Z
     */
    MCAPI void pushBackActionEvent(class ActionEvent);

};