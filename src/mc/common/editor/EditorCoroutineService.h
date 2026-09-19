#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorCoroutineServiceProvider.h"
#include "mc/common/editor/Generator.h"
#include "mc/common/editor/Task.h"
#include "mc/common/editor/TaskCompletionStatus.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct CoroutineStatus; }
namespace Editor::Coroutine { class CoroutineTaskContext; }
namespace Editor::Coroutine { struct CoroutineTaskOptions; }
namespace Editor::Coroutine { struct OwnerMetadata; }
namespace Editor::Coroutine { struct TaskHandle; }
namespace Editor::Coroutine { struct TaskSnapshot; }
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
    struct OwnerBucket;
    struct PumpContext;
    struct TaskDiagnostics;
    // clang-format on

    // EditorCoroutineService inner types define
    struct ActiveTask {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk3898c6;
        ::ll::UntypedStorage<8, 40> mUnk8cc79e;
        ::ll::UntypedStorage<8, 32> mUnk397bb3;
        ::ll::UntypedStorage<8, 8>  mUnkcbfd1a;
        ::ll::UntypedStorage<8, 16> mUnkcc0610;
        ::ll::UntypedStorage<8, 40> mUnkf62bd8;
        ::ll::UntypedStorage<8, 64> mUnk28dd14;
        ::ll::UntypedStorage<8, 32> mUnk582dca;
        ::ll::UntypedStorage<8, 32> mUnk99ae58;
        ::ll::UntypedStorage<4, 4>  mUnkc52d60;
        ::ll::UntypedStorage<8, 8>  mUnkc6373e;
        ::ll::UntypedStorage<8, 16> mUnk29ddd9;
        ::ll::UntypedStorage<8, 16> mUnkc93396;
        ::ll::UntypedStorage<8, 8>  mUnkb17845;
        ::ll::UntypedStorage<8, 32> mUnk246e5e;
        ::ll::UntypedStorage<8, 8>  mUnk77501b;
        ::ll::UntypedStorage<8, 8>  mUnk5b9f86;
        ::ll::UntypedStorage<4, 4>  mUnk32a9f7;
        ::ll::UntypedStorage<8, 8>  mUnke549c0;
        ::ll::UntypedStorage<8, 8>  mUnk9354fe;
        ::ll::UntypedStorage<1, 1>  mUnkba9ee8;
        ::ll::UntypedStorage<1, 1>  mUnk31e65b;
        ::ll::UntypedStorage<1, 1>  mUnk2c56ea;
        ::ll::UntypedStorage<1, 1>  mUnka6cc12;
        ::ll::UntypedStorage<1, 1>  mUnk8533cb;
        ::ll::UntypedStorage<1, 1>  mUnkb45f35;
        ::ll::UntypedStorage<1, 1>  mUnkae24eb;
        ::ll::UntypedStorage<1, 1>  mUnk51b856;
        ::ll::UntypedStorage<1, 1>  mUnk3e9a87;
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
        ::ll::UntypedStorage<8, 64> mUnk993c09;
        ::ll::UntypedStorage<8, 8>  mUnk713680;
        ::ll::UntypedStorage<1, 1>  mUnkdd9e95;
        // NOLINTEND

    public:
        // prevent constructor by default
        CompletedInfo& operator=(CompletedInfo const&);
        CompletedInfo(CompletedInfo const&);
        CompletedInfo();
    };

    struct OwnerBucket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnke887e8;
        ::ll::UntypedStorage<8, 40> mUnk849862;
        ::ll::UntypedStorage<8, 8>  mUnk9b4852;
        ::ll::UntypedStorage<8, 8>  mUnkcbb6d6;
        // NOLINTEND

    public:
        // prevent constructor by default
        OwnerBucket& operator=(OwnerBucket const&);
        OwnerBucket(OwnerBucket const&);
        OwnerBucket();
    };

    struct PumpContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk23e920;
        ::ll::UntypedStorage<8, 8> mUnk608989;
        ::ll::UntypedStorage<8, 8> mUnk446074;
        ::ll::UntypedStorage<8, 8> mUnk6161cf;
        ::ll::UntypedStorage<1, 1> mUnkd187b1;
        ::ll::UntypedStorage<1, 1> mUnk1160e1;
        ::ll::UntypedStorage<1, 1> mUnkba2bc1;
        ::ll::UntypedStorage<1, 1> mUnk25b54a;
        ::ll::UntypedStorage<1, 1> mUnkcf17f0;
        ::ll::UntypedStorage<1, 1> mUnk598fce;
        // NOLINTEND

    public:
        // prevent constructor by default
        PumpContext& operator=(PumpContext const&);
        PumpContext(PumpContext const&);
        PumpContext();
    };

    struct TaskDiagnostics {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk47490d;
        ::ll::UntypedStorage<8, 8>  mUnka3a6c3;
        ::ll::UntypedStorage<1, 1>  mUnkd0e765;
        ::ll::UntypedStorage<8, 32> mUnk396d1a;
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
    ::ll::UntypedStorage<8, 16> mUnkac03f6;
    ::ll::UntypedStorage<8, 24> mUnk29c7fa;
    ::ll::UntypedStorage<8, 64> mUnkc5e33d;
    ::ll::UntypedStorage<8, 8>  mUnk4552fa;
    ::ll::UntypedStorage<8, 8>  mUnk77bca3;
    ::ll::UntypedStorage<8, 8>  mUnk65df0d;
    ::ll::UntypedStorage<8, 8>  mUnke6566e;
    ::ll::UntypedStorage<8, 8>  mUnkef5ec4;
    ::ll::UntypedStorage<1, 1>  mUnk9b6f27;
    ::ll::UntypedStorage<1, 1>  mUnk7253a8;
    ::ll::UntypedStorage<1, 1>  mUnkdeb120;
    ::ll::UntypedStorage<8, 8>  mUnk9daa0e;
    ::ll::UntypedStorage<8, 16> mUnkc9a815;
    ::ll::UntypedStorage<8, 8>  mUnkbae532;
    ::ll::UntypedStorage<8, 64> mUnkb0b5cb;
    ::ll::UntypedStorage<8, 64> mUnk7fcca3;
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
        ::std::string                                                            name,
        ::Editor::Generator<::Editor::CoroutineStatus>&&                         coroutine,
        ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)> onComplete,
        uint64                                                                   ownerId,
        ::brstd::source_location                                                 creationSite
    ) /*override*/;

    virtual ::Editor::Coroutine::TaskHandle queueTask(
        ::std::string                                                            name,
        ::Editor::Task<void, ::Editor::CoroutineStatus>&&                        task,
        ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)> onComplete,
        uint64                                                                   ownerId,
        ::brstd::source_location                                                 creationSite
    ) /*override*/;

    virtual bool cancel(::Editor::Coroutine::TaskHandle handle) /*override*/;

    virtual void cancelAll() /*override*/;

    virtual uint64 cancelForOwner(uint64 ownerId) /*override*/;

    virtual uint64 allocateOwnerId() /*override*/;

    virtual bool updateOwnerMetadata(::Editor::Coroutine::OwnerMetadata metadata) /*override*/;

    virtual void releaseOwnerId(uint64 ownerId) /*override*/;

    virtual uint64 activeTaskCount() const /*override*/;

    virtual uint64 activeTaskCountForOwner(uint64 ownerId) const /*override*/;

    virtual bool hasActiveTasks() const /*override*/;

    virtual ::Editor::CoroutineStatus const* getTaskStatus(::Editor::Coroutine::TaskHandle handle) const /*override*/;

    virtual ::std::string const* getTaskName(::Editor::Coroutine::TaskHandle handle) const /*override*/;

    virtual ::std::vector<::Editor::Coroutine::TaskSnapshot> getTaskSnapshots() const /*override*/;

    virtual uint64 pump(::std::chrono::microseconds budget) /*override*/;

    virtual ::Editor::Coroutine::TaskHandle _queueTaskFactory(
        ::std::string                             name,
        ::Editor::Coroutine::CoroutineTaskOptions options,
        ::brstd::move_only_function<
            ::Editor::Task<void, ::Editor::CoroutineStatus>(::Editor::Coroutine::CoroutineTaskContext&)> factory,
        ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)>                         onComplete,
        uint64                                                                                           ownerId,
        ::brstd::source_location                                                                         creationSite
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorCoroutineService(
        ::Editor::ServiceProviderCollection&                            providers,
        ::Scheduler&                                                    scheduler,
        ::std::function<::std::chrono::steady_clock::time_point()>      now,
        ::std::function<void(::Editor::Coroutine::TaskSnapshot const&)> possiblyHungSink
    );

    MCNAPI ::Editor::Coroutine::TaskHandle _enqueue(
        uint64                                                         id,
        ::Editor::Coroutine::OwnerMetadata                             owner,
        ::std::string                                                  name,
        ::std::unique_ptr<::Editor::Coroutine::CoroutineTaskContext>&& taskContext,
        ::std::variant<
            ::Editor::Generator<::Editor::CoroutineStatus>,
            ::Editor::Task<void, ::Editor::CoroutineStatus>>&&                   coroutine,
        ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)> onComplete,
        ::brstd::source_location const&                                          creationSite
    );

    MCNAPI ::Editor::Coroutine::OwnerMetadata _getOwnerMetadata(uint64 ownerId) const;

    MCNAPI ::Editor::Coroutine::TaskHandle _queue(
        ::std::string name,
        ::std::variant<
            ::Editor::Generator<::Editor::CoroutineStatus>,
            ::Editor::Task<void, ::Editor::CoroutineStatus>>&&                   coroutine,
        ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)> onComplete,
        uint64                                                                   ownerId,
        ::brstd::source_location const&                                          creationSite
    );

    MCNAPI ::std::vector<::Editor::Services::EditorCoroutineService::CompletedInfo> _removePendingTasks();

    MCNAPI void _rotateOwnerTaskAfter(uint64 ownerId, uint64 taskId);

    MCNAPI void _runTask(uint64 taskId, ::Editor::Services::EditorCoroutineService::PumpContext& context);

    MCNAPI void _surfaceWatchdogReports();
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
        ::Editor::ServiceProviderCollection&                            providers,
        ::Scheduler&                                                    scheduler,
        ::std::function<::std::chrono::steady_clock::time_point()>      now,
        ::std::function<void(::Editor::Coroutine::TaskSnapshot const&)> possiblyHungSink
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Editor::Coroutine::TaskHandle $queue(
        ::std::string                                                            name,
        ::Editor::Generator<::Editor::CoroutineStatus>&&                         coroutine,
        ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)> onComplete,
        uint64                                                                   ownerId,
        ::brstd::source_location                                                 creationSite
    );

    MCNAPI ::Editor::Coroutine::TaskHandle $queueTask(
        ::std::string                                                            name,
        ::Editor::Task<void, ::Editor::CoroutineStatus>&&                        task,
        ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)> onComplete,
        uint64                                                                   ownerId,
        ::brstd::source_location                                                 creationSite
    );

    MCNAPI bool $cancel(::Editor::Coroutine::TaskHandle handle);

    MCNAPI void $cancelAll();

    MCNAPI uint64 $cancelForOwner(uint64 ownerId);

    MCNAPI uint64 $allocateOwnerId();

    MCNAPI bool $updateOwnerMetadata(::Editor::Coroutine::OwnerMetadata metadata);

    MCNAPI void $releaseOwnerId(uint64 ownerId);

    MCNAPI uint64 $activeTaskCount() const;

    MCNAPI uint64 $activeTaskCountForOwner(uint64 ownerId) const;

    MCNAPI bool $hasActiveTasks() const;

    MCNAPI ::Editor::CoroutineStatus const* $getTaskStatus(::Editor::Coroutine::TaskHandle handle) const;

    MCNAPI ::std::string const* $getTaskName(::Editor::Coroutine::TaskHandle handle) const;

    MCNAPI ::std::vector<::Editor::Coroutine::TaskSnapshot> $getTaskSnapshots() const;

    MCNAPI uint64 $pump(::std::chrono::microseconds budget);

    MCNAPI ::Editor::Coroutine::TaskHandle $_queueTaskFactory(
        ::std::string                             name,
        ::Editor::Coroutine::CoroutineTaskOptions options,
        ::brstd::move_only_function<
            ::Editor::Task<void, ::Editor::CoroutineStatus>(::Editor::Coroutine::CoroutineTaskContext&)> factory,
        ::std::function<void(uint64, ::Editor::Coroutine::TaskCompletionStatus)>                         onComplete,
        uint64                                                                                           ownerId,
        ::brstd::source_location                                                                         creationSite
    );


    // NOLINTEND
};

} // namespace Editor::Services
