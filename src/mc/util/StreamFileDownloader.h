#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/DownloaderResult.h"
#include "mc/util/DownloaderState.h"
#include "mc/util/IFileChunkDownloader.h"

// auto generated forward declare list
// clang-format off
struct FileInfo;
namespace Bedrock::Http { class Request; }
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
    StreamFileDownloader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StreamFileDownloader() /*override*/ = default;

    // vIndex: 1
    virtual void update() /*override*/;

    // vIndex: 2
    virtual void
    initRealmsFileDownloader(::std::string const&, int const, ::std::string const&, ::FileInfo const&, uint64, ::std::string const&, ::std::function<void(::DownloaderResult)>) /*override*/
        ;

    // vIndex: 3
    virtual void
    initFileDownloader(::std::string const&, ::std::string const&, ::FileInfo const&, uint64, uint64, ::std::string const&, ::std::function<void(::DownloaderResult)>) /*override*/
        ;

    // vIndex: 4
    virtual void
        downloadFile(::std::function<void(::std::vector<uchar>, uint64, uint64, ::std::function<void(uint64, bool)>)>, ::std::function<void(::DownloaderState)>) /*override*/
        ;

    // vIndex: 5
    virtual bool canCancelDownload() const /*override*/;

    // vIndex: 6
    virtual void cancelDownload() /*override*/;

    // vIndex: 7
    virtual uint64 getDownloadTotalSize() const /*override*/;

    // vIndex: 8
    virtual uint64 getDownloadReceivedSize() const /*override*/;

    // vIndex: 9
    virtual float getDownloadProgress() const /*override*/;

    // vIndex: 10
    virtual ::Bedrock::Http::Request _makeRequest();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
