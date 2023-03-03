/**
 * @file  ActionQueue.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0ActionQueue\@\@QEAA\@XZ
     */
    MCAPI ActionQueue();
    /**
     * @symbol  ?pushBackActionEvent\@ActionQueue\@\@QEAAXVActionEvent\@\@\@Z
     */
    MCAPI void pushBackActionEvent(class ActionEvent);

};