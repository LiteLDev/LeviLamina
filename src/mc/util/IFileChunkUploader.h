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
#ifdef LL_PLAT_S
    virtual ~IFileChunkUploader() = default;
#else // LL_PLAT_C
    virtual ~IFileChunkUploader();
#endif

    virtual void initFileUploader(
        ::std::string const&,
        ::FileInfo const&,
        int,
        ::Json::Value const&,
        ::std::function<void(bool)>
    ) = 0;

    virtual void getServerMissingChunks(
        ::FileInfo const&                                     file,
        ::std::function<void(::std::vector<::FileChunkInfo>)> callback
    ) const;

    virtual void confirmChunkReceived(::FileInfo const& file, ::FileChunkInfo const& chunk);

    virtual void uploadChunk(
        ::FileInfo const&           file,
        ::FileChunkInfo const&      chunk,
        ::std::vector<uchar>        data,
        ::std::function<void(bool)> onCompleteCallback
    );

    virtual void uploadStream(
        ::FileInfo const&                                               file,
        uint64                                                          streamSize,
        ::std::string const&                                            boundary,
        ::std::function<void(::IFileChunkUploader::UploadStreamResult)> onCompleteCallback
    );

    virtual bool canCancelUpload(::FileInfo const&) const = 0;

    virtual void cancelUpload(::FileInfo const&) = 0;

    virtual ::UploadError getInitErrorCode() const = 0;

    virtual float getUploadProgress(::FileInfo const&) const = 0;

    virtual ::FileChunkInfo getChunkInfo(::FileInfo const& file, int chunkID) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $getServerMissingChunks(
        ::FileInfo const&                                     file,
        ::std::function<void(::std::vector<::FileChunkInfo>)> callback
    ) const;

    MCNAPI void $confirmChunkReceived(::FileInfo const& file, ::FileChunkInfo const& chunk);

    MCNAPI void $uploadChunk(
        ::FileInfo const&           file,
        ::FileChunkInfo const&      chunk,
        ::std::vector<uchar>        data,
        ::std::function<void(bool)> onCompleteCallback
    );

    MCNAPI void $uploadStream(
        ::FileInfo const&                                               file,
        uint64                                                          streamSize,
        ::std::string const&                                            boundary,
        ::std::function<void(::IFileChunkUploader::UploadStreamResult)> onCompleteCallback
    );

    MCNAPI ::FileChunkInfo $getChunkInfo(::FileInfo const& file, int chunkID) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
