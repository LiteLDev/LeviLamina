#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/TaskGroupState.h"

class BackgroundTaskBase {
public:
    // BackgroundTaskBase inner types declare
    // clang-format off
    class CurrentTaskAutoScope;
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
        MCAPI explicit CurrentTaskAutoScope(class BackgroundTaskBase*);

        // symbol: ??1CurrentTaskAutoScope@BackgroundTaskBase@@QEAA@XZ
        MCAPI ~CurrentTaskAutoScope();

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
    MCAPI BackgroundTaskBase(gsl::not_null<class IBackgroundTaskOwner*>, struct TaskStartInfoBase const&, bool);

    // symbol: ?getGroup@BackgroundTaskBase@@QEAAPEAVIBackgroundTaskOwner@@XZ
    MCAPI class IBackgroundTaskOwner* getGroup();

    // symbol: ?getGroupState@BackgroundTaskBase@@QEBA?AW4TaskGroupState@@XZ
    MCAPI ::TaskGroupState getGroupState() const;

    // symbol: ?isAsync@BackgroundTaskBase@@QEBA_NXZ
    MCAPI bool isAsync() const;

    // symbol: ?setNext@BackgroundTaskBase@@QEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
    MCAPI void setNext(std::shared_ptr<class BackgroundTaskBase>);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?taskComplete@BackgroundTaskBase@@IEAAXXZ
    MCAPI void taskComplete();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?gCurrentTask@BackgroundTaskBase@@0PEAV1@EA
    MCAPI static class BackgroundTaskBase* gCurrentTask;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $gCurrentTask() { return gCurrentTask; }

    // NOLINTEND
};
