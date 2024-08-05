#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileChunkUploader {
public:
    // IFileChunkUploader inner types define
    enum class UploadStreamResult {};

public:
    // prevent constructor by default
    IFileChunkUploader& operator=(IFileChunkUploader const&);
    IFileChunkUploader(IFileChunkUploader const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFileChunkUploader();

    // vIndex: 1
    virtual void update();

    // vIndex: 2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3
    virtual void getServerMissingChunks(
        struct FileInfo const&                                 file,
        std::function<void(std::vector<struct FileChunkInfo>)> callback
    ) const;

    // vIndex: 4
    virtual void confirmChunkReceived(struct FileInfo const& file, struct FileChunkInfo const& chunk);

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
    virtual void __unk_vfn_7() = 0;

    // vIndex: 8
    virtual void __unk_vfn_8() = 0;

    // vIndex: 9
    virtual void __unk_vfn_9() = 0;

    // vIndex: 10
    virtual void __unk_vfn_10() = 0;

    // vIndex: 11
    virtual struct FileChunkInfo getChunkInfo(struct FileInfo const& file, int chunkID) const;

    MCAPI IFileChunkUploader();

    // NOLINTEND
};
