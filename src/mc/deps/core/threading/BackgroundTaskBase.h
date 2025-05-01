#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskRunResult.h"

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
    class PriorityComparer {};

    class PendingComparer {};

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
        MCNAPI ~CurrentTaskAutoScope();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    MCNAPI
    BackgroundTaskBase(::gsl::not_null<::IBackgroundTaskOwner*> group, ::TaskStartInfo const& startInfo, bool isAsync);

    MCNAPI void setNext(::std::shared_ptr<::BackgroundTaskBase> next);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BackgroundTaskBase*& gCurrentTask();
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
