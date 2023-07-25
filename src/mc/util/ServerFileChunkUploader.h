#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IFileChunkUploader.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ServerFileChunkUploader : public ::IFileChunkUploader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERFILECHUNKUPLOADER
public:
    ServerFileChunkUploader& operator=(ServerFileChunkUploader const&) = delete;
    ServerFileChunkUploader(ServerFileChunkUploader const&)            = delete;
    ServerFileChunkUploader()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol
     * ?initFileUploader\@ServerFileChunkUploader\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUFileInfo\@\@HAEBVValue\@Json\@\@V?$function\@$$A6AX_N\@Z\@3\@\@Z
     */
    virtual void
    initFileUploader(std::string const&, struct FileInfo const&, int, class Json::Value const&, class std::function<void(bool)>);
    /**
     * @vftbl 3
     * @symbol
     * ?getServerMissingChunks\@ServerFileChunkUploader\@\@UEBAXAEBUFileInfo\@\@V?$function\@$$A6AXV?$vector\@UFileChunkInfo\@\@V?$allocator\@UFileChunkInfo\@\@\@std\@\@\@std\@\@\@Z\@std\@\@\@Z
     */
    virtual void
    getServerMissingChunks(struct FileInfo const&, class std::function<void(std::vector<struct FileChunkInfo>)>) const;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol
     * ?uploadChunk\@ServerFileChunkUploader\@\@UEAAXAEBUFileInfo\@\@AEBUFileChunkInfo\@\@AEBV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@V?$function\@$$A6AX_N\@Z\@5\@\@Z
     */
    virtual void
    uploadChunk(struct FileInfo const&, struct FileChunkInfo const&, std::vector<unsigned char> const&, class std::function<void(bool)>);
    /**
     * @vftbl 7
     * @symbol ?canCancelUpload\@ServerFileChunkUploader\@\@UEBA_NAEBUFileInfo\@\@\@Z
     */
    virtual bool canCancelUpload(struct FileInfo const&) const;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol ?getInitErrorCode\@ServerFileChunkUploader\@\@UEBA?AW4UploadError\@\@XZ
     */
    virtual enum class UploadError getInitErrorCode() const;
    /**
     * @vftbl 10
     * @symbol ?getUploadProgress\@ServerFileChunkUploader\@\@UEBAMAEBUFileInfo\@\@\@Z
     */
    virtual float getUploadProgress(struct FileInfo const&) const;
    /**
     * @vftbl 11
     * @symbol ?getChunkInfo\@ServerFileChunkUploader\@\@UEBA?AUFileChunkInfo\@\@AEBUFileInfo\@\@H\@Z
     */
    virtual struct FileChunkInfo getChunkInfo(struct FileInfo const&, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERFILECHUNKUPLOADER
    /**
     * @symbol ?cancelUpload\@ServerFileChunkUploader\@\@UEAAXAEBUFileInfo\@\@\@Z
     */
    MCVAPI void cancelUpload(struct FileInfo const&);
    /**
     * @symbol ?confirmChunkReceived\@ServerFileChunkUploader\@\@UEAAXAEBUFileInfo\@\@AEBUFileChunkInfo\@\@\@Z
     */
    MCVAPI void confirmChunkReceived(struct FileInfo const&, struct FileChunkInfo const&);
    /**
     * @symbol ?update\@ServerFileChunkUploader\@\@UEAAXXZ
     */
    MCVAPI void update();
#endif
};
