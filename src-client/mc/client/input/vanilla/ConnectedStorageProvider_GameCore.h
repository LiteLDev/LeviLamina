#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/RemoteStorageProvider.h"
#include "mc/deps/core/file/StorageResult.h"
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
namespace Core { class RemoteStorageManifest; }
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConnectedStorageProvider_GameCore() /*override*/ = default;

    virtual void shutdown() /*override*/;

    virtual ::std::string const& getWorldsPrefix() const /*override*/;

    virtual ::std::string encodeWorldName(::std::string const&) /*override*/;

    virtual ::std::string encodeFileName(::std::string const&) /*override*/;

    virtual float getSyncProgress() /*override*/;

    virtual void onAppSuspend() /*override*/;

    virtual void onAppResume() /*override*/;

    virtual ::CallbackToken deleteContainer(
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>>,
        ::std::string const&,
        ::std::function<void(uint64)>
    ) /*override*/;

    virtual ::CallbackToken commit(
        ::std::shared_ptr<::CallbackTokenContext<::std::function<
            void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>, ::Core::StorageResult)>>>,
        ::std::string const&,
        ::std::set<::std::string> const&,
        ::std::set<::std::string>&,
        ::std::set<::std::string>&,
        bool,
        ::std::function<void(uint64)>
    ) /*override*/;

    virtual ::CallbackToken sync(
        ::std::string const&,
        ::std::string const&,
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>>,
        ::std::function<void(::std::string const&, bool)>
    ) /*override*/;

    virtual ::CallbackToken syncMeta(
        ::std::string const&,
        ::std::string const&,
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>>,
        ::std::shared_ptr<::std::vector<::Core::ContainerOutInfo>>
    ) /*override*/;

    virtual ::CallbackToken syncContainerManifest(
        ::std::string const&,
        ::std::string const&,
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>>
    ) /*override*/;

    virtual ::Core::RemoteStorageManifest getManifest(::std::string const&) /*override*/;

    virtual int64 getQuotaRemaining() const /*override*/;

    virtual int64 getQuotaTotal() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
