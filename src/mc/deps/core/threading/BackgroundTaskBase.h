#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroupState.h"
#include "mc/deps/core/threading/TaskRunResult.h"

// auto generated forward declare list
// clang-format off
class IBackgroundTaskOwner;
class ITaskExecutionContext;
struct TaskStartInfoBase;
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
    class PriorityComparer {};

    class PendingComparer {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator()(
            ::std::shared_ptr<::BackgroundTaskBase> const& lhs,
            ::std::shared_ptr<::BackgroundTaskBase> const& rhs
        ) const;
        // NOLINTEND
    };

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
        MCAPI explicit CurrentTaskAutoScope(::BackgroundTaskBase* curr);

        MCAPI ~CurrentTaskAutoScope();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::BackgroundTaskBase* curr);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

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
    // NOLINTEND

public:
    // prevent constructor by default
    BackgroundTaskBase& operator=(BackgroundTaskBase const&);
    BackgroundTaskBase(BackgroundTaskBase const&);
    BackgroundTaskBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BackgroundTaskBase();

    // vIndex: 1
    virtual void cancel() = 0;

    // vIndex: 2
    virtual bool isReady() const = 0;

    // vIndex: 3
    virtual ::TaskRunResult run(::ITaskExecutionContext const*) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BackgroundTaskBase(
        ::gsl::not_null<::IBackgroundTaskOwner*> group,
        ::TaskStartInfoBase const&               startInfo,
        bool                                     isAsync
    );

    MCAPI void _makeOrphan();

    MCAPI void backDownPriority();

    MCAPI bool canBeRunBy(::std::thread::id workerId) const;

    MCAPI ::IBackgroundTaskOwner* getGroup();

    MCAPI ::TaskGroupState getGroupState() const;

    MCAPI ::std::shared_ptr<::BackgroundTaskBase> getNext();

    MCAPI ::BackgroundTaskBase* getPrev();

    MCAPI ::std::chrono::steady_clock::time_point getStartAfterTime() const;

    MCAPI bool hasAffinity() const;

    MCAPI bool isAsync() const;

    MCAPI bool isOrphaned() const;

    MCAPI bool isReadyToStart(::std::chrono::steady_clock::time_point t) const;

    MCAPI void setNext(::std::shared_ptr<::BackgroundTaskBase> next);

    MCAPI void setPrev(::BackgroundTaskBase* prev);

    MCAPI void setStartAfterTime(::std::chrono::steady_clock::time_point t);

    MCAPI void setSyncPriority();

    MCAPI void taskComplete();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BackgroundTaskBase* getCurrent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BackgroundTaskBase*& gCurrentTask();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::gsl::not_null<::IBackgroundTaskOwner*> group, ::TaskStartInfoBase const& startInfo, bool isAsync);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
