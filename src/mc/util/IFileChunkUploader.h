#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IFileChunkUploader {
public:
    // IFileChunkUploader inner types declare
    // clang-format off

    // clang-format on

    // IFileChunkUploader inner types define
    enum class UploadStreamResult {};

public:
    // prevent constructor by default
    IFileChunkUploader& operator=(IFileChunkUploader const&) = delete;
    IFileChunkUploader(IFileChunkUploader const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?initFileUploader\@ServerFileChunkUploader\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUFileInfo\@\@HAEBVValue\@Json\@\@V?$function\@$$A6AX_N\@Z\@3\@\@Z
     */
    virtual void
    initFileUploader(std::string const&, struct FileInfo const&, int, class Json::Value const&, class std::function<void(bool)>) = 0; // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?getServerMissingChunks\@IFileChunkUploader\@\@UEBAXAEBUFileInfo\@\@V?$function\@$$A6AXV?$vector\@UFileChunkInfo\@\@V?$allocator\@UFileChunkInfo\@\@\@std\@\@\@std\@\@\@Z\@std\@\@\@Z
     */
    virtual void
    getServerMissingChunks(struct FileInfo const&, class std::function<void(std::vector<struct FileChunkInfo>)>)
        const; // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?uploadChunk\@IFileChunkUploader\@\@UEAAXAEBUFileInfo\@\@AEBUFileChunkInfo\@\@AEBV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@V?$function\@$$A6AX_N\@Z\@5\@\@Z
     */
    virtual void
    uploadChunk(struct FileInfo const&, struct FileChunkInfo const&, std::vector<unsigned char> const&, class std::function<void(bool)>); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?uploadStream\@IFileChunkUploader\@\@UEAAXAEBUFileInfo\@\@_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6AXW4UploadStreamResult\@IFileChunkUploader\@\@\@Z\@4\@\@Z
     */
    virtual void
    uploadStream(struct FileInfo const&, unsigned __int64, std::string const&, class std::function<void(enum class IFileChunkUploader::UploadStreamResult)>); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?canCancelUpload\@ServerFileChunkUploader\@\@UEBA_NAEBUFileInfo\@\@\@Z
     */
    virtual bool canCancelUpload(struct FileInfo const&) const = 0; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8() = 0; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?getInitErrorCode\@ServerFileChunkUploader\@\@UEBA?AW4UploadError\@\@XZ
     */
    virtual enum class UploadError getInitErrorCode() const = 0; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?getUploadProgress\@ServerFileChunkUploader\@\@UEBAMAEBUFileInfo\@\@\@Z
     */
    virtual float getUploadProgress(struct FileInfo const&) const = 0; // NOLINT
    /**
     * @vftbl 11
     * @symbol ?getChunkInfo\@IFileChunkUploader\@\@UEBA?AUFileChunkInfo\@\@AEBUFileInfo\@\@H\@Z
     */
    virtual struct FileChunkInfo getChunkInfo(struct FileInfo const&, int) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IFILECHUNKUPLOADER
    /**
     * @symbol ?confirmChunkReceived\@IFileChunkUploader\@\@UEAAXAEBUFileInfo\@\@AEBUFileChunkInfo\@\@\@Z
     */
    MCVAPI void confirmChunkReceived(struct FileInfo const&, struct FileChunkInfo const&); // NOLINT
    /**
     * @symbol ?update\@IFileChunkUploader\@\@UEAAXXZ
     */
    MCVAPI void update(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IFileChunkUploader(); // NOLINT
#endif
    /**
     * @symbol ??0IFileChunkUploader\@\@QEAA\@XZ
     */
    MCAPI IFileChunkUploader(); // NOLINT
};
