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
    // vIndex: 0, symbol: ??1IFileChunkUploader@@UEAA@XZ
    virtual ~IFileChunkUploader();

    // vIndex: 1, symbol: ?update@IFileChunkUploader@@UEAAXXZ
    virtual void update();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3, symbol:
    // ?getServerMissingChunks@IFileChunkUploader@@UEBAXAEBUFileInfo@@V?$function@$$A6AXV?$vector@UFileChunkInfo@@V?$allocator@UFileChunkInfo@@@std@@@std@@@Z@std@@@Z
    virtual void getServerMissingChunks(
        struct FileInfo const&                                 file,
        std::function<void(std::vector<struct FileChunkInfo>)> callback
    ) const;

    // vIndex: 4, symbol: ?confirmChunkReceived@IFileChunkUploader@@UEAAXAEBUFileInfo@@AEBUFileChunkInfo@@@Z
    virtual void confirmChunkReceived(struct FileInfo const& file, struct FileChunkInfo const& chunk);

    // vIndex: 5, symbol:
    // ?uploadChunk@IFileChunkUploader@@UEAAXAEBUFileInfo@@AEBUFileChunkInfo@@AEBV?$vector@EV?$allocator@E@std@@@std@@V?$function@$$A6AX_N@Z@5@@Z
    virtual void uploadChunk(
        struct FileInfo const&      file,
        struct FileChunkInfo const& chunk,
        std::vector<uchar> const&   data,
        std::function<void(bool)>   onCompleteCallback
    );

    // vIndex: 6, symbol:
    // ?uploadStream@IFileChunkUploader@@UEAAXAEBUFileInfo@@_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6AXW4UploadStreamResult@IFileChunkUploader@@@Z@4@@Z
    virtual void uploadStream(
        struct FileInfo const&                                        file,
        uint64                                                        streamSize,
        std::string const&                                            boundary,
        std::function<void(::IFileChunkUploader::UploadStreamResult)> onCompleteCallback
    );

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7() = 0;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8() = 0;

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9() = 0;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10() = 0;

    // vIndex: 11, symbol: ?getChunkInfo@IFileChunkUploader@@UEBA?AUFileChunkInfo@@AEBUFileInfo@@H@Z
    virtual struct FileChunkInfo getChunkInfo(struct FileInfo const& file, int chunkID) const;

    // symbol: ??0IFileChunkUploader@@QEAA@XZ
    MCAPI IFileChunkUploader();

    // NOLINTEND
};
