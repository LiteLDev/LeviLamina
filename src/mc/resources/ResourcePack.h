#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class ResourcePack : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    ResourcePack& operator=(ResourcePack const&) = delete;
    ResourcePack(ResourcePack const&)            = delete;
    ResourcePack()                               = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACK
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePack();
#endif
    /**
     * @symbol ??0ResourcePack\@\@QEAA\@AEAVPack\@\@\@Z
     */
    MCAPI ResourcePack(class Pack&);
    /**
     * @symbol ?areKnownFilesValid\@ResourcePack\@\@QEAA_NXZ
     */
    MCAPI bool areKnownFilesValid();
    /**
     * @symbol
     * ?forEachIn\@ResourcePack\@\@QEBAXAEBVPath\@Core\@\@V?$function\@$$A6AXAEBVPath\@Core\@\@\@Z\@std\@\@H_N\@Z
     */
    MCAPI void forEachIn(class Core::Path const&, std::function<void(class Core::Path const&)>, int, bool) const;
    /**
     * @symbol ?generateAssetSet\@ResourcePack\@\@QEAAXXZ
     */
    MCAPI void generateAssetSet();
    /**
     * @symbol ?getManifest\@ResourcePack\@\@QEAAAEAVPackManifest\@\@XZ
     */
    MCAPI class PackManifest& getManifest();
    /**
     * @symbol ?getPackCategory\@ResourcePack\@\@QEBA?AW4PackCategory\@\@XZ
     */
    MCAPI enum class PackCategory getPackCategory() const;
    /**
     * @symbol ?getPackId\@ResourcePack\@\@QEBAAEBVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID const& getPackId() const;
    /**
     * @symbol ?getPackOrigin\@ResourcePack\@\@QEBA?AW4PackOrigin\@\@XZ
     */
    MCAPI enum class PackOrigin getPackOrigin() const;
    /**
     * @symbol
     * ?getResource\@ResourcePack\@\@QEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI bool getResource(class Core::Path const&, std::string&, int) const;
    /**
     * @symbol ?getResourceLocation\@ResourcePack\@\@QEBAAEBVResourceLocation\@\@XZ
     */
    MCAPI class ResourceLocation const& getResourceLocation() const;
    /**
     * @symbol ?getSubpackInfoStack\@ResourcePack\@\@QEBAAEBVSubpackInfoCollection\@\@XZ
     */
    MCAPI class SubpackInfoCollection const& getSubpackInfoStack() const;
    /**
     * @symbol ?getVersion\@ResourcePack\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const& getVersion() const;
    /**
     * @symbol ?hasResource\@ResourcePack\@\@QEBA_NAEBVPath\@Core\@\@H\@Z
     */
    MCAPI bool hasResource(class Core::Path const&, int) const;
    /**
     * @symbol ?isType\@ResourcePack\@\@QEBA_NW4PackType\@\@\@Z
     */
    MCAPI bool isType(enum class PackType) const;
    /**
     * @symbol ?isZipped\@ResourcePack\@\@QEBA_NXZ
     */
    MCAPI bool isZipped() const;
    /**
     * @symbol ?setAsSlicePack\@ResourcePack\@\@QEAAXXZ
     */
    MCAPI void setAsSlicePack();
    /**
     * @symbol
     * ?setLocale\@ResourcePack\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setLocale(std::string const&);
    /**
     * @symbol ?unregisterDeleteCallback\@ResourcePack\@\@QEAAXPEAX\@Z
     */
    MCAPI void unregisterDeleteCallback(void*);
    /**
     * @symbol
     * ?RESOURCE_PACK_BUG_ICON_PATH\@ResourcePack\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_BUG_ICON_PATH;
    /**
     * @symbol
     * ?RESOURCE_PACK_ICON_PATH\@ResourcePack\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_ICON_PATH;
    /**
     * @symbol
     * ?TEXTURES_LIST_PATH\@ResourcePack\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const TEXTURES_LIST_PATH;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_createSubpack\@ResourcePack\@\@AEAAXAEBUSubpackInfo\@\@\@Z
     */
    MCAPI void _createSubpack(struct SubpackInfo const&);
    /**
     * @symbol ?_createSubpacks\@ResourcePack\@\@AEAAXXZ
     */
    MCAPI void _createSubpacks();
    /**
     * @symbol ?_generateIconPath\@ResourcePack\@\@AEAAXXZ
     */
    MCAPI void _generateIconPath();
    // NOLINTEND
};
