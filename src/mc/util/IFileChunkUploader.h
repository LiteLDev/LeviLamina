#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/UploadError.h"

// auto generated forward declare list
// clang-format off
struct FileChunkInfo;
struct FileInfo;
namespace Json { class Value; }
// clang-format on

class IFileChunkUploader {
public:
    // IFileChunkUploader inner types define
    enum class UploadStatus : int {
        Initialized         = 0,
        ArchivingStarted    = 1,
        ArchivingFailed     = 2,
        ArchivingSucceeded  = 3,
        UploadFailed        = 4,
        ValidationStarted   = 5,
        ValidationProgress  = 6,
        ValidationFailed    = 7,
        ValidationCancelled = 8,
        ValidationSucceeded = 9,
        UnknownError        = 10,
    };

    enum class UploadStreamResult : int {
        Success             = 0,
        Failure             = 1,
        FailureForbidden    = 2,
        FailureWorldName    = 3,
        InvalidResponseBody = 4,
        None                = 5,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFileChunkUploader();

    // vIndex: 1
    virtual void update();

    // vIndex: 2
    virtual void
    initFileUploader(::std::string const&, ::FileInfo const&, int, ::Json::Value const&, ::std::function<void(bool)>) = 0;

    // vIndex: 3
    virtual void getServerMissingChunks(
        ::FileInfo const&                                     file,
        ::std::function<void(::std::vector<::FileChunkInfo>)> callback
    ) const;

    // vIndex: 4
    virtual void confirmChunkReceived(::FileInfo const& file, ::FileChunkInfo const& chunk);

    // vIndex: 5
    virtual void uploadChunk(
        ::FileInfo const&           file,
        ::FileChunkInfo const&      chunk,
        ::std::vector<uchar> const& data,
        ::std::function<void(bool)> onCompleteCallback
    );

    // vIndex: 6
    virtual void uploadStream(
        ::FileInfo const&                                               file,
        uint64                                                          streamSize,
        ::std::string const&                                            boundary,
        ::std::function<void(::IFileChunkUploader::UploadStreamResult)> onCompleteCallback
    );

    // vIndex: 7
    virtual bool canCancelUpload(::FileInfo const&) const = 0;

    // vIndex: 8
    virtual void cancelUpload(::FileInfo const&) = 0;

    // vIndex: 9
    virtual ::UploadError getInitErrorCode() const = 0;

    // vIndex: 10
    virtual float getUploadProgress(::FileInfo const&) const = 0;

    // vIndex: 11
    virtual ::FileChunkInfo getChunkInfo(::FileInfo const& file, int chunkID) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IFileChunkUploader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $update();

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

    MCAPI void $uploadStream(
        ::FileInfo const&                                               file,
        uint64                                                          streamSize,
        ::std::string const&                                            boundary,
        ::std::function<void(::IFileChunkUploader::UploadStreamResult)> onCompleteCallback
    );

    MCAPI ::FileChunkInfo $getChunkInfo(::FileInfo const& file, int chunkID) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
