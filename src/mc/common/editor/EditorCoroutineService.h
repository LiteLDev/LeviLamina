#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorCoroutineServiceProvider.h"
#include "mc/common/editor/Generator.h"
#include "mc/common/editor/Task.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct CoroutineStatus; }
namespace Editor::Coroutine { struct TaskHandle; }
namespace brstd { struct source_location; }
// clang-format on

namespace Editor::Services {

class EditorCoroutineService : public ::Editor::Services::IEditorService,
                               public ::Editor::Services::EditorCoroutineServiceProvider {
public:
    // EditorCoroutineService inner types declare
    // clang-format off
    struct ActiveTask;
    struct CompletedInfo;
    struct TaskDiagnostics;
    // clang-format on

    // EditorCoroutineService inner types define
    struct ActiveTask {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk3898c6;
        ::ll::UntypedStorage<8, 8>  mUnk99edce;
        ::ll::UntypedStorage<8, 32> mUnk397bb3;
        ::ll::UntypedStorage<8, 16> mUnkcc0610;
        ::ll::UntypedStorage<8, 40> mUnkf62bd8;
        ::ll::UntypedStorage<8, 64> mUnkcb86bd;
        ::ll::UntypedStorage<8, 8>  mUnk77501b;
        ::ll::UntypedStorage<8, 8>  mUnk5b9f86;
        ::ll::UntypedStorage<4, 4>  mUnk32a9f7;
        ::ll::UntypedStorage<1, 1>  mUnkba9ee8;
        ::ll::UntypedStorage<1, 1>  mUnk31e65b;
        ::ll::UntypedStorage<1, 1>  mUnk2c56ea;
        ::ll::UntypedStorage<1, 1>  mUnk289b00;
        ::ll::UntypedStorage<1, 1>  mUnkae24eb;
        ::ll::UntypedStorage<1, 1>  mUnk51b856;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActiveTask& operator=(ActiveTask const&);
        ActiveTask(ActiveTask const&);
        ActiveTask();
    };

    struct CompletedInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk2ce6db;
        ::ll::UntypedStorage<8, 64> mUnk4d9d9b;
        ::ll::UntypedStorage<1, 1>  mUnkad6f2d;
        // NOLINTEND

    public:
        // prevent constructor by default
        CompletedInfo& operator=(CompletedInfo const&);
        CompletedInfo(CompletedInfo const&);
        CompletedInfo();
    };

    struct TaskDiagnostics {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk47490d;
        ::ll::UntypedStorage<8, 8> mUnka3a6c3;
        ::ll::UntypedStorage<1, 1> mUnkd0e765;
        // NOLINTEND

    public:
        // prevent constructor by default
        TaskDiagnostics& operator=(TaskDiagnostics const&);
        TaskDiagnostics(TaskDiagnostics const&);
        TaskDiagnostics();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk2ef6b7;
    ::ll::UntypedStorage<8, 8>  mUnk4552fa;
    ::ll::UntypedStorage<8, 8>  mUnk77bca3;
    ::ll::UntypedStorage<1, 1>  mUnk9b6f27;
    ::ll::UntypedStorage<1, 1>  mUnkdeb120;
    ::ll::UntypedStorage<8, 16> mUnkc9a815;
    ::ll::UntypedStorage<8, 8>  mUnkbae532;
    ::ll::UntypedStorage<8, 64> mUnkb0b5cb;
    ::ll::UntypedStorage<8, 8>  mUnk564f23;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorCoroutineService& operator=(EditorCoroutineService const&);
    EditorCoroutineService(EditorCoroutineService const&);
    EditorCoroutineService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorCoroutineService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Editor::Coroutine::TaskHandle queue(
        ::std::string                                    name,
        ::Editor::Generator<::Editor::CoroutineStatus>&& coroutine,
        ::std::function<void(uint64, bool)>              onComplete,
        uint64                                           ownerId,
        ::brstd::source_location                         creationSite
    ) /*override*/;

    virtual ::Editor::Coroutine::TaskHandle queueTask(
        ::std::string                                     name,
        ::Editor::Task<void, ::Editor::CoroutineStatus>&& task,
        ::std::function<void(uint64, bool)>               onComplete,
        uint64                                            ownerId,
        ::brstd::source_location                          creationSite
    ) /*override*/;

    virtual bool cancel(::Editor::Coroutine::TaskHandle handle) /*override*/;

    virtual void cancelAll() /*override*/;

    virtual uint64 cancelForOwner(uint64 ownerId) /*override*/;

    virtual uint64 allocateOwnerId() /*override*/;

    virtual uint64 activeTaskCount() const /*override*/;

    virtual uint64 activeTaskCountForOwner(uint64 ownerId) const /*override*/;

    virtual bool hasActiveTasks() const /*override*/;

    virtual ::Editor::CoroutineStatus const* getTaskStatus(::Editor::Coroutine::TaskHandle handle) const /*override*/;

    virtual ::std::string const* getTaskName(::Editor::Coroutine::TaskHandle handle) const /*override*/;

    virtual uint64 pump(::std::chrono::microseconds budget) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorCoroutineService(
        ::Editor::ServiceProviderCollection&                       providers,
        ::Scheduler&                                               scheduler,
        ::std::function<::std::chrono::steady_clock::time_point()> now
    );

    MCNAPI void _armPump();

    MCNAPI void _watchdogUnregister(uint64 id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& ServiceName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                       providers,
        ::Scheduler&                                               scheduler,
        ::std::function<::std::chrono::steady_clock::time_point()> now
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Editor::Coroutine::TaskHandle $queue(
        ::std::string                                    name,
        ::Editor::Generator<::Editor::CoroutineStatus>&& coroutine,
        ::std::function<void(uint64, bool)>              onComplete,
        uint64                                           ownerId,
        ::brstd::source_location                         creationSite
    );

    MCNAPI ::Editor::Coroutine::TaskHandle $queueTask(
        ::std::string                                     name,
        ::Editor::Task<void, ::Editor::CoroutineStatus>&& task,
        ::std::function<void(uint64, bool)>               onComplete,
        uint64                                            ownerId,
        ::brstd::source_location                          creationSite
    );

    MCNAPI bool $cancel(::Editor::Coroutine::TaskHandle handle);

    MCNAPI void $cancelAll();

    MCNAPI uint64 $cancelForOwner(uint64 ownerId);

    MCNAPI uint64 $allocateOwnerId();

    MCNAPI uint64 $activeTaskCount() const;

    MCNAPI uint64 $activeTaskCountForOwner(uint64 ownerId) const;

    MCNAPI bool $hasActiveTasks() const;

    MCNAPI ::Editor::CoroutineStatus const* $getTaskStatus(::Editor::Coroutine::TaskHandle handle) const;

    MCNAPI ::std::string const* $getTaskName(::Editor::Coroutine::TaskHandle handle) const;

    MCNAPI uint64 $pump(::std::chrono::microseconds budget);


    // NOLINTEND
};

} // namespace Editor::Services
