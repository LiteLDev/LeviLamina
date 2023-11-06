#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/UploadError.h"
#include "mc/util/IFileChunkUploader.h"

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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ServerFileChunkUploader() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol:
    // ?initFileUploader@ServerFileChunkUploader@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUFileInfo@@HAEBVValue@Json@@V?$function@$$A6AX_N@Z@3@@Z
    virtual void
    initFileUploader(std::string const&, struct FileInfo const&, int, class Json::Value const&, std::function<void(bool)>);

    // vIndex: 3, symbol:
    // ?getServerMissingChunks@ServerFileChunkUploader@@UEBAXAEBUFileInfo@@V?$function@$$A6AXV?$vector@UFileChunkInfo@@V?$allocator@UFileChunkInfo@@@std@@@std@@@Z@std@@@Z
    virtual void
    getServerMissingChunks(struct FileInfo const&, std::function<void(std::vector<struct FileChunkInfo>)>) const;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?uploadChunk@ServerFileChunkUploader@@UEAAXAEBUFileInfo@@AEBUFileChunkInfo@@AEBV?$vector@EV?$allocator@E@std@@@std@@V?$function@$$A6AX_N@Z@5@@Z
    virtual void
    uploadChunk(struct FileInfo const&, struct FileChunkInfo const&, std::vector<uchar> const&, std::function<void(bool)>);

    // vIndex: 6, symbol:
    // ?uploadStream@IFileChunkUploader@@UEAAXAEBUFileInfo@@_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6AXW4UploadStreamResult@IFileChunkUploader@@@Z@4@@Z
    virtual void
    uploadStream(struct FileInfo const&, uint64, std::string const&, std::function<void(::IFileChunkUploader::UploadStreamResult)>);

    // vIndex: 7, symbol: ?canCancelUpload@ServerFileChunkUploader@@UEBA_NAEBUFileInfo@@@Z
    virtual bool canCancelUpload(struct FileInfo const&) const;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: ?getInitErrorCode@ServerFileChunkUploader@@UEBA?AW4UploadError@@XZ
    virtual ::UploadError getInitErrorCode() const;

    // vIndex: 10, symbol: ?getUploadProgress@ServerFileChunkUploader@@UEBAMAEBUFileInfo@@@Z
    virtual float getUploadProgress(struct FileInfo const&) const;

    // vIndex: 11, symbol: ?getChunkInfo@ServerFileChunkUploader@@UEBA?AUFileChunkInfo@@AEBUFileInfo@@H@Z
    virtual struct FileChunkInfo getChunkInfo(struct FileInfo const&, int) const;

    // symbol: ?cancelUpload@ServerFileChunkUploader@@UEAAXAEBUFileInfo@@@Z
    MCVAPI void cancelUpload(struct FileInfo const&);

    // symbol: ?confirmChunkReceived@ServerFileChunkUploader@@UEAAXAEBUFileInfo@@AEBUFileChunkInfo@@@Z
    MCVAPI void confirmChunkReceived(struct FileInfo const&, struct FileChunkInfo const&);

    // symbol: ?update@ServerFileChunkUploader@@UEAAXXZ
    MCVAPI void update();

    // NOLINTEND
};
