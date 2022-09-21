/**
 * @file  MC/BackgroundTaskBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BackgroundTaskBase.
 *
 */
class BackgroundTaskBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDTASKBASE
public:
    class BackgroundTaskBase& operator=(class BackgroundTaskBase const &) = delete;
    BackgroundTaskBase(class BackgroundTaskBase const &) = delete;
    BackgroundTaskBase() = delete;
#endif

public:
    /**
     * @hash   375688574
     * @symbol ??0BackgroundTaskBase@@QEAA@V?$not_null@PEAVIBackgroundTaskOwner@@@gsl@@AEBUTaskStartInfoBase@@_N@Z
     */
    MCAPI BackgroundTaskBase(class gsl::not_null<class IBackgroundTaskOwner *>, struct TaskStartInfoBase const &, bool);
    /**
     * @hash   1803396051
     * @symbol ?_makeOrphan@BackgroundTaskBase@@QEAAXXZ
     */
    MCAPI void _makeOrphan();
    /**
     * @hash   -159026627
     * @symbol ?canBeRunBy@BackgroundTaskBase@@QEBA_NVid@thread@std@@@Z
     */
    MCAPI bool canBeRunBy(class std::thread::id) const;
    /**
     * @hash   -1587470493
     * @symbol ?getGroup@BackgroundTaskBase@@QEAAPEAVIBackgroundTaskOwner@@XZ
     */
    MCAPI class IBackgroundTaskOwner * getGroup();
    /**
     * @hash   638602002
     * @symbol ?getGroupState@BackgroundTaskBase@@QEBA?AW4TaskGroupState@@XZ
     */
    MCAPI enum TaskGroupState getGroupState() const;
    /**
     * @hash   1210949469
     * @symbol ?getNext@BackgroundTaskBase@@QEAA?AV?$shared_ptr@VBackgroundTaskBase@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class BackgroundTaskBase> getNext();
    /**
     * @hash   778784448
     * @symbol ?getPrev@BackgroundTaskBase@@QEAAPEAV1@XZ
     */
    MCAPI class BackgroundTaskBase * getPrev();
    /**
     * @hash   -437392746
     * @symbol ?getPriority@BackgroundTaskBase@@QEBAHXZ
     */
    MCAPI int getPriority() const;
    /**
     * @hash   -611016595
     * @symbol ?getStartAfterTime@BackgroundTaskBase@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@XZ
     */
    MCAPI class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> getStartAfterTime() const;
    /**
     * @hash   -486477380
     * @symbol ?hasAffinity@BackgroundTaskBase@@QEBA_NXZ
     */
    MCAPI bool hasAffinity() const;
    /**
     * @hash   -855407412
     * @symbol ?isAsync@BackgroundTaskBase@@QEBA_NXZ
     */
    MCAPI bool isAsync() const;
    /**
     * @hash   -516557304
     * @symbol ?isOrphaned@BackgroundTaskBase@@QEBA_NXZ
     */
    MCAPI bool isOrphaned() const;
    /**
     * @hash   1752781248
     * @symbol ?isReadyToStart@BackgroundTaskBase@@QEBA_NV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
     */
    MCAPI bool isReadyToStart(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>) const;
    /**
     * @hash   280249147
     * @symbol ?setNext@BackgroundTaskBase@@QEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
     */
    MCAPI void setNext(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @hash   1299699120
     * @symbol ?setPrev@BackgroundTaskBase@@QEAAXPEAV1@@Z
     */
    MCAPI void setPrev(class BackgroundTaskBase *);
    /**
     * @hash   1015579503
     * @symbol ?setStartAfterTime@BackgroundTaskBase@@QEAAXV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
     */
    MCAPI void setStartAfterTime(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @hash   1453480899
     * @symbol ?setSyncPriority@BackgroundTaskBase@@QEAAXXZ
     */
    MCAPI void setSyncPriority();
    /**
     * @hash   -1461563444
     * @symbol ?getCurrent@BackgroundTaskBase@@SAPEAV1@XZ
     */
    MCAPI static class BackgroundTaskBase * getCurrent();

//protected:
    /**
     * @hash   -1829131908
     * @symbol ?backDownPriority@BackgroundTaskBase@@IEAAXXZ
     */
    MCAPI void backDownPriority();
    /**
     * @hash   -156996611
     * @symbol ?taskComplete@BackgroundTaskBase@@IEAAXXZ
     */
    MCAPI void taskComplete();

//private:

protected:

private:
    /**
     * @hash   -458357501
     * @symbol ?gCurrentTask@BackgroundTaskBase@@0PEAV1@EA
     */
    MCAPI static class BackgroundTaskBase * gCurrentTask;

};