#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/DownloaderResult.h"

// auto generated forward declare list
// clang-format off
class IFileChunkDownloader;
class IFilePicker;
namespace Core { class Path; }
// clang-format on

class FileDownloadManager : public ::std::enable_shared_from_this<::FileDownloadManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72>  mUnk76fb39;
    ::ll::UntypedStorage<8, 16>  mUnk3aa048;
    ::ll::UntypedStorage<4, 4>   mUnkfe9bd7;
    ::ll::UntypedStorage<4, 4>   mUnk899fea;
    ::ll::UntypedStorage<8, 16>  mUnk3a2a83;
    ::ll::UntypedStorage<8, 16>  mUnkd5926b;
    ::ll::UntypedStorage<8, 8>   mUnk61e433;
    ::ll::UntypedStorage<8, 616> mUnk6600ca;
    ::ll::UntypedStorage<8, 24>  mUnk7cbee3;
    ::ll::UntypedStorage<8, 8>   mUnk646146;
    ::ll::UntypedStorage<8, 8>   mUnk1fa5e5;
    ::ll::UntypedStorage<1, 1>   mUnkd59752;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDownloadManager& operator=(FileDownloadManager const&);
    FileDownloadManager(FileDownloadManager const&);
    FileDownloadManager();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~FileDownloadManager() = default;
#else // LL_PLAT_C
    virtual ~FileDownloadManager();
#endif

    virtual void update();

    virtual void cancelDownload();

    virtual float getDownloadProgress() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C FileDownloadManager(
        ::std::shared_ptr<::IFilePicker>          filePicker,
        ::std::shared_ptr<::IFileChunkDownloader> fileDownloader
    );

    MCNAPI_C void _writeData(
        ::std::vector<uchar>                data,
        uint64                              writeBytes,
        uint64                              offset,
        uint64                              progress,
        ::std::function<void(uint64, bool)> writeComplete
    );

    MCNAPI_C void downloadFile(
        ::std::string const&                                           downloadId,
        ::std::string const&                                           downloadUrl,
        ::Core::Path const&                                            downloadPath,
        uint64                                                         expectedFileSize,
        uint64                                                         fromByteOffset,
        ::std::string const&                                           downloadVersion,
        ::std::function<void(::Core::Path const&, ::DownloaderResult)> onCompleteCallback,
        int                                                            slotIndex
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void*
    $ctor(::std::shared_ptr<::IFilePicker> filePicker, ::std::shared_ptr<::IFileChunkDownloader> fileDownloader);
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

    MCNAPI void $cancelDownload();

    MCNAPI float $getDownloadProgress() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
