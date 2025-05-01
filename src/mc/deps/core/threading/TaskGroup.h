#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/SessionResult.h"
#include "mc/deps/application/crash_manager/CrashFileProcessor.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/threading/IBackgroundTaskOwner.h"
#include "mc/deps/core/threading/TaskGroupState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Promise.h"
#include "mc/editor/services/export/ExportResult.h"
#include "mc/platform/Copyable.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/util/DownloaderState.h"
#include "mc/world/level/FileArchiver.h"
#include "mc/world/level/saveddata/maps/MapItemSavedData.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class BackgroundTaskBase;
class BlockPos;
class BlockSource;
class ChunkViewSource;
class CommandOrigin;
class CommandOutput;
class Dimension;
class IContentAccessibilityProvider;
class IContentKeyProvider;
class IFileAccess;
class IMinecraftEventing;
class Level;
class LevelChunk;
class LevelData;
class LevelDbEnv;
class MapItemSavedData;
class PackManifestFactory;
class PackSourceFactory;
class ResourceLocation;
class RopeSystem;
class Scheduler;
class TaskResult;
class WeakEntityRef;
class WorkerPool;
struct Brightness;
struct DBStorageConfig;
struct FileChunkInfo;
struct HC_CALL;
struct ServicePack;
struct TaskStartInfo;
namespace Bedrock { class CrashFileProcessor; }
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { class Status; }
namespace Bedrock::Threading { class Mutex; }
namespace Core { class FilePathManager; }
namespace Core { class Path; }
namespace Core::ZipUtils { struct ZipProgressList; }
namespace Editor { class GameOptions; }
namespace Json { class Value; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace PositionTrackingDB { class TrackingRecord; }
namespace ScriptModuleMinecraftNet { struct ScriptNetRequest; }
namespace ScriptModuleMinecraftNet { struct ScriptNetResponse; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
namespace Social::Events { class Event; }
namespace WebServices::EduSignin { struct SigninError; }
namespace WebServices::EduSignin { struct SigninResponse; }
// clang-format on

class TaskGroup : public ::IBackgroundTaskOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka60b44;
    ::ll::UntypedStorage<8, 24> mUnk52e5c4;
    ::ll::UntypedStorage<8, 32> mUnkb19a11;
    ::ll::UntypedStorage<1, 1>  mUnk10d96b;
    ::ll::UntypedStorage<8, 80> mUnk77531a;
    ::ll::UntypedStorage<4, 4>  mUnk10adf7;
    ::ll::UntypedStorage<8, 16> mUnk5e5b8e;
    ::ll::UntypedStorage<8, 8>  mUnk5bad41;
    ::ll::UntypedStorage<8, 16> mUnkfe21d9;
    ::ll::UntypedStorage<8, 16> mUnke12816;
    ::ll::UntypedStorage<8, 16> mUnk71fca4;
    ::ll::UntypedStorage<8, 80> mUnk6a91ad;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskGroup& operator=(TaskGroup const&);
    TaskGroup(TaskGroup const&);
    TaskGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> queue_DEPRECATED(
        ::TaskStartInfo const&                        startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    ) /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> queueSync_DEPRECATED(
        ::TaskStartInfo const&                        startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task
    ) /*override*/;

    // vIndex: 0
    virtual ~TaskGroup() /*override*/;

    // vIndex: 3
    virtual void taskRegister(::std::shared_ptr<::BackgroundTaskBase> task) /*override*/;

    // vIndex: 4
    virtual void requeueTask(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate) /*override*/;

    // vIndex: 5
    virtual ::TaskGroupState getState() const /*override*/;

    // vIndex: 6
    virtual void processCoroutines() /*override*/;

    // vIndex: 7
    virtual void taskComplete(::gsl::not_null<::BackgroundTaskBase*> task) /*override*/;

    // vIndex: 8
    virtual bool _workerPoolIsAsync() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TaskGroup(::WorkerPool& workers, ::Scheduler& context, ::std::string name);

    MCNAPI void _forAllTasks(
        ::Bedrock::Threading::UniqueLock<::Bedrock::Threading::Mutex>&        lock,
        ::std::function<void(::std::shared_ptr<::BackgroundTaskBase> const&)> callback
    );

    MCNAPI void _queueInternal(::std::shared_ptr<::BackgroundTaskBase> bgtask);

    MCNAPI void flush(::std::function<void()> waitFn);

    MCNAPI bool isEmpty() const;

    MCNAPI void sync_DEPRECATED_ASK_TOMMO(::std::function<void()> waitFn);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::IBackgroundTaskOwner* getCurrentTaskGroup();

    MCNAPI static ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> queueChild_DEPRECATED(
        ::TaskStartInfo const&                        startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorkerPool& workers, ::Scheduler& context, ::std::string name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> $queue_DEPRECATED(
        ::TaskStartInfo const&                        startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    );

    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    $queueSync_DEPRECATED(::TaskStartInfo const& startInfo, ::brstd::move_only_function<::TaskResult()>&& task);

    MCNAPI void $taskRegister(::std::shared_ptr<::BackgroundTaskBase> task);

    MCNAPI void $requeueTask(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate);

    MCNAPI ::TaskGroupState $getState() const;

    MCNAPI void $processCoroutines();

    MCNAPI void $taskComplete(::gsl::not_null<::BackgroundTaskBase*> task);

    MCNAPI bool $_workerPoolIsAsync() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
