#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroupState.h"
#include "mc/platform/brstd/move_only_function.h"

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
    // vIndex: 0
    virtual ~IBackgroundTaskOwner() = default;

    // vIndex: 1
    virtual ::Bedrock::Threading::Async<void> queue_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<::TaskResult()>&&, ::std::function<void()>&&) = 0;

    // vIndex: 2
    virtual ::Bedrock::Threading::Async<void> queueSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<::TaskResult()>&&) = 0;

    // vIndex: 3
    virtual void taskRegister(::std::shared_ptr<::BackgroundTaskBase>) = 0;

    // vIndex: 4
    virtual void requeueTask(::std::shared_ptr<::BackgroundTaskBase>, bool) = 0;

    // vIndex: 5
    virtual ::TaskGroupState getState() const = 0;

    // vIndex: 6
    virtual void processCoroutines() = 0;

    // vIndex: 7
    virtual void taskComplete(::gsl::not_null<::BackgroundTaskBase*>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
