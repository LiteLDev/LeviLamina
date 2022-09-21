/**
 * @file  MC/FileUploadManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~FileUploadManager();
    /**
     * @hash   1049772034
     * @vftbl  1
     * @symbol ?getUploadProgress@FileUploadManager@@UEBAMXZ
     */
    virtual float getUploadProgress() const;
    /**
     * @hash   2017177756
     * @vftbl  2
     * @symbol ?uploadFileToRealmStorage@ResourcePackFileUploadManager@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@H0@Z
     */
    virtual void uploadFileToRealmStorage(std::string const &, class Core::Path const &, int, std::string const &) = 0;
    /**
     * @hash   -2135730723
     * @symbol ??0FileUploadManager@@QEAA@AEAVTaskGroup@@V?$shared_ptr@VIFileChunkUploader@@@std@@@Z
     */
    MCAPI FileUploadManager(class TaskGroup &, class std::shared_ptr<class IFileChunkUploader>);
    /**
     * @hash   683100438
     * @symbol ?addCallbackQueue@FileUploadManager@@QEAAXV?$function@$$A6AXXZ@std@@@Z
     */
    MCAPI void addCallbackQueue(class std::function<void (void)>);
    /**
     * @hash   -571574470
     * @symbol ?setFailed@FileUploadManager@@QEAAXW4UploadError@@@Z
     */
    MCAPI void setFailed(enum UploadError);
    /**
     * @hash   -1418932468
     * @symbol ?setUseStream@FileUploadManager@@QEAAX_N@Z
     */
    MCAPI void setUseStream(bool);
    /**
     * @hash   733886901
     * @symbol ?update@FileUploadManager@@QEAAXXZ
     */
    MCAPI void update();
    /**
     * @hash   991034414
     * @symbol ?uploadChunk@FileUploadManager@@QEAAXH@Z
     */
    MCAPI void uploadChunk(int);
    /**
     * @hash   1435858729
     * @symbol ?uploadFile@FileUploadManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@_NAEBVValue@Json@@@Z
     */
    MCAPI void uploadFile(std::string const &, class Core::Path const &, bool, class Json::Value const &);

//protected:
    /**
     * @hash   160906473
     * @symbol ?_generateMultiPartHelper@FileUploadManager@@IEAAXXZ
     */
    MCAPI void _generateMultiPartHelper();
    /**
     * @hash   941643792
     * @symbol ?_resumeUpload@FileUploadManager@@IEAAXXZ
     */
    MCAPI void _resumeUpload();
    /**
     * @hash   -1327236755
     * @symbol ?_uploadChunk@FileUploadManager@@IEAAXAEBUFileChunkInfo@@@Z
     */
    MCAPI void _uploadChunk(struct FileChunkInfo const &);
    /**
     * @hash   368019603
     * @symbol ?_uploadStream@FileUploadManager@@IEAAXXZ
     */
    MCAPI void _uploadStream();

//private:

protected:
    /**
     * @hash   -923614013
     * @symbol ?CHUNK_UPLOAD_SIZE@FileUploadManager@@1HB
     */
    MCAPI static int const CHUNK_UPLOAD_SIZE;

private:
    /**
     * @hash   406708525
     * @symbol ?BOUNDARY@FileUploadManager@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const BOUNDARY;

};