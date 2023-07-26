/**
 * @file  DelayActionList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DelayActionList.
 *
 */
class DelayActionList {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DELAYACTIONLIST
public:
    class DelayActionList& operator=(class DelayActionList const &) = delete;
    DelayActionList(class DelayActionList const &) = delete;
#endif

public:
    /**
     * @symbol  ??0DelayActionList\@\@QEAA\@XZ
     */
    MCAPI DelayActionList();
    /**
     * @symbol  ?queueRequestOrExecuteAction\@DelayActionList\@\@QEAA?AW4QueueRequestResult\@\@VDelayRequest\@\@AEAVServerLevel\@\@AEAVDimension\@\@_K_N\@Z
     */
    MCAPI enum class QueueRequestResult queueRequestOrExecuteAction(class DelayRequest, class ServerLevel &, class Dimension &, unsigned __int64, bool);
    /**
     * @symbol  ?tick\@DelayActionList\@\@QEAAXAEAVServerLevel\@\@AEAVDimension\@\@_K\@Z
     */
    MCAPI void tick(class ServerLevel &, class Dimension &, unsigned __int64);

};