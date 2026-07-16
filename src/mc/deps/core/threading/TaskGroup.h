#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/IBackgroundTaskOwner.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/editor/services/playtest/SessionResult.h"
#include "mc/network/services/signaling/ISignalingServiceConfigProvider.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/platform/brstd/promise.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/resources/TaskGroupState.h"
#include "mc/server/commands/edu/make_code_fileio/MakeCodeFileResult.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class Pack;
class ResourcePack;
class Scheduler;
class TaskResult;
class WorkerPool;
class WorldPacksHistoryFile;
struct AsyncJoinAllow;
struct AsyncJoinDeny;
struct MinecraftServiceKeyInfo;
struct MinecraftServiceKeysMetadata;
struct PackSourceLoadResult;
struct TaskStartInfo;
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { struct Url; }
namespace Bedrock::Services { struct AzureGetTokenHttpResponse; }
namespace Bedrock::Services { struct EnvironmentQueryResponse; }
namespace Bedrock::Threading { struct CachedAsyncRetry; }
namespace Json { class Value; }
namespace JsonRpc { class JsonRpcError; }
namespace JsonRpc { class TurnConfigResult; }
namespace MakeCodeFileIO { struct MakeCodeFileIOReadResult; }
namespace PackCommand { struct PackCommandResult; }
namespace RepositoryLoading { struct PackModifications; }
namespace Safety { struct TextFilterResult; }
// clang-format on

class TaskGroup : public ::IBackgroundTaskOwner {
public:
    // TaskGroup inner types declare
    // clang-format off
    template<typename T0> class ThenableBase;
    // clang-format on

    // TaskGroup inner types define
    template <typename T0>
    class ThenableBase {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Scheduler>>  mScheduler;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::WorkerPool>> mWorkers;
    ::ll::TypedStorage<8, 32, ::std::string>                            mName;
    ::ll::TypedStorage<1, 1, bool>                                      mCheckOwnerThread;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>              mLock;
    ::ll::TypedStorage<4, 4, ::std::atomic<::TaskGroupState>>           mState;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BackgroundTaskBase>>  mTasks;
    ::ll::TypedStorage<8, 8, uint64>                                    mTaskCount;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BackgroundTaskBase>>  mEnumCurr;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BackgroundTaskBase>>  mEnumNext;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>        mResumeTaskHandle;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>              mResumeTaskMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Threading::Async<void> queue_DEPRECATED(
        ::TaskStartInfo const&,
        ::brstd::move_only_function<::TaskResult()>&&,
        ::std::function<void()>&&
    ) /*override*/;

    virtual ::Bedrock::Threading::Async<void>
    queueSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<::TaskResult()>&&) /*override*/;

    virtual ~TaskGroup() /*override*/;

    virtual void taskRegister(::std::shared_ptr<::BackgroundTaskBase>) /*override*/;

    virtual void requeueTask(::std::shared_ptr<::BackgroundTaskBase>, bool) /*override*/;

    virtual ::TaskGroupState getState() const /*override*/;

    virtual void processCoroutines() /*override*/;

    virtual void taskComplete(::gsl::not_null<::BackgroundTaskBase*>) /*override*/;

    virtual bool _workerPoolIsAsync() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TaskGroup(::WorkerPool& workers, ::Scheduler& context, ::std::string name);

    MCAPI void _doWorkUntil(::Bedrock::Threading::SharedAsync<void> task, ::brstd::promise<void>* workStarted);

    MCAPI void _queueInternal(::std::shared_ptr<::BackgroundTaskBase> bgtask);

#ifdef LL_PLAT_C
    MCAPI uint64 count() const;
#endif

    MCAPI void flush(::std::function<void()> waitFn);

    MCAPI bool isEmpty() const;

#ifdef LL_PLAT_C
    MCAPI void resume();
#endif

    MCAPI void sync_DEPRECATED_ASK_TOMMO(::std::function<void()> waitFn);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Threading::Async<void>
    queueChildSync_DEPRECATED(::TaskStartInfo const& startInfo, ::brstd::move_only_function<::TaskResult()>&& task);

    MCAPI static ::Bedrock::Threading::Async<void> queueChild_DEPRECATED(
        ::TaskStartInfo const&                        startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WorkerPool& workers, ::Scheduler& context, ::std::string name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
