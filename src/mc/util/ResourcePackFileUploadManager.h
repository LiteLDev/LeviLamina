#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FileUploadManager.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ResourcePackFileUploadManager : public ::FileUploadManager {

public:
    // prevent constructor by default
    ResourcePackFileUploadManager& operator=(ResourcePackFileUploadManager const&) = delete;
    ResourcePackFileUploadManager(ResourcePackFileUploadManager const&)            = delete;
    ResourcePackFileUploadManager()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol
     * ?uploadFileToRealmStorage\@ResourcePackFileUploadManager\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@H0\@Z
     */
    virtual void uploadFileToRealmStorage(std::string const&, class Core::Path const&, int, std::string const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKFILEUPLOADMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePackFileUploadManager();
#endif
    /**
     * @symbol
     * ?uploadResourcePack\@ResourcePackFileUploadManager\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVResourceLocation\@\@_N2W4PackType\@\@\@Z
     */
    MCAPI void uploadResourcePack(std::string const&, class ResourceLocation const&, bool, bool, enum class PackType);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_uploadPackToRealmStorage\@ResourcePackFileUploadManager\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@H0\@Z
     */
    MCAPI void _uploadPackToRealmStorage(std::string const&, class Core::Path const&, int, std::string const&);
    /**
     * @symbol
     * ?_uploadResourcePackFolder\@ResourcePackFileUploadManager\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVResourceLocation\@\@AEBVPath\@Core\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI void
    _uploadResourcePackFolder(std::string const&, class ResourceLocation const&, class Core::Path const&, class Json::Value const&);
    // NOLINTEND
};
