#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/resources/PackCategory.h"
#include "mc/resources/PackOrigin.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class ResourcePack : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ResourcePack& operator=(ResourcePack const&);
    ResourcePack(ResourcePack const&);
    ResourcePack();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ResourcePack@@UEAA@XZ
    virtual ~ResourcePack();

    // symbol: ??0ResourcePack@@QEAA@AEAVPack@@@Z
    MCAPI explicit ResourcePack(class Pack& pack);

    // symbol: ?areKnownFilesValid@ResourcePack@@QEAA_NXZ
    MCAPI bool areKnownFilesValid();

    // symbol: ?forEachIn@ResourcePack@@QEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@H_N@Z
    MCAPI void forEachIn(
        class Core::Path const&                      filePath,
        std::function<void(class Core::Path const&)> callback,
        int                                          subpackIndex,
        bool                                         recurseAnyways
    ) const;

    // symbol: ?generateAssetSet@ResourcePack@@QEAAXXZ
    MCAPI void generateAssetSet();

    // symbol: ?getFolderName@ResourcePack@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getFolderName() const;

    // symbol: ?getLoadTime@ResourcePack@@QEBANXZ
    MCAPI double getLoadTime() const;

    // symbol: ?getManifest@ResourcePack@@QEAAAEAVPackManifest@@XZ
    MCAPI class PackManifest& getManifest();

    // symbol: ?getPackCategory@ResourcePack@@QEBA?AW4PackCategory@@XZ
    MCAPI ::PackCategory getPackCategory() const;

    // symbol: ?getPackId@ResourcePack@@QEBAAEBVUUID@mce@@XZ
    MCAPI class mce::UUID const& getPackId() const;

    // symbol: ?getPackOrigin@ResourcePack@@QEBA?AW4PackOrigin@@XZ
    MCAPI ::PackOrigin getPackOrigin() const;

    // symbol:
    // ?getResource@ResourcePack@@QEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI bool getResource(class Core::Path const& resourceName, std::string& resourceStream, int subpackIndex) const;

    // symbol: ?getResourceLocation@ResourcePack@@QEBAAEBVResourceLocation@@XZ
    MCAPI class ResourceLocation const& getResourceLocation() const;

    // symbol: ?getSubpackCount@ResourcePack@@QEBAHXZ
    MCAPI int getSubpackCount() const;

    // symbol:
    // ?getSubpackFolderName@ResourcePack@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI std::string const& getSubpackFolderName(int) const;

    // symbol: ?getSubpackIndex@ResourcePack@@QEBAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI int getSubpackIndex(std::string const& name) const;

    // symbol: ?getSubpackInfoStack@ResourcePack@@QEBAAEBVSubpackInfoCollection@@XZ
    MCAPI class SubpackInfoCollection const& getSubpackInfoStack() const;

    // symbol: ?getVersion@ResourcePack@@QEBAAEBVSemVersion@@XZ
    MCAPI class SemVersion const& getVersion() const;

    // symbol: ?hasResource@ResourcePack@@QEBA_NAEBVPath@Core@@H@Z
    MCAPI bool hasResource(class Core::Path const& resourceName, int subpackIndex) const;

    // symbol: ?isBaseGamePack@ResourcePack@@QEBA_NXZ
    MCAPI bool isBaseGamePack() const;

    // symbol: ?isSlicePack@ResourcePack@@QEBA_NXZ
    MCAPI bool isSlicePack() const;

    // symbol: ?isZipped@ResourcePack@@QEBA_NXZ
    MCAPI bool isZipped() const;

    // symbol: ?setAsSlicePack@ResourcePack@@QEAAXXZ
    MCAPI void setAsSlicePack();

    // symbol: ?setError@ResourcePack@@QEAAXXZ
    MCAPI void setError();

    // symbol: ?setLoadTime@ResourcePack@@QEAAXN@Z
    MCAPI void setLoadTime(double loadTime);

    // symbol: ?setLocale@ResourcePack@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setLocale(std::string const& code);

    // symbol: ?unregisterDeleteCallback@ResourcePack@@QEAAXPEAX@Z
    MCAPI void unregisterDeleteCallback(void* owner);

    // symbol:
    // ?RESOURCE_PACK_BUG_ICON_PATH@ResourcePack@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_BUG_ICON_PATH;

    // symbol:
    // ?RESOURCE_PACK_ICON_PATH@ResourcePack@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_ICON_PATH;

    // symbol:
    // ?TEXTURES_LIST_PATH@ResourcePack@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
    MCAPI static class Core::PathBuffer<std::string> const TEXTURES_LIST_PATH;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_createSubpack@ResourcePack@@AEAAXAEBUSubpackInfo@@@Z
    MCAPI void _createSubpack(struct SubpackInfo const& subpackInfo);

    // symbol: ?_createSubpacks@ResourcePack@@AEAAXXZ
    MCAPI void _createSubpacks();

    // symbol: ?_generateIconPath@ResourcePack@@AEAAXXZ
    MCAPI void _generateIconPath();

    // NOLINTEND
};
