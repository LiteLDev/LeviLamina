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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEUPLOADMANAGER_MULTIPARTSTREAMHELPER
    public:
        MultiPartStreamHelper& operator=(MultiPartStreamHelper const&) = delete;
        MultiPartStreamHelper(MultiPartStreamHelper const&)            = delete;
        MultiPartStreamHelper()                                        = delete;
#endif

    public:
        /**
         * @symbol ??1MultiPartStreamHelper\@FileUploadManager\@\@QEAA\@XZ
         */
        MCAPI ~MultiPartStreamHelper();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEUPLOADMANAGER
public:
    FileUploadManager& operator=(FileUploadManager const&) = delete;
    FileUploadManager(FileUploadManager const&)            = delete;
    FileUploadManager()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getUploadProgress\@FileUploadManager\@\@UEBAMXZ
     */
    virtual float getUploadProgress() const;
    /**
     * @vftbl 2
     * @symbol
     * ?uploadFileToRealmStorage\@ResourcePackFileUploadManager\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@H0\@Z
     */
    virtual void uploadFileToRealmStorage(std::string const&, class Core::Path const&, int, std::string const&) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILEUPLOADMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FileUploadManager();
#endif
    /**
     * @symbol ??0FileUploadManager\@\@QEAA\@AEAVTaskGroup\@\@V?$shared_ptr\@VIFileChunkUploader\@\@\@std\@\@\@Z
     */
    MCAPI FileUploadManager(class TaskGroup&, class std::shared_ptr<class IFileChunkUploader>);
    /**
     * @symbol ?addCallbackQueue\@FileUploadManager\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void addCallbackQueue(class std::function<void(void)>);
    /**
     * @symbol ?setFailed\@FileUploadManager\@\@QEAAXW4UploadError\@\@\@Z
     */
    MCAPI void setFailed(enum class UploadError);
    /**
     * @symbol ?setUseStream\@FileUploadManager\@\@QEAAX_N\@Z
     */
    MCAPI void setUseStream(bool);
    /**
     * @symbol ?update\@FileUploadManager\@\@QEAAXXZ
     */
    MCAPI void update();
    /**
     * @symbol ?uploadChunk\@FileUploadManager\@\@QEAAXH\@Z
     */
    MCAPI void uploadChunk(int);
    /**
     * @symbol
     * ?uploadFile\@FileUploadManager\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@_NAEBVValue\@Json\@\@\@Z
     */
    MCAPI void uploadFile(std::string const&, class Core::Path const&, bool, class Json::Value const&);

    // protected:
    /**
     * @symbol ?_generateMultiPartHelper\@FileUploadManager\@\@IEAAXXZ
     */
    MCAPI void _generateMultiPartHelper();
    /**
     * @symbol ?_resumeUpload\@FileUploadManager\@\@IEAAXXZ
     */
    MCAPI void _resumeUpload();
    /**
     * @symbol ?_uploadChunk\@FileUploadManager\@\@IEAAXAEBUFileChunkInfo\@\@\@Z
     */
    MCAPI void _uploadChunk(struct FileChunkInfo const&);
    /**
     * @symbol ?_uploadStream\@FileUploadManager\@\@IEAAXXZ
     */
    MCAPI void _uploadStream();

    // private:

protected:
    /**
     * @symbol ?CHUNK_UPLOAD_SIZE\@FileUploadManager\@\@1HB
     */
    MCAPI static int const CHUNK_UPLOAD_SIZE;

private:
    /**
     * @symbol
     * ?BOUNDARY\@FileUploadManager\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BOUNDARY;
};
