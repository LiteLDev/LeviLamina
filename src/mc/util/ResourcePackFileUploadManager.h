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
    // vIndex: 0, symbol: ??1ResourcePackFileUploadManager@@UEAA@XZ
    virtual ~ResourcePackFileUploadManager();

    // vIndex: 2, symbol:
    // ?uploadFileToRealmStorage@ResourcePackFileUploadManager@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@H0@Z
    virtual void uploadFileToRealmStorage(
        std::string const&      uploadId,
        class Core::Path const& path,
        int                     slotIndex,
        std::string const&      realmsGuid
    );

    // symbol:
    // ?uploadResourcePack@ResourcePackFileUploadManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVResourceLocation@@_N2W4PackType@@@Z
    MCAPI void uploadResourcePack(
        std::string const&            resourcePackName,
        class ResourceLocation const& resourceLocation,
        bool                          isZipped,
        bool                          isPremium,
        ::PackType                    packType
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_uploadPackToRealmStorage@ResourcePackFileUploadManager@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@H0@Z
    MCAPI void
    _uploadPackToRealmStorage(std::string const& uploadId, class Core::Path const& path, int slotIndex, std::string const&);

    // symbol:
    // ?_uploadResourcePackFolder@ResourcePackFileUploadManager@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVResourceLocation@@AEBVPath@Core@@AEBVValue@Json@@@Z
    MCAPI void _uploadResourcePackFolder(
        std::string const&            resourcePack,
        class ResourceLocation const& resourcePackLocation,
        class Core::Path const&       resourceZipPath,
        class Json::Value const&      uploadOptions
    );

    // NOLINTEND
};
