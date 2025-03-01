#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/DownloaderResult.h"
#include "mc/util/DownloaderState.h"

// auto generated forward declare list
// clang-format off
struct FileInfo;
// clang-format on

class IFileChunkDownloader {
public:
    // IFileChunkDownloader inner types define
    using WriteCompleteCallback = ::std::function<void(uint64, bool)>;

    using DataCallback =
        ::std::function<void(::std::vector<uchar>, uint64, uint64, ::std::function<void(uint64, bool)>)>;

    using EndCallback = ::std::function<void(::DownloaderState)>;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFileChunkDownloader() = default;

    // vIndex: 1
    virtual void update() = 0;

    // vIndex: 2
    virtual void
    initRealmsFileDownloader(::std::string const&, int const, ::std::string const&, ::FileInfo const&, uint64, ::std::string const&, ::std::function<void(::DownloaderResult)>) = 0;

    // vIndex: 3
    virtual void
    initFileDownloader(::std::string const&, ::std::string const&, ::FileInfo const&, uint64, uint64, ::std::string const&, ::std::function<void(::DownloaderResult)>) = 0;

    // vIndex: 4
    virtual void
        downloadFile(::std::function<void(::std::vector<uchar>, uint64, uint64, ::std::function<void(uint64, bool)>)>, ::std::function<void(::DownloaderState)>) = 0;

    // vIndex: 5
    virtual bool canCancelDownload() const = 0;

    // vIndex: 6
    virtual void cancelDownload() = 0;

    // vIndex: 7
    virtual uint64 getDownloadTotalSize() const = 0;

    // vIndex: 8
    virtual uint64 getDownloadReceivedSize() const = 0;

    // vIndex: 9
    virtual float getDownloadProgress() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
