#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileChunkUploader {
public:
    // IFileChunkUploader inner types define
    enum class UploadStreamResult {};

public:
    // prevent constructor by default
    IFileChunkUploader& operator=(IFileChunkUploader const&) = delete;
    IFileChunkUploader(IFileChunkUploader const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol
     * ?getServerMissingChunks\@IFileChunkUploader\@\@UEBAXAEBUFileInfo\@\@V?$function\@$$A6AXV?$vector\@UFileChunkInfo\@\@V?$allocator\@UFileChunkInfo\@\@\@std\@\@\@std\@\@\@Z\@std\@\@\@Z
     */
    virtual void
    getServerMissingChunks(struct FileInfo const&, std::function<void(std::vector<struct FileChunkInfo>)>) const;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol
     * ?uploadChunk\@IFileChunkUploader\@\@UEAAXAEBUFileInfo\@\@AEBUFileChunkInfo\@\@AEBV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@V?$function\@$$A6AX_N\@Z\@5\@\@Z
     */
    virtual void
    uploadChunk(struct FileInfo const&, struct FileChunkInfo const&, std::vector<unsigned char> const&, std::function<void(bool)>);
    /**
     * @vftbl 6
     * @symbol
     * ?uploadStream\@IFileChunkUploader\@\@UEAAXAEBUFileInfo\@\@_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6AXW4UploadStreamResult\@IFileChunkUploader\@\@\@Z\@4\@\@Z
     */
    virtual void
    uploadStream(struct FileInfo const&, uint64_t, std::string const&, std::function<void(enum class IFileChunkUploader::UploadStreamResult)>);
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7() = 0;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8() = 0;
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9() = 0;
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10() = 0;
    /**
     * @vftbl 11
     * @symbol ?getChunkInfo\@IFileChunkUploader\@\@UEBA?AUFileChunkInfo\@\@AEBUFileInfo\@\@H\@Z
     */
    virtual struct FileChunkInfo getChunkInfo(struct FileInfo const&, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IFILECHUNKUPLOADER
    /**
     * @symbol ?confirmChunkReceived\@IFileChunkUploader\@\@UEAAXAEBUFileInfo\@\@AEBUFileChunkInfo\@\@\@Z
     */
    MCVAPI void confirmChunkReceived(struct FileInfo const&, struct FileChunkInfo const&);
    /**
     * @symbol ?update\@IFileChunkUploader\@\@UEAAXXZ
     */
    MCVAPI void update();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IFileChunkUploader();
#endif
    /**
     * @symbol ??0IFileChunkUploader\@\@QEAA\@XZ
     */
    MCAPI IFileChunkUploader();
    // NOLINTEND
};
