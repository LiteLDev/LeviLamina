#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BackgroundTaskBase {
public:
    // BackgroundTaskBase inner types declare
    // clang-format off
    class CurrentTaskAutoScope;
    class PendingComparer;
    // clang-format on

    // BackgroundTaskBase inner types define
    class CurrentTaskAutoScope {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDTASKBASE_CURRENTTASKAUTOSCOPE
    public:
        CurrentTaskAutoScope& operator=(CurrentTaskAutoScope const&) = delete;
        CurrentTaskAutoScope(CurrentTaskAutoScope const&)            = delete;
        CurrentTaskAutoScope()                                       = delete;
#endif

    public:
        /**
         * @symbol ??0CurrentTaskAutoScope\@BackgroundTaskBase\@\@QEAA\@PEAV1\@\@Z
         */
        MCAPI CurrentTaskAutoScope(class BackgroundTaskBase*);
        /**
         * @symbol ??1CurrentTaskAutoScope\@BackgroundTaskBase\@\@QEAA\@XZ
         */
        MCAPI ~CurrentTaskAutoScope();
    };

    class PendingComparer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDTASKBASE_PENDINGCOMPARER
    public:
        PendingComparer& operator=(PendingComparer const&) = delete;
        PendingComparer(PendingComparer const&)            = delete;
        PendingComparer()                                  = delete;
#endif

    public:
        /**
         * @symbol
         * ??RPendingComparer\@BackgroundTaskBase\@\@QEBA_NAEBV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@0\@Z
         */
        MCAPI bool
        operator()(class std::shared_ptr<class BackgroundTaskBase> const&, class std::shared_ptr<class BackgroundTaskBase> const&)
            const;
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDTASKBASE
public:
    BackgroundTaskBase& operator=(BackgroundTaskBase const&) = delete;
    BackgroundTaskBase(BackgroundTaskBase const&)            = delete;
    BackgroundTaskBase()                                     = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BACKGROUNDTASKBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BackgroundTaskBase();
#endif
    /**
     * @symbol
     * ??0BackgroundTaskBase\@\@QEAA\@V?$not_null\@PEAVIBackgroundTaskOwner\@\@\@gsl\@\@AEBUTaskStartInfoBase\@\@_N\@Z
     */
    MCAPI BackgroundTaskBase(class gsl::not_null<class IBackgroundTaskOwner*>, struct TaskStartInfoBase const&, bool);
    /**
     * @symbol ?_makeOrphan\@BackgroundTaskBase\@\@QEAAXXZ
     */
    MCAPI void _makeOrphan();
    /**
     * @symbol ?canBeRunBy\@BackgroundTaskBase\@\@QEBA_NVid\@thread\@std\@\@\@Z
     */
    MCAPI bool canBeRunBy(class std::thread::id) const;
    /**
     * @symbol ?getGroup\@BackgroundTaskBase\@\@QEAAPEAVIBackgroundTaskOwner\@\@XZ
     */
    MCAPI class IBackgroundTaskOwner* getGroup();
    /**
     * @symbol ?getGroupState\@BackgroundTaskBase\@\@QEBA?AW4TaskGroupState\@\@XZ
     */
    MCAPI enum class TaskGroupState getGroupState() const;
    /**
     * @symbol ?getNext\@BackgroundTaskBase\@\@QEAA?AV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class BackgroundTaskBase> getNext();
    /**
     * @symbol ?getPrev\@BackgroundTaskBase\@\@QEAAPEAV1\@XZ
     */
    MCAPI class BackgroundTaskBase* getPrev();
    /**
     * @symbol
     * ?getStartAfterTime\@BackgroundTaskBase\@\@QEBA?AV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@XZ
     */
    MCAPI class std::chrono::time_point<
        struct std::chrono::steady_clock,
        class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>
    getStartAfterTime() const;
    /**
     * @symbol ?hasAffinity\@BackgroundTaskBase\@\@QEBA_NXZ
     */
    MCAPI bool hasAffinity() const;
    /**
     * @symbol ?isAsync\@BackgroundTaskBase\@\@QEBA_NXZ
     */
    MCAPI bool isAsync() const;
    /**
     * @symbol ?isOrphaned\@BackgroundTaskBase\@\@QEBA_NXZ
     */
    MCAPI bool isOrphaned() const;
    /**
     * @symbol
     * ?isReadyToStart\@BackgroundTaskBase\@\@QEBA_NV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI bool isReadyToStart(class std::chrono::time_point<
                              struct std::chrono::steady_clock,
                              class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>) const;
    /**
     * @symbol ?setNext\@BackgroundTaskBase\@\@QEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z
     */
    MCAPI void setNext(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @symbol ?setPrev\@BackgroundTaskBase\@\@QEAAXPEAV1\@\@Z
     */
    MCAPI void setPrev(class BackgroundTaskBase*);
    /**
     * @symbol
     * ?setStartAfterTime\@BackgroundTaskBase\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void setStartAfterTime(class std::chrono::time_point<
                                 struct std::chrono::steady_clock,
                                 class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @symbol ?setSyncPriority\@BackgroundTaskBase\@\@QEAAXXZ
     */
    MCAPI void setSyncPriority();
    /**
     * @symbol ?getCurrent\@BackgroundTaskBase\@\@SAPEAV1\@XZ
     */
    MCAPI static class BackgroundTaskBase* getCurrent();

    // protected:
    /**
     * @symbol ?backDownPriority\@BackgroundTaskBase\@\@IEAAXXZ
     */
    MCAPI void backDownPriority();
    /**
     * @symbol ?taskComplete\@BackgroundTaskBase\@\@IEAAXXZ
     */
    MCAPI void taskComplete();

    // private:

protected:
private:
    /**
     * @symbol ?gCurrentTask\@BackgroundTaskBase\@\@0PEAV1\@EA
     */
    MCAPI static class BackgroundTaskBase* gCurrentTask;
};
