#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"
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
    class CurrentTaskAutoScope {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BackgroundTaskBase*> mPrev;
        // NOLINTEND
    };

    class PendingComparer {};

    class PriorityComparer {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                               mIsAsync;
    ::ll::TypedStorage<8, 8, ::IBackgroundTaskOwner*>                  mGroup;
    ::ll::TypedStorage<8, 8, ::BackgroundTaskBase*>                    mPrevTask;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BackgroundTaskBase>> mNextTask;
    ::ll::TypedStorage<4, 4, int>                                      mPriority;
    ::ll::TypedStorage<4, 4, ::std::thread::id>                        mAffinity;
    ::ll::TypedStorage<4, 4, int const>                                mBackDownPriorityAmount;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>  mStartAfterTime;
    ::ll::TypedStorage<8, 32, ::std::string>                           mTaskName;
    ::ll::TypedStorage<1, 1, ::Memory::MemoryCategory>                 mMemoryCategory;
    // NOLINTEND

public:
    // prevent constructor by default
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
    MCAPI
    BackgroundTaskBase(::gsl::not_null<::IBackgroundTaskOwner*> group, ::TaskStartInfo const& startInfo, bool isAsync);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BackgroundTaskBase*& gCurrentTask();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::gsl::not_null<::IBackgroundTaskOwner*> group, ::TaskStartInfo const& startInfo, bool isAsync);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
