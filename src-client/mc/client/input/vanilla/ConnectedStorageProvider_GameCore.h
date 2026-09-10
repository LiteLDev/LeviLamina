#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/RemoteStorageProvider.h"
#include "mc/deps/core/file/StorageResult.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/util/CallbackTokenContext.h"

// auto generated forward declare list
// clang-format off
class CallbackToken;
class CommitChunkSequenceBuilder;
class ConnectedStorageEventing;
class ConnectedStorage_GameCore;
namespace Core { class RemoteProviderInitializer; }
namespace Core { class RemoteStorageManifest; }
namespace Core { class Result; }
namespace Core { struct ContainerOutInfo; }
// clang-format on

class ConnectedStorageProvider_GameCore : public ::Core::RemoteStorageProvider {
public:
    // ConnectedStorageProvider_GameCore inner types declare
    // clang-format off
    struct CommitSnapshotParameters;
    // clang-format on

    // ConnectedStorageProvider_GameCore inner types define
    struct CommitSnapshotParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            16,
            ::std::shared_ptr<::CallbackTokenContext<::std::function<
                void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>, ::Core::StorageResult)>>>>
                                                                                   context;
        ::ll::TypedStorage<8, 32, ::std::string>                                   containerName;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CommitChunkSequenceBuilder>> commitSequence;
        ::ll::TypedStorage<8, 32, ::std::string>                                   levelName;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>               stagingPath;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>               targetRootDirectory;
        ::ll::TypedStorage<1, 1, bool>                                             isWorldContainer;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ConnectedStorageEventing>>   connectedStorageEventing;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                        mManifestLock;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Core::RemoteStorageManifest>> mManifests;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ConnectedStorage_GameCore>>                     mConnectedStorage;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CommitChunkSequenceBuilder>>                      mCommitChunkSequence;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                                  mStagingLocationRoot;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                       mStorageTasks;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectedStorageProvider_GameCore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConnectedStorageProvider_GameCore() /*override*/ = default;

    virtual void shutdown() /*override*/;

    virtual ::std::string const& getWorldsPrefix() const /*override*/;

    virtual ::std::string encodeWorldName(::std::string const& name) /*override*/;

    virtual ::std::string encodeFileName(::std::string const& name) /*override*/;

    virtual float getSyncProgress() /*override*/;

    virtual void onAppSuspend() /*override*/;

    virtual void onAppResume() /*override*/;

    virtual ::CallbackToken deleteContainer(
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>> context,
        ::std::string const&                                                                           containerName,
        ::std::function<void(uint64)> quotaUpdateCallback
    ) /*override*/;

    virtual ::CallbackToken commit(
        ::std::shared_ptr<::CallbackTokenContext<::std::function<
            void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>, ::Core::StorageResult)>>> context,
        ::std::string const&             containerName,
        ::std::set<::std::string> const& filesToAdd,
        ::std::set<::std::string>&       filesToDelete,
        ::std::set<::std::string>&       HACK_oldFilesToDelete,
        bool                             isRetry,
        ::std::function<void(uint64)>    quotaUpdateCallback
    ) /*override*/;

    virtual ::CallbackToken sync(
        ::std::string const&                                                                           directoryAlias,
        ::std::string const&                                                                           filePrefix,
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>> context,
        ::std::function<void(::std::string const&, bool)> HACK_cleanupInfectedContainersCallback
    ) /*override*/;

    virtual ::CallbackToken syncMeta(
        ::std::string const& directoryAlias,
        ::std::string const&,
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>> context,
        ::std::shared_ptr<::std::vector<::Core::ContainerOutInfo>>                                     cloudLevelsOut
    ) /*override*/;

    virtual ::CallbackToken syncContainerManifest(
        ::std::string const&                                                                           containerName,
        ::std::string const&                                                                           filePrefix,
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>> context
    ) /*override*/;

    virtual ::Core::RemoteStorageManifest getManifest(::std::string const& containerName) /*override*/;

    virtual int64 getQuotaRemaining() const /*override*/;

    virtual int64 getQuotaTotal() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ConnectedStorageProvider_GameCore(::Core::RemoteProviderInitializer&& initializer);

    MCAPI ::Core::RemoteStorageManifest _copyManifest(::std::string const& containerName);

    MCAPI ::Core::PathBuffer<::std::string> _getNextStagingLocation() const;

    MCAPI ::Core::Result _getRootAndLevelId(
        ::std::string const&                                      containerName,
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& rootPath,
        ::std::string&                                            levelId
    );

    MCAPI ::Core::Result _readBlobCallback(
        ::std::string const&                                            containerName,
        ::std::string const&                                            relativeFilename,
        uchar*                                                          data,
        uint64                                                          byteCount,
        uint                                                            blobIndex,
        uint                                                            blobCount,
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& stagingPath,
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& stagingRootPath,
        ::std::shared_ptr<::Core::RemoteStorageManifest>                syncManifest,
        ::std::function<void(::std::string const&, bool)>               HACK_cleanupInfectedContainersCallback
    );

    MCAPI void _telemetryConnectedStorageError(char const* message, ::std::string const& containerName);

    MCAPI ::std::string _worldContainerNameToLevelId(::std::string const& containerName) const;

    MCAPI ::std::pair<int, void*> commitStagedSnapshot(
        ::ConnectedStorageProvider_GameCore::CommitSnapshotParameters parameters,
        ::std::pair<int, void*>                                       opInput
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::RemoteProviderInitializer&& initializer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $shutdown();

    MCAPI ::std::string const& $getWorldsPrefix() const;

    MCAPI ::std::string $encodeWorldName(::std::string const& name);

    MCAPI ::std::string $encodeFileName(::std::string const& name);

    MCAPI float $getSyncProgress();

    MCFOLD void $onAppSuspend();

    MCAPI void $onAppResume();

    MCAPI ::CallbackToken $deleteContainer(
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>> context,
        ::std::string const&                                                                           containerName,
        ::std::function<void(uint64)> quotaUpdateCallback
    );

    MCAPI ::CallbackToken $commit(
        ::std::shared_ptr<::CallbackTokenContext<::std::function<
            void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>, ::Core::StorageResult)>>> context,
        ::std::string const&             containerName,
        ::std::set<::std::string> const& filesToAdd,
        ::std::set<::std::string>&       filesToDelete,
        ::std::set<::std::string>&       HACK_oldFilesToDelete,
        bool                             isRetry,
        ::std::function<void(uint64)>    quotaUpdateCallback
    );

    MCAPI ::CallbackToken $sync(
        ::std::string const&                                                                           directoryAlias,
        ::std::string const&                                                                           filePrefix,
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>> context,
        ::std::function<void(::std::string const&, bool)> HACK_cleanupInfectedContainersCallback
    );

    MCAPI ::CallbackToken $syncMeta(
        ::std::string const& directoryAlias,
        ::std::string const&,
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>> context,
        ::std::shared_ptr<::std::vector<::Core::ContainerOutInfo>>                                     cloudLevelsOut
    );

    MCAPI ::CallbackToken $syncContainerManifest(
        ::std::string const&                                                                           containerName,
        ::std::string const&                                                                           filePrefix,
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>> context
    );

    MCAPI ::Core::RemoteStorageManifest $getManifest(::std::string const& containerName);

    MCAPI int64 $getQuotaRemaining() const;

    MCAPI int64 $getQuotaTotal() const;
    // NOLINTEND
};
