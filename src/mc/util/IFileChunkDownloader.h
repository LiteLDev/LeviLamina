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
    using DataCallback =
        ::std::function<void(::std::vector<uchar>, uint64, uint64, ::std::function<void(uint64, bool)>)>;

    using EndCallback = ::std::function<void(::DownloaderState)>;

    using WriteCompleteCallback = ::std::function<void(uint64, bool)>;

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IFileChunkDownloader() = default;
#else // LL_PLAT_C
    virtual ~IFileChunkDownloader();
#endif

    virtual void update() = 0;

    virtual void initRealmsFileDownloader(
        ::std::string const&                      downloadId,
        int const                                 slotIndex,
        ::std::string const&                      downloadUrl,
        ::FileInfo const&                         file,
        uint64                                    fromByteOffset,
        ::std::string const&                      downloadVersion,
        ::std::function<void(::DownloaderResult)> callback
    ) = 0;

    virtual void initFileDownloader(
        ::std::string const&,
        ::std::string const&,
        ::FileInfo const&,
        uint64,
        uint64,
        ::std::string const&,
        ::std::function<void(::DownloaderResult)>
    ) = 0;

    virtual void downloadFile(
        ::std::function<void(::std::vector<uchar>, uint64, uint64, ::std::function<void(uint64, bool)>)> dataCallback,
        ::std::function<void(::DownloaderState)>                                                         endCallback
    ) = 0;

    virtual bool canCancelDownload() const = 0;

    virtual void cancelDownload() = 0;

    virtual uint64 getDownloadTotalSize() const = 0;

    virtual uint64 getDownloadReceivedSize() const = 0;

    virtual float getDownloadProgress() const = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const* const[]> DownloaderResultStrings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
