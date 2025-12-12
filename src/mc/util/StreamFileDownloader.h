#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/util/DownloaderResult.h"
#include "mc/util/DownloaderState.h"
#include "mc/util/IFileChunkDownloader.h"

// auto generated forward declare list
// clang-format off
struct FileInfo;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

class StreamFileDownloader : public ::IFileChunkDownloader,
                             public ::std::enable_shared_from_this<::StreamFileDownloader> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnka211d4;
    ::ll::UntypedStorage<8, 8>   mUnkd71e6f;
    ::ll::UntypedStorage<8, 64>  mUnkfb46b6;
    ::ll::UntypedStorage<8, 64>  mUnk82ed74;
    ::ll::UntypedStorage<8, 8>   mUnk402616;
    ::ll::UntypedStorage<8, 8>   mUnk89347f;
    ::ll::UntypedStorage<8, 8>   mUnk238343;
    ::ll::UntypedStorage<1, 1>   mUnk1c4b1c;
    ::ll::UntypedStorage<1, 1>   mUnkcb17b4;
    ::ll::UntypedStorage<8, 336> mUnk6e3666;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamFileDownloader& operator=(StreamFileDownloader const&);
    StreamFileDownloader(StreamFileDownloader const&);

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~StreamFileDownloader() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~StreamFileDownloader() /*override*/;
#endif

    virtual void update() /*override*/;

    virtual void initRealmsFileDownloader(
        ::std::string const&                      downloadId,
        int const                                 slotIndex,
        ::std::string const&                      downloadUrl,
        ::FileInfo const&                         file,
        uint64                                    fromByteOffset,
        ::std::string const&                      downloadVersion,
        ::std::function<void(::DownloaderResult)> callback
    ) /*override*/;

    virtual void initFileDownloader(
        ::std::string const&,
        ::std::string const& downloadUrl,
        ::FileInfo const&,
        uint64 expectedFileSize,
        uint64 fromByteOffset,
        ::std::string const&,
        ::std::function<void(::DownloaderResult)> callback
    ) /*override*/;

    virtual void downloadFile(
        ::std::function<void(::std::vector<uchar>, uint64, uint64, ::std::function<void(uint64, bool)>)> dataCallback,
        ::std::function<void(::DownloaderState)>                                                         endCallback
    ) /*override*/;

    virtual bool canCancelDownload() const /*override*/;

    virtual void cancelDownload() /*override*/;

    virtual uint64 getDownloadTotalSize() const /*override*/;

    virtual uint64 getDownloadReceivedSize() const /*override*/;

    virtual float getDownloadProgress() const /*override*/;

    virtual ::Bedrock::Http::Request _makeRequest();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C StreamFileDownloader();

    MCNAPI_C void _checkErrorAndRequeue(uint64 bytesWritten, bool hasError);

    MCNAPI_C void _downloadFile();

    MCNAPI_C ::Bedrock::Threading::Async<::Bedrock::Http::Response>
    _downloadNextChunk(::Bedrock::Http::Request request);

    MCNAPI_C ::Bedrock::Threading::Async<::std::tuple<uint64, bool>>
    _processResponse(::Bedrock::Http::Response response);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
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
    MCNAPI void $update();

    MCNAPI void $initRealmsFileDownloader(
        ::std::string const&                      downloadId,
        int const                                 slotIndex,
        ::std::string const&                      downloadUrl,
        ::FileInfo const&                         file,
        uint64                                    fromByteOffset,
        ::std::string const&                      downloadVersion,
        ::std::function<void(::DownloaderResult)> callback
    );

    MCNAPI void $initFileDownloader(
        ::std::string const&,
        ::std::string const& downloadUrl,
        ::FileInfo const&,
        uint64 expectedFileSize,
        uint64 fromByteOffset,
        ::std::string const&,
        ::std::function<void(::DownloaderResult)> callback
    );

    MCNAPI void $downloadFile(
        ::std::function<void(::std::vector<uchar>, uint64, uint64, ::std::function<void(uint64, bool)>)> dataCallback,
        ::std::function<void(::DownloaderState)>                                                         endCallback
    );

    MCNAPI bool $canCancelDownload() const;

    MCNAPI void $cancelDownload();

    MCNAPI uint64 $getDownloadTotalSize() const;

    MCNAPI uint64 $getDownloadReceivedSize() const;

    MCNAPI float $getDownloadProgress() const;

    MCNAPI ::Bedrock::Http::Request $_makeRequest();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
