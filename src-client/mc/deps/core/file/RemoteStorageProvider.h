#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/StorageResult.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/util/CallbackTokenContext.h"

// auto generated forward declare list
// clang-format off
class CallbackToken;
namespace Core { class RemoteStorageManifest; }
namespace Core { struct ContainerOutInfo; }
// clang-format on

namespace Core {

class RemoteStorageProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4791cb;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteStorageProvider& operator=(RemoteStorageProvider const&);
    RemoteStorageProvider(RemoteStorageProvider const&);
    RemoteStorageProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RemoteStorageProvider() = default;

    virtual void shutdown();

    virtual ::std::string const& getWorldsPrefix() const = 0;

    virtual ::std::string encodeWorldName(::std::string const& name) = 0;

    virtual ::std::string encodeFileName(::std::string const& name) = 0;

    virtual float getSyncProgress() = 0;

    virtual void onAppSuspend() = 0;

    virtual void onAppResume() = 0;

    virtual ::CallbackToken deleteContainer(
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>> context,
        ::std::string const&                                                                           containerName,
        ::std::function<void(uint64)> quotaUpdateCallback
    ) = 0;

    virtual ::CallbackToken commit(
        ::std::shared_ptr<::CallbackTokenContext<::std::function<
            void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>, ::Core::StorageResult)>>> context,
        ::std::string const&             containerName,
        ::std::set<::std::string> const& filesToAdd,
        ::std::set<::std::string>&       filesToDelete,
        ::std::set<::std::string>&       HACK_oldFilesToDelete,
        bool                             isRetry,
        ::std::function<void(uint64)>    quotaUpdateCallback
    ) = 0;

    virtual ::CallbackToken sync(
        ::std::string const&                                                                           directoryAlias,
        ::std::string const&                                                                           filePrefix,
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>> context,
        ::std::function<void(::std::string const&, bool)> HACK_cleanupInfectedContainersCallback
    ) = 0;

    virtual ::CallbackToken syncMeta(
        ::std::string const&,
        ::std::string const&,
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>>,
        ::std::shared_ptr<::std::vector<::Core::ContainerOutInfo>>
    ) = 0;

    virtual ::CallbackToken syncContainerManifest(
        ::std::string const&                                                                           containerName,
        ::std::string const&                                                                           filePrefix,
        ::std::shared_ptr<::CallbackTokenContext<
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>> context
    ) = 0;

    virtual ::Core::RemoteStorageManifest getManifest(::std::string const& containerName) = 0;

    virtual int64 getQuotaRemaining() const = 0;

    virtual int64 getQuotaTotal() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void mapContainerToRoot(::std::string const& containerName, ::std::string const& root);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $shutdown();
    // NOLINTEND
};

} // namespace Core
