#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskRunResult.h"
#include "mc/resources/TaskGroupState.h"

// auto generated forward declare list
// clang-format off
class IBackgroundTaskOwner;
class ITaskExecutionContext;
struct TaskStartInfo;
// clang-format on

class BackgroundTaskBase {
public:
    // BackgroundTaskBase inner types declare
    // clang-format off
    class CurrentTaskAutoScope;
    class PendingComparer;
    class PriorityComparer;
    // clang-format on

    // BackgroundTaskBase inner types define
    class CurrentTaskAutoScope {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk209247;
        // NOLINTEND

    public:
        // prevent constructor by default
        CurrentTaskAutoScope& operator=(CurrentTaskAutoScope const&);
        CurrentTaskAutoScope(CurrentTaskAutoScope const&);
        CurrentTaskAutoScope();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit CurrentTaskAutoScope(::BackgroundTaskBase* curr);

        MCNAPI ~CurrentTaskAutoScope();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::BackgroundTaskBase* curr);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class PendingComparer {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator()(
            ::std::shared_ptr<::BackgroundTaskBase> const& lhs,
            ::std::shared_ptr<::BackgroundTaskBase> const& rhs
        ) const;
        // NOLINTEND
    };

    class PriorityComparer {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk2ebc0e;
    ::ll::UntypedStorage<8, 8>  mUnk7e9993;
    ::ll::UntypedStorage<8, 8>  mUnk2e5c7a;
    ::ll::UntypedStorage<8, 16> mUnk2bac6e;
    ::ll::UntypedStorage<4, 4>  mUnkb3642a;
    ::ll::UntypedStorage<4, 4>  mUnk96ebbd;
    ::ll::UntypedStorage<4, 4>  mUnkcad031;
    ::ll::UntypedStorage<8, 8>  mUnk8b825b;
    ::ll::UntypedStorage<8, 32> mUnk855f70;
    ::ll::UntypedStorage<1, 1>  mUnk3605cd;
    // NOLINTEND

public:
    // prevent constructor by default
    BackgroundTaskBase& operator=(BackgroundTaskBase const&);
    BackgroundTaskBase(BackgroundTaskBase const&);
    BackgroundTaskBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BackgroundTaskBase();

    virtual void cancel() = 0;

    virtual bool isReady() const = 0;

    virtual ::TaskRunResult run(::ITaskExecutionContext const* executionContext, bool isAsyncContext) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    BackgroundTaskBase(::gsl::not_null<::IBackgroundTaskOwner*> group, ::TaskStartInfo const& startInfo, bool isAsync);

    MCNAPI void _makeOrphan();

    MCNAPI void backDownPriority();

    MCNAPI bool canBeRunBy(::std::thread::id workerId) const;

    MCNAPI ::IBackgroundTaskOwner* getGroup();

    MCNAPI ::TaskGroupState getGroupState() const;

    MCNAPI ::std::shared_ptr<::BackgroundTaskBase> getNext();

    MCNAPI ::BackgroundTaskBase* getPrev();

    MCNAPI ::std::chrono::steady_clock::time_point getStartAfterTime() const;

    MCNAPI bool hasAffinity() const;

    MCNAPI bool isAsync() const;

    MCNAPI bool isOrphaned() const;

    MCNAPI bool isReadyToStart(::std::chrono::steady_clock::time_point t) const;

    MCNAPI void setNext(::std::shared_ptr<::BackgroundTaskBase> next);

    MCNAPI void setPrev(::BackgroundTaskBase* prev);

    MCNAPI void setStartAfterTime(::std::chrono::steady_clock::time_point t);

    MCNAPI void setSyncPriority();

    MCNAPI void taskComplete();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BackgroundTaskBase* getCurrent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BackgroundTaskBase*& gCurrentTask();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<::IBackgroundTaskOwner*> group, ::TaskStartInfo const& startInfo, bool isAsync);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
