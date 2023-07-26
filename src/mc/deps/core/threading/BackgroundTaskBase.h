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

    public:
        // prevent constructor by default
        CurrentTaskAutoScope& operator=(CurrentTaskAutoScope const&) = delete;
        CurrentTaskAutoScope(CurrentTaskAutoScope const&)            = delete;
        CurrentTaskAutoScope()                                       = delete;

    public:
        /**
         * @symbol ??0CurrentTaskAutoScope\@BackgroundTaskBase\@\@QEAA\@PEAV1\@\@Z
         */
        MCAPI CurrentTaskAutoScope(class BackgroundTaskBase*); // NOLINT
        /**
         * @symbol ??1CurrentTaskAutoScope\@BackgroundTaskBase\@\@QEAA\@XZ
         */
        MCAPI ~CurrentTaskAutoScope(); // NOLINT
    };

    class PendingComparer {

    public:
        // prevent constructor by default
        PendingComparer& operator=(PendingComparer const&) = delete;
        PendingComparer(PendingComparer const&)            = delete;
        PendingComparer()                                  = delete;

    public:
        /**
         * @symbol
         * ??RPendingComparer\@BackgroundTaskBase\@\@QEBA_NAEBV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@0\@Z
         */
        MCAPI bool
        operator()(class std::shared_ptr<class BackgroundTaskBase> const&, class std::shared_ptr<class BackgroundTaskBase> const&)
            const; // NOLINT
    };

public:
    // prevent constructor by default
    BackgroundTaskBase& operator=(BackgroundTaskBase const&) = delete;
    BackgroundTaskBase(BackgroundTaskBase const&)            = delete;
    BackgroundTaskBase()                                     = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BACKGROUNDTASKBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BackgroundTaskBase(); // NOLINT
#endif
    /**
     * @symbol
     * ??0BackgroundTaskBase\@\@QEAA\@V?$not_null\@PEAVIBackgroundTaskOwner\@\@\@gsl\@\@AEBUTaskStartInfoBase\@\@_N\@Z
     */
    MCAPI BackgroundTaskBase(
        class gsl::not_null<class IBackgroundTaskOwner*>,
        struct TaskStartInfoBase const&,
        bool
    ); // NOLINT
    /**
     * @symbol ?_makeOrphan\@BackgroundTaskBase\@\@QEAAXXZ
     */
    MCAPI void _makeOrphan(); // NOLINT
    /**
     * @symbol ?canBeRunBy\@BackgroundTaskBase\@\@QEBA_NVid\@thread\@std\@\@\@Z
     */
    MCAPI bool canBeRunBy(class std::thread::id) const; // NOLINT
    /**
     * @symbol ?getGroup\@BackgroundTaskBase\@\@QEAAPEAVIBackgroundTaskOwner\@\@XZ
     */
    MCAPI class IBackgroundTaskOwner* getGroup(); // NOLINT
    /**
     * @symbol ?getGroupState\@BackgroundTaskBase\@\@QEBA?AW4TaskGroupState\@\@XZ
     */
    MCAPI enum class TaskGroupState getGroupState() const; // NOLINT
    /**
     * @symbol ?getNext\@BackgroundTaskBase\@\@QEAA?AV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class BackgroundTaskBase> getNext(); // NOLINT
    /**
     * @symbol ?getPrev\@BackgroundTaskBase\@\@QEAAPEAV1\@XZ
     */
    MCAPI class BackgroundTaskBase* getPrev(); // NOLINT
    /**
     * @symbol
     * ?getStartAfterTime\@BackgroundTaskBase\@\@QEBA?AV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@XZ
     */
    MCAPI class std::chrono::time_point<
        struct std::chrono::steady_clock,
        class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>
    getStartAfterTime() const; // NOLINT
    /**
     * @symbol ?hasAffinity\@BackgroundTaskBase\@\@QEBA_NXZ
     */
    MCAPI bool hasAffinity() const; // NOLINT
    /**
     * @symbol ?isAsync\@BackgroundTaskBase\@\@QEBA_NXZ
     */
    MCAPI bool isAsync() const; // NOLINT
    /**
     * @symbol ?isOrphaned\@BackgroundTaskBase\@\@QEBA_NXZ
     */
    MCAPI bool isOrphaned() const; // NOLINT
    /**
     * @symbol
     * ?isReadyToStart\@BackgroundTaskBase\@\@QEBA_NV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI bool isReadyToStart(class std::chrono::time_point<
                              struct std::chrono::steady_clock,
                              class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>) const; // NOLINT
    /**
     * @symbol ?setNext\@BackgroundTaskBase\@\@QEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z
     */
    MCAPI void setNext(class std::shared_ptr<class BackgroundTaskBase>); // NOLINT
    /**
     * @symbol ?setPrev\@BackgroundTaskBase\@\@QEAAXPEAV1\@\@Z
     */
    MCAPI void setPrev(class BackgroundTaskBase*); // NOLINT
    /**
     * @symbol
     * ?setStartAfterTime\@BackgroundTaskBase\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void setStartAfterTime(class std::chrono::time_point<
                                 struct std::chrono::steady_clock,
                                 class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>); // NOLINT
    /**
     * @symbol ?setSyncPriority\@BackgroundTaskBase\@\@QEAAXXZ
     */
    MCAPI void setSyncPriority(); // NOLINT
    /**
     * @symbol ?getCurrent\@BackgroundTaskBase\@\@SAPEAV1\@XZ
     */
    MCAPI static class BackgroundTaskBase* getCurrent(); // NOLINT

    // protected:
    /**
     * @symbol ?backDownPriority\@BackgroundTaskBase\@\@IEAAXXZ
     */
    MCAPI void backDownPriority(); // NOLINT
    /**
     * @symbol ?taskComplete\@BackgroundTaskBase\@\@IEAAXXZ
     */
    MCAPI void taskComplete(); // NOLINT

    // private:

protected:
private:
    /**
     * @symbol ?gCurrentTask\@BackgroundTaskBase\@\@0PEAV1\@EA
     */
    MCAPI static class BackgroundTaskBase* gCurrentTask; // NOLINT
};
