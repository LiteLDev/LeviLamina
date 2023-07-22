/**
 * @file  FileUploadManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FileUploadManager.
 *
 */
class FileUploadManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEUPLOADMANAGER
public:
    class FileUploadManager& operator=(class FileUploadManager const &) = delete;
    FileUploadManager(class FileUploadManager const &) = delete;
    FileUploadManager() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FileUploadManager();
    /**
     * @vftbl  1
     * @symbol  ?getUploadProgress\@FileUploadManager\@\@UEBAMXZ
     */
    virtual float getUploadProgress() const;
    /**
     * @vftbl  2
     * @symbol  ?uploadFileToRealmStorage\@ResourcePackFileUploadManager\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@H0\@Z
     */
    virtual void uploadFileToRealmStorage(std::string const &, class Core::Path const &, int, std::string const &) = 0;
    /**
     * @symbol  ??0FileUploadManager\@\@QEAA\@AEAVTaskGroup\@\@V?$shared_ptr\@VIFileChunkUploader\@\@\@std\@\@\@Z
     */
    MCAPI FileUploadManager(class TaskGroup &, class std::shared_ptr<class IFileChunkUploader>);
    /**
     * @symbol  ?addCallbackQueue\@FileUploadManager\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void addCallbackQueue(class std::function<void (void)>);
    /**
     * @symbol  ?setFailed\@FileUploadManager\@\@QEAAXW4UploadError\@\@\@Z
     */
    MCAPI void setFailed(enum class UploadError);
    /**
     * @symbol  ?setUseStream\@FileUploadManager\@\@QEAAX_N\@Z
     */
    MCAPI void setUseStream(bool);
    /**
     * @symbol  ?update\@FileUploadManager\@\@QEAAXXZ
     */
    MCAPI void update();
    /**
     * @symbol  ?uploadChunk\@FileUploadManager\@\@QEAAXH\@Z
     */
    MCAPI void uploadChunk(int);
    /**
     * @symbol  ?uploadFile\@FileUploadManager\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@_NAEBVValue\@Json\@\@\@Z
     */
    MCAPI void uploadFile(std::string const &, class Core::Path const &, bool, class Json::Value const &);

//protected:
    /**
     * @symbol  ?_generateMultiPartHelper\@FileUploadManager\@\@IEAAXXZ
     */
    MCAPI void _generateMultiPartHelper();
    /**
     * @symbol  ?_resumeUpload\@FileUploadManager\@\@IEAAXXZ
     */
    MCAPI void _resumeUpload();
    /**
     * @symbol  ?_uploadChunk\@FileUploadManager\@\@IEAAXAEBUFileChunkInfo\@\@\@Z
     */
    MCAPI void _uploadChunk(struct FileChunkInfo const &);
    /**
     * @symbol  ?_uploadStream\@FileUploadManager\@\@IEAAXXZ
     */
    MCAPI void _uploadStream();

//private:

protected:
    /**
     * @symbol  ?CHUNK_UPLOAD_SIZE\@FileUploadManager\@\@1HB
     */
    MCAPI static int const CHUNK_UPLOAD_SIZE;

private:
    /**
     * @symbol  ?BOUNDARY\@FileUploadManager\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BOUNDARY;

};