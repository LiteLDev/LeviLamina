#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IFileChunkUploader.h"
#include "mc/util/UploadError.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ServerFileChunkUploader {
public:
    // prevent constructor by default
    ServerFileChunkUploader& operator=(ServerFileChunkUploader const&);
    ServerFileChunkUploader(ServerFileChunkUploader const&);
    ServerFileChunkUploader();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerFileChunkUploader() = default;

    // vIndex: 1
    virtual void update();

    // vIndex: 2
    virtual void initFileUploader(
        std::string const&        uploadId,
        struct FileInfo const&    file,
        int                       chunkSize,
        class Json::Value const&  uploadOptions,
        std::function<void(bool)> callback
    );

    // vIndex: 3
    virtual void getServerMissingChunks(
        struct FileInfo const&                                 file,
        std::function<void(std::vector<struct FileChunkInfo>)> callback
    ) const;

    // vIndex: 4
    virtual void confirmChunkReceived(struct FileInfo const&, struct FileChunkInfo const&);

    // vIndex: 5
    virtual void uploadChunk(
        struct FileInfo const&      file,
        struct FileChunkInfo const& chunk,
        std::vector<uchar> const&   data,
        std::function<void(bool)>   onCompleteCallback
    );

    // vIndex: 6
    virtual void uploadStream(
        struct FileInfo const&                                        file,
        uint64                                                        streamSize,
        std::string const&                                            boundary,
        std::function<void(::IFileChunkUploader::UploadStreamResult)> onCompleteCallback
    );

    // vIndex: 7
    virtual bool canCancelUpload(struct FileInfo const& file) const;

    // vIndex: 8
    virtual void cancelUpload(struct FileInfo const& file);

    // vIndex: 9
    virtual ::UploadError getInitErrorCode() const;

    // vIndex: 10
    virtual float getUploadProgress(struct FileInfo const& file) const;

    // vIndex: 11
    virtual struct FileChunkInfo getChunkInfo(struct FileInfo const& file, int chunkID) const;

    // NOLINTEND
};
