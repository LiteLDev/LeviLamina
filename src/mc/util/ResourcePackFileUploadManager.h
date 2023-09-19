#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackType.h"
#include "mc/util/FileUploadManager.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ResourcePackFileUploadManager : public ::FileUploadManager {
public:
    // prevent constructor by default
    ResourcePackFileUploadManager& operator=(ResourcePackFileUploadManager const&);
    ResourcePackFileUploadManager(ResourcePackFileUploadManager const&);
    ResourcePackFileUploadManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol:
    // ?uploadFileToRealmStorage@ResourcePackFileUploadManager@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@H0@Z
    virtual void uploadFileToRealmStorage(std::string const&, class Core::Path const&, int, std::string const&);

    // symbol: ??1ResourcePackFileUploadManager@@UEAA@XZ
    MCVAPI ~ResourcePackFileUploadManager();

    // symbol:
    // ?uploadResourcePack@ResourcePackFileUploadManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVResourceLocation@@_N2W4PackType@@@Z
    MCAPI void uploadResourcePack(std::string const&, class ResourceLocation const&, bool, bool, ::PackType);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_uploadPackToRealmStorage@ResourcePackFileUploadManager@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@H0@Z
    MCAPI void _uploadPackToRealmStorage(std::string const&, class Core::Path const&, int, std::string const&);

    // symbol:
    // ?_uploadResourcePackFolder@ResourcePackFileUploadManager@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVResourceLocation@@AEBVPath@Core@@AEBVValue@Json@@@Z
    MCAPI void
    _uploadResourcePackFolder(std::string const&, class ResourceLocation const&, class Core::Path const&, class Json::Value const&);

    // NOLINTEND
};
