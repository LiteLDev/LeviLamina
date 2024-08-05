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
        MCAPI explicit CurrentTaskAutoScope(class BackgroundTaskBase* curr);

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
    // vIndex: 0
    virtual ~BackgroundTaskBase();

    MCAPI BackgroundTaskBase(
        gsl::not_null<class IBackgroundTaskOwner*> group,
        struct TaskStartInfoBase const&            startInfo,
        bool                                       isAsync
    );

    MCAPI bool canBeRunBy(std::thread::id workerId) const;

    MCAPI class IBackgroundTaskOwner* getGroup();

    MCAPI ::TaskGroupState getGroupState() const;

    MCAPI std::chrono::steady_clock::time_point getStartAfterTime() const;

    MCAPI bool hasAffinity() const;

    MCAPI bool isAsync() const;

    MCAPI bool isReadyToStart(std::chrono::steady_clock::time_point t) const;

    MCAPI void setNext(std::shared_ptr<class BackgroundTaskBase> next);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void taskComplete();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BackgroundTaskBase* gCurrentTask;

    // NOLINTEND
};
