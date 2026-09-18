#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/TaskCompletionStatus.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Coroutine { struct TaskHandle; }
namespace Editor::Services { class EditorPlayerCoroutineServiceProvider; }
// clang-format on

namespace Editor::Coroutine::Test {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::Editor::Coroutine::TaskHandle> queueLongRunningTasks(
    ::Editor::Services::EditorPlayerCoroutineServiceProvider&                coroutineService,
    ::Editor::ServiceProviderCollection&                                     providers,
    ::std::chrono::nanoseconds                                               duration,
    uint                                                                     taskCount,
    ::std::chrono::nanoseconds                                               maxStagger,
    ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)> onComplete
);
// NOLINTEND

} // namespace Editor::Coroutine::Test
