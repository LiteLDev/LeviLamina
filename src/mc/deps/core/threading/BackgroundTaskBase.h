#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/TaskGroupState.h"

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
        CurrentTaskAutoScope& operator=(CurrentTaskAutoScope const&);
        CurrentTaskAutoScope(CurrentTaskAutoScope const&);
        CurrentTaskAutoScope();

    public:
        // NOLINTBEGIN
        // symbol: ??0CurrentTaskAutoScope@BackgroundTaskBase@@QEAA@PEAV1@@Z
        MCAPI explicit CurrentTaskAutoScope(class BackgroundTaskBase* curr);

        // symbol: ??1CurrentTaskAutoScope@BackgroundTaskBase@@QEAA@XZ
        MCAPI ~CurrentTaskAutoScope();

        // NOLINTEND
    };

    class PendingComparer {
    public:
        // prevent constructor by default
        PendingComparer& operator=(PendingComparer const&);
        PendingComparer(PendingComparer const&);
        PendingComparer();

    public:
        // NOLINTBEGIN
        // symbol: ??RPendingComparer@BackgroundTaskBase@@QEBA_NAEBV?$shared_ptr@VBackgroundTaskBase@@@std@@0@Z
        MCAPI bool operator()(
            std::shared_ptr<class BackgroundTaskBase> const& lhs,
            std::shared_ptr<class BackgroundTaskBase> const& rhs
        ) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BackgroundTaskBase& operator=(BackgroundTaskBase const&);
    BackgroundTaskBase(BackgroundTaskBase const&);
    BackgroundTaskBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BackgroundTaskBase@@UEAA@XZ
    virtual ~BackgroundTaskBase();

    // symbol: ??0BackgroundTaskBase@@QEAA@V?$not_null@PEAVIBackgroundTaskOwner@@@gsl@@AEBUTaskStartInfoBase@@_N@Z
    MCAPI BackgroundTaskBase(
        gsl::not_null<class IBackgroundTaskOwner*> group,
        struct TaskStartInfoBase const&            startInfo,
        bool                                       isAsync
    );

    // symbol: ?_makeOrphan@BackgroundTaskBase@@QEAAXXZ
    MCAPI void _makeOrphan();

    // symbol: ?canBeRunBy@BackgroundTaskBase@@QEBA_NVid@thread@std@@@Z
    MCAPI bool canBeRunBy(std::thread::id workerId) const;

    // symbol: ?getGroup@BackgroundTaskBase@@QEAAPEAVIBackgroundTaskOwner@@XZ
    MCAPI class IBackgroundTaskOwner* getGroup();

    // symbol: ?getGroupState@BackgroundTaskBase@@QEBA?AW4TaskGroupState@@XZ
    MCAPI ::TaskGroupState getGroupState() const;

    // symbol: ?getNext@BackgroundTaskBase@@QEAA?AV?$shared_ptr@VBackgroundTaskBase@@@std@@XZ
    MCAPI std::shared_ptr<class BackgroundTaskBase> getNext();

    // symbol: ?getPrev@BackgroundTaskBase@@QEAAPEAV1@XZ
    MCAPI class BackgroundTaskBase* getPrev();

    // symbol:
    // ?getStartAfterTime@BackgroundTaskBase@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@XZ
    MCAPI std::chrono::steady_clock::time_point getStartAfterTime() const;

    // symbol: ?hasAffinity@BackgroundTaskBase@@QEBA_NXZ
    MCAPI bool hasAffinity() const;

    // symbol: ?isAsync@BackgroundTaskBase@@QEBA_NXZ
    MCAPI bool isAsync() const;

    // symbol: ?isOrphaned@BackgroundTaskBase@@QEBA_NXZ
    MCAPI bool isOrphaned() const;

    // symbol:
    // ?isReadyToStart@BackgroundTaskBase@@QEBA_NV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI bool isReadyToStart(std::chrono::steady_clock::time_point t) const;

    // symbol: ?setNext@BackgroundTaskBase@@QEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
    MCAPI void setNext(std::shared_ptr<class BackgroundTaskBase> next);

    // symbol: ?setPrev@BackgroundTaskBase@@QEAAXPEAV1@@Z
    MCAPI void setPrev(class BackgroundTaskBase* prev);

    // symbol:
    // ?setStartAfterTime@BackgroundTaskBase@@QEAAXV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI void setStartAfterTime(std::chrono::steady_clock::time_point t);

    // symbol: ?setSyncPriority@BackgroundTaskBase@@QEAAXXZ
    MCAPI void setSyncPriority();

    // symbol: ?getCurrent@BackgroundTaskBase@@SAPEAV1@XZ
    MCAPI static class BackgroundTaskBase* getCurrent();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?backDownPriority@BackgroundTaskBase@@IEAAXXZ
    MCAPI void backDownPriority();

    // symbol: ?taskComplete@BackgroundTaskBase@@IEAAXXZ
    MCAPI void taskComplete();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?gCurrentTask@BackgroundTaskBase@@0PEAV1@EA
    MCAPI static class BackgroundTaskBase* gCurrentTask;

    // NOLINTEND
};
