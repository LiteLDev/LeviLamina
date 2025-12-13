#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/IResourcePackFileDownloaderManager.h"
#include "mc/util/ResourcePackFileDownloadError.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class PacketSender;
class ResourcePackFileDownloader;
class TaskGroup;
struct FileChunkInfo;
namespace Core { class Path; }
namespace Core::ZipUtils { class IZipUtility; }
// clang-format on

class ResourcePackFileDownloaderManager : public ::IResourcePackFileDownloaderManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7b304f;
    ::ll::UntypedStorage<8, 8>  mUnk22ad82;
    ::ll::UntypedStorage<8, 8>  mUnk7949dd;
    ::ll::UntypedStorage<8, 64> mUnk402738;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackFileDownloaderManager& operator=(ResourcePackFileDownloaderManager const&);
    ResourcePackFileDownloaderManager(ResourcePackFileDownloaderManager const&);
    ResourcePackFileDownloaderManager();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ResourcePackFileDownloaderManager() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ResourcePackFileDownloaderManager() /*override*/;
#endif

    virtual void tryStartDownloadingFile(
        ::TaskGroup&                                           taskGroup,
        ::std::string const&                                   resourceName,
        uint                                                   chunkSize,
        int                                                    nbChunks,
        uint64                                                 fileSize,
        ::std::string const&                                   fileHash,
        bool                                                   isPremium,
        ::PackType                                             packType,
        ::std::function<void()>                                startCallback,
        ::std::function<void(float, uint64)>                   progressCallback,
        ::std::function<void(::Core::Path const&)>             completionCallback,
        ::std::function<void(::ResourcePackFileDownloadError)> errorCallback
    ) /*override*/;

    virtual ::Bedrock::Threading::SharedAsync<void> chunkReceived(
        ::TaskGroup&           taskGroup,
        ::std::string const&   resourceName,
        ::FileChunkInfo const& chunkInfo,
        ::std::vector<uchar>   data
    ) /*override*/;

    virtual void cleanup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ResourcePackFileDownloaderManager(
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>             appPlatform,
        ::std::unique_ptr<::Core::ZipUtils::IZipUtility const>&& zipUtility,
        ::PacketSender&                                          packetSender
    );

    MCNAPI_C ::ResourcePackFileDownloader&
    _getOrCreateManager(::TaskGroup& taskGroup, ::std::string const& resourceName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>             appPlatform,
        ::std::unique_ptr<::Core::ZipUtils::IZipUtility const>&& zipUtility,
        ::PacketSender&                                          packetSender
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $tryStartDownloadingFile(
        ::TaskGroup&                                           taskGroup,
        ::std::string const&                                   resourceName,
        uint                                                   chunkSize,
        int                                                    nbChunks,
        uint64                                                 fileSize,
        ::std::string const&                                   fileHash,
        bool                                                   isPremium,
        ::PackType                                             packType,
        ::std::function<void()>                                startCallback,
        ::std::function<void(float, uint64)>                   progressCallback,
        ::std::function<void(::Core::Path const&)>             completionCallback,
        ::std::function<void(::ResourcePackFileDownloadError)> errorCallback
    );

    MCNAPI ::Bedrock::Threading::SharedAsync<void> $chunkReceived(
        ::TaskGroup&           taskGroup,
        ::std::string const&   resourceName,
        ::FileChunkInfo const& chunkInfo,
        ::std::vector<uchar>   data
    );

    MCNAPI void $cleanup();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
