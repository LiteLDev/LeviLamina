#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/Generator.h"
#include "mc/common/editor/Task.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct CoroutineStatus; }
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
        ::std::string                                    name,
        ::Editor::Generator<::Editor::CoroutineStatus>&& coroutine,
        ::std::function<void(uint64, bool)>              onComplete,
        ::brstd::source_location                         creationSite
    ) = 0;

    virtual ::Editor::Coroutine::TaskHandle queueTask(
        ::std::string                                     name,
        ::Editor::Task<void, ::Editor::CoroutineStatus>&& task,
        ::std::function<void(uint64, bool)>               onComplete,
        ::brstd::source_location                          creationSite
    ) = 0;

    virtual bool cancel(::Editor::Coroutine::TaskHandle handle) = 0;

    virtual uint64 cancelAll() = 0;

    virtual ::Editor::CoroutineStatus const* getTaskStatus(::Editor::Coroutine::TaskHandle handle) const = 0;

    virtual ::std::string const* getTaskName(::Editor::Coroutine::TaskHandle handle) const = 0;

    virtual uint64 activeTaskCount() const = 0;
    // NOLINTEND
};

} // namespace Editor::Services
