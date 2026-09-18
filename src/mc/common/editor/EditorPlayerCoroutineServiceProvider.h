#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/Generator.h"
#include "mc/common/editor/Task.h"
#include "mc/common/editor/TaskCompletionStatus.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { struct CoroutineStatus; }
namespace Editor::Coroutine { class CoroutineTaskContext; }
namespace Editor::Coroutine { struct CoroutineTaskOptions; }
namespace Editor::Coroutine { struct TaskHandle; }
namespace brstd { struct source_location; }
// clang-format on

namespace Editor::Services {

class EditorPlayerCoroutineServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorPlayerCoroutineServiceProvider() = default;

    virtual ::Editor::Coroutine::TaskHandle queue(
        ::std::string                                                            name,
        ::Editor::Generator<::Editor::CoroutineStatus>&&                         coroutine,
        ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)> onComplete,
        ::brstd::source_location                                                 creationSite
    ) = 0;

    virtual ::Editor::Coroutine::TaskHandle queueTask(
        ::std::string                                                            name,
        ::Editor::Task<void, ::Editor::CoroutineStatus>&&                        task,
        ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)> onComplete,
        ::brstd::source_location                                                 creationSite
    ) = 0;

    virtual bool cancel(::Editor::Coroutine::TaskHandle handle) = 0;

    virtual uint64 cancelAll() = 0;

    virtual ::Editor::CoroutineStatus const* getTaskStatus(::Editor::Coroutine::TaskHandle handle) const = 0;

    virtual ::std::string const* getTaskName(::Editor::Coroutine::TaskHandle handle) const = 0;

    virtual uint64 activeTaskCount() const = 0;

    virtual ::Bedrock::PubSub::Subscription registerBusyStateChangedListener(::std::function<void(bool)> callback) = 0;

    virtual ::Editor::Coroutine::TaskHandle _queueTaskFactory(
        ::std::string                             name,
        ::Editor::Coroutine::CoroutineTaskOptions options,
        ::brstd::move_only_function<
            ::Editor::Task<void, ::Editor::CoroutineStatus>(::Editor::Coroutine::CoroutineTaskContext&)> factory,
        ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)>                         onComplete,
        ::brstd::source_location                                                                         creationSite
    ) = 0;
    // NOLINTEND
};

} // namespace Editor::Services
