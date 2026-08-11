#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/resources/TaskGroupState.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class TaskResult;
struct TaskStartInfo;
// clang-format on

class IBackgroundTaskOwner {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBackgroundTaskOwner() = default;

    virtual ::Bedrock::Threading::Async<void> queue_DEPRECATED(
        ::TaskStartInfo const&                        startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    ) = 0;

    virtual ::Bedrock::Threading::Async<void>
    queueSync_DEPRECATED(::TaskStartInfo const& startInfo, ::brstd::move_only_function<::TaskResult()>&& task) = 0;

    virtual void taskRegister(::std::shared_ptr<::BackgroundTaskBase> task) = 0;

    virtual void requeueTask(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate) = 0;

    virtual ::TaskGroupState getState() const = 0;

    virtual void processCoroutines() = 0;

    virtual void taskComplete(::gsl::not_null<::BackgroundTaskBase*> task) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
