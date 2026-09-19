#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/Generator.h"
#include "mc/common/editor/Task.h"
#include "mc/common/editor/TaskCompletionStatus.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct CoroutineStatus; }
namespace Editor::Coroutine { class CoroutineTaskContext; }
namespace Editor::Coroutine { struct CoroutineTaskOptions; }
namespace Editor::Coroutine { struct OwnerMetadata; }
namespace Editor::Coroutine { struct TaskHandle; }
namespace Editor::Coroutine { struct TaskSnapshot; }
namespace brstd { struct source_location; }
// clang-format on

namespace Editor::Services {

class EditorCoroutineServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorCoroutineServiceProvider() = default;

    virtual ::Editor::Coroutine::TaskHandle queue(
        ::std::string                                                            name,
        ::Editor::Generator<::Editor::CoroutineStatus>&&                         coroutine,
        ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)> onComplete,
        uint64                                                                   ownerId,
        ::brstd::source_location                                                 creationSite
    ) = 0;

    virtual ::Editor::Coroutine::TaskHandle queueTask(
        ::std::string                                                            name,
        ::Editor::Task<void, ::Editor::CoroutineStatus>&&                        task,
        ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)> onComplete,
        uint64                                                                   ownerId,
        ::brstd::source_location                                                 creationSite
    ) = 0;

    virtual bool cancel(::Editor::Coroutine::TaskHandle handle) = 0;

    virtual void cancelAll() = 0;

    virtual uint64 cancelForOwner(uint64 ownerId) = 0;

    virtual uint64 allocateOwnerId() = 0;

    virtual bool updateOwnerMetadata(::Editor::Coroutine::OwnerMetadata metadata) = 0;

    virtual void releaseOwnerId(uint64 ownerId) = 0;

    virtual uint64 activeTaskCount() const = 0;

    virtual uint64 activeTaskCountForOwner(uint64 ownerId) const = 0;

    virtual bool hasActiveTasks() const = 0;

    virtual ::Editor::CoroutineStatus const* getTaskStatus(::Editor::Coroutine::TaskHandle handle) const = 0;

    virtual ::std::string const* getTaskName(::Editor::Coroutine::TaskHandle handle) const = 0;

    virtual ::std::vector<::Editor::Coroutine::TaskSnapshot> getTaskSnapshots() const = 0;

    virtual uint64 pump(::std::chrono::microseconds budget) = 0;

    virtual ::Editor::Coroutine::TaskHandle _queueTaskFactory(
        ::std::string                             name,
        ::Editor::Coroutine::CoroutineTaskOptions options,
        ::brstd::move_only_function<
            ::Editor::Task<void, ::Editor::CoroutineStatus>(::Editor::Coroutine::CoroutineTaskContext&)> factory,
        ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)>                         onComplete,
        uint64                                                                                           ownerId,
        ::brstd::source_location                                                                         creationSite
    ) = 0;
    // NOLINTEND
};

} // namespace Editor::Services
