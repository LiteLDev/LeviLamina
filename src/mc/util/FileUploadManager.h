#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class FileUploadManager {
public:
    // FileUploadManager inner types declare
    // clang-format off
    class MultiPartStreamHelper;
    // clang-format on

    // FileUploadManager inner types define
    class MultiPartStreamHelper {

    public:
        // prevent constructor by default
        MultiPartStreamHelper& operator=(MultiPartStreamHelper const&) = delete;
        MultiPartStreamHelper(MultiPartStreamHelper const&)            = delete;
        MultiPartStreamHelper()                                        = delete;

    public:
        /**
         * @symbol ??1MultiPartStreamHelper\@FileUploadManager\@\@QEAA\@XZ
         */
        MCAPI ~MultiPartStreamHelper(); // NOLINT
    };

public:
    // prevent constructor by default
    FileUploadManager& operator=(FileUploadManager const&) = delete;
    FileUploadManager(FileUploadManager const&)            = delete;
    FileUploadManager()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getUploadProgress\@FileUploadManager\@\@UEBAMXZ
     */
    virtual float getUploadProgress() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?uploadFileToRealmStorage\@ResourcePackFileUploadManager\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@H0\@Z
     */
    virtual void
    uploadFileToRealmStorage(std::string const&, class Core::Path const&, int, std::string const&) = 0; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILEUPLOADMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FileUploadManager(); // NOLINT
#endif
    /**
     * @symbol ??0FileUploadManager\@\@QEAA\@AEAVTaskGroup\@\@V?$shared_ptr\@VIFileChunkUploader\@\@\@std\@\@\@Z
     */
    MCAPI FileUploadManager(class TaskGroup&, class std::shared_ptr<class IFileChunkUploader>); // NOLINT
    /**
     * @symbol ?addCallbackQueue\@FileUploadManager\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void addCallbackQueue(class std::function<void(void)>); // NOLINT
    /**
     * @symbol ?setFailed\@FileUploadManager\@\@QEAAXW4UploadError\@\@\@Z
     */
    MCAPI void setFailed(enum class UploadError); // NOLINT
    /**
     * @symbol ?setUseStream\@FileUploadManager\@\@QEAAX_N\@Z
     */
    MCAPI void setUseStream(bool); // NOLINT
    /**
     * @symbol ?update\@FileUploadManager\@\@QEAAXXZ
     */
    MCAPI void update(); // NOLINT
    /**
     * @symbol ?uploadChunk\@FileUploadManager\@\@QEAAXH\@Z
     */
    MCAPI void uploadChunk(int); // NOLINT
    /**
     * @symbol
     * ?uploadFile\@FileUploadManager\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@_NAEBVValue\@Json\@\@\@Z
     */
    MCAPI void uploadFile(std::string const&, class Core::Path const&, bool, class Json::Value const&); // NOLINT

    // protected:
    /**
     * @symbol ?_generateMultiPartHelper\@FileUploadManager\@\@IEAAXXZ
     */
    MCAPI void _generateMultiPartHelper(); // NOLINT
    /**
     * @symbol ?_resumeUpload\@FileUploadManager\@\@IEAAXXZ
     */
    MCAPI void _resumeUpload(); // NOLINT
    /**
     * @symbol ?_uploadChunk\@FileUploadManager\@\@IEAAXAEBUFileChunkInfo\@\@\@Z
     */
    MCAPI void _uploadChunk(struct FileChunkInfo const&); // NOLINT
    /**
     * @symbol ?_uploadStream\@FileUploadManager\@\@IEAAXXZ
     */
    MCAPI void _uploadStream(); // NOLINT

    // private:

protected:
    /**
     * @symbol ?CHUNK_UPLOAD_SIZE\@FileUploadManager\@\@1HB
     */
    MCAPI static int const CHUNK_UPLOAD_SIZE; // NOLINT

private:
    /**
     * @symbol
     * ?BOUNDARY\@FileUploadManager\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BOUNDARY; // NOLINT
};
