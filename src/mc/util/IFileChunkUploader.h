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
        Success                 = 0,
        WaitingForServer        = 1,
        BadInitialization       = 2,
        Failure                 = 3,
        FailureForbidden        = 4,
        FailureWorldName        = 5,
        FailureSingleFileUpload = 6,
        FailureMultiUpload      = 7,
        FailureBlockList        = 8,
        FailureUploadComplete   = 9,
        FailureRefreshSession   = 10,
        FailureProcessing       = 11,
        InvalidResponseBody     = 12,
        Cancelled               = 13,
        InProgress              = 14,
        None                    = 15,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFileChunkUploader() = default;

    virtual void initFileUploader(
        ::std::string const&        uploadId,
        ::FileInfo const&           file,
        int                         chunkSize,
        ::Json::Value const&        uploadOptions,
        ::std::function<void(bool)> callback
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

    virtual bool canCancelUpload(::FileInfo const& file) const = 0;

    virtual void cancelUpload(::FileInfo const& file) = 0;

    virtual ::UploadError getInitErrorCode() const = 0;

    virtual float getUploadProgress(::FileInfo const& file) const = 0;

    virtual ::FileChunkInfo getChunkInfo(::FileInfo const& file, int chunkID) const;

    virtual bool useFileSizeLimit() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $uploadStream(
        ::FileInfo const&                                               file,
        uint64                                                          streamSize,
        ::std::string const&                                            boundary,
        ::std::function<void(::IFileChunkUploader::UploadStreamResult)> onCompleteCallback
    );

    MCNAPI bool $useFileSizeLimit() const;

#ifdef LL_PLAT_C
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

    MCNAPI ::FileChunkInfo $getChunkInfo(::FileInfo const& file, int chunkID) const;
#endif


    // NOLINTEND
};
