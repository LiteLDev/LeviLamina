/**
 * @file  ResourcePackFileUploadManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "Json.hpp"
#include "FileUploadManager.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePackFileUploadManager.
 *
 */
class ResourcePackFileUploadManager : public FileUploadManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKFILEUPLOADMANAGER
public:
    class ResourcePackFileUploadManager& operator=(class ResourcePackFileUploadManager const &) = delete;
    ResourcePackFileUploadManager(class ResourcePackFileUploadManager const &) = delete;
    ResourcePackFileUploadManager() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ResourcePackFileUploadManager();
    /**
     * @vftbl  2
     * @symbol  ?uploadFileToRealmStorage\@ResourcePackFileUploadManager\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@H0\@Z
     */
    virtual void uploadFileToRealmStorage(std::string const &, class Core::Path const &, int, std::string const &);
    /**
     * @symbol  ??0ResourcePackFileUploadManager\@\@QEAA\@AEAVTaskGroup\@\@V?$shared_ptr\@VIFileChunkUploader\@\@\@std\@\@\@Z
     */
    MCAPI ResourcePackFileUploadManager(class TaskGroup &, class std::shared_ptr<class IFileChunkUploader>);
    /**
     * @symbol  ?uploadResourcePack\@ResourcePackFileUploadManager\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVResourceLocation\@\@_N2W4PackType\@\@\@Z
     */
    MCAPI void uploadResourcePack(std::string const &, class ResourceLocation const &, bool, bool, enum class PackType);

//private:
    /**
     * @symbol  ?_uploadPackToRealmStorage\@ResourcePackFileUploadManager\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@H0\@Z
     */
    MCAPI void _uploadPackToRealmStorage(std::string const &, class Core::Path const &, int, std::string const &);
    /**
     * @symbol  ?_uploadResourcePackFolder\@ResourcePackFileUploadManager\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVResourceLocation\@\@AEBVPath\@Core\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI void _uploadResourcePackFolder(std::string const &, class ResourceLocation const &, class Core::Path const &, class Json::Value const &);

private:

};