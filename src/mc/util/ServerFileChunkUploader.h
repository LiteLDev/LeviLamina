#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IFileChunkUploader.h"
#include "mc/util/UploadError.h"

// auto generated forward declare list
// clang-format off
struct FileChunkInfo;
struct FileInfo;
namespace Json { class Value; }
// clang-format on

class ServerFileChunkUploader : public ::IFileChunkUploader,
                                public ::std::enable_shared_from_this<::ServerFileChunkUploader> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk560ec7;
    ::ll::UntypedStorage<8, 8>  mUnk4071d2;
    ::ll::UntypedStorage<1, 1>  mUnk4af52c;
    ::ll::UntypedStorage<8, 32> mUnk48687a;
    ::ll::UntypedStorage<8, 32> mUnk42fb8e;
    ::ll::UntypedStorage<8, 96> mUnk706bcd;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerFileChunkUploader& operator=(ServerFileChunkUploader const&);
    ServerFileChunkUploader(ServerFileChunkUploader const&);
    ServerFileChunkUploader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerFileChunkUploader() /*override*/;

    // vIndex: 1
    virtual void initFileUploader(
        ::std::string const&        uploadId,
        ::FileInfo const&           file,
        int                         chunkSize,
        ::Json::Value const&        uploadOptions,
        ::std::function<void(bool)> callback
    ) /*override*/;

    // vIndex: 2
    virtual void
    getServerMissingChunks(::FileInfo const& file, ::std::function<void(::std::vector<::FileChunkInfo>)> callback) const
        /*override*/;

    // vIndex: 3
    virtual void confirmChunkReceived(::FileInfo const& file, ::FileChunkInfo const& chunk) /*override*/;

    // vIndex: 4
    virtual void uploadChunk(
        ::FileInfo const&           file,
        ::FileChunkInfo const&      chunk,
        ::std::vector<uchar> const& data,
        ::std::function<void(bool)> onCompleteCallback
    ) /*override*/;

    // vIndex: 6
    virtual bool canCancelUpload(::FileInfo const& file) const /*override*/;

    // vIndex: 7
    virtual void cancelUpload(::FileInfo const& file) /*override*/;

    // vIndex: 8
    virtual ::UploadError getInitErrorCode() const /*override*/;

    // vIndex: 9
    virtual float getUploadProgress(::FileInfo const& file) const /*override*/;

    // vIndex: 10
    virtual ::FileChunkInfo getChunkInfo(::FileInfo const& file, int chunkID) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initFileUploader(
        ::std::string const&        uploadId,
        ::FileInfo const&           file,
        int                         chunkSize,
        ::Json::Value const&        uploadOptions,
        ::std::function<void(bool)> callback
    );

    MCAPI void $getServerMissingChunks(
        ::FileInfo const&                                     file,
        ::std::function<void(::std::vector<::FileChunkInfo>)> callback
    ) const;

    MCFOLD void $confirmChunkReceived(::FileInfo const& file, ::FileChunkInfo const& chunk);

    MCAPI void $uploadChunk(
        ::FileInfo const&           file,
        ::FileChunkInfo const&      chunk,
        ::std::vector<uchar> const& data,
        ::std::function<void(bool)> onCompleteCallback
    );

    MCFOLD bool $canCancelUpload(::FileInfo const& file) const;

    MCFOLD void $cancelUpload(::FileInfo const& file);

    MCFOLD ::UploadError $getInitErrorCode() const;

    MCFOLD float $getUploadProgress(::FileInfo const& file) const;

    MCAPI ::FileChunkInfo $getChunkInfo(::FileInfo const& file, int chunkID) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
