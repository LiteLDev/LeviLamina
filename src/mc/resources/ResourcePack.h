#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class ResourcePack {

public:
    // prevent constructor by default
    ResourcePack& operator=(ResourcePack const&) = delete;
    ResourcePack(ResourcePack const&)            = delete;
    ResourcePack()                               = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACK
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePack(); // NOLINT
#endif
    /**
     * @symbol ??0ResourcePack\@\@QEAA\@AEAVPack\@\@\@Z
     */
    MCAPI ResourcePack(class Pack&); // NOLINT
    /**
     * @symbol ?areKnownFilesValid\@ResourcePack\@\@QEAA_NXZ
     */
    MCAPI bool areKnownFilesValid(); // NOLINT
    /**
     * @symbol
     * ?forEachIn\@ResourcePack\@\@QEBAXAEBVPath\@Core\@\@V?$function\@$$A6AXAEBVPath\@Core\@\@\@Z\@std\@\@H_N\@Z
     */
    MCAPI void
    forEachIn(class Core::Path const&, class std::function<void(class Core::Path const&)>, int, bool) const; // NOLINT
    /**
     * @symbol ?generateAssetSet\@ResourcePack\@\@QEAAXXZ
     */
    MCAPI void generateAssetSet(); // NOLINT
    /**
     * @symbol ?getManifest\@ResourcePack\@\@QEAAAEAVPackManifest\@\@XZ
     */
    MCAPI class PackManifest& getManifest(); // NOLINT
    /**
     * @symbol ?getPackCategory\@ResourcePack\@\@QEBA?AW4PackCategory\@\@XZ
     */
    MCAPI enum class PackCategory getPackCategory() const; // NOLINT
    /**
     * @symbol ?getPackId\@ResourcePack\@\@QEBAAEBVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID const& getPackId() const; // NOLINT
    /**
     * @symbol ?getPackOrigin\@ResourcePack\@\@QEBA?AW4PackOrigin\@\@XZ
     */
    MCAPI enum class PackOrigin getPackOrigin() const; // NOLINT
    /**
     * @symbol
     * ?getResource\@ResourcePack\@\@QEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI bool getResource(class Core::Path const&, std::string&, int) const; // NOLINT
    /**
     * @symbol ?getResourceLocation\@ResourcePack\@\@QEBAAEBVResourceLocation\@\@XZ
     */
    MCAPI class ResourceLocation const& getResourceLocation() const; // NOLINT
    /**
     * @symbol ?getSubpackInfoStack\@ResourcePack\@\@QEBAAEBVSubpackInfoCollection\@\@XZ
     */
    MCAPI class SubpackInfoCollection const& getSubpackInfoStack() const; // NOLINT
    /**
     * @symbol ?getVersion\@ResourcePack\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const& getVersion() const; // NOLINT
    /**
     * @symbol ?hasResource\@ResourcePack\@\@QEBA_NAEBVPath\@Core\@\@H\@Z
     */
    MCAPI bool hasResource(class Core::Path const&, int) const; // NOLINT
    /**
     * @symbol ?isType\@ResourcePack\@\@QEBA_NW4PackType\@\@\@Z
     */
    MCAPI bool isType(enum class PackType) const; // NOLINT
    /**
     * @symbol ?isZipped\@ResourcePack\@\@QEBA_NXZ
     */
    MCAPI bool isZipped() const; // NOLINT
    /**
     * @symbol ?setAsSlicePack\@ResourcePack\@\@QEAAXXZ
     */
    MCAPI void setAsSlicePack(); // NOLINT
    /**
     * @symbol
     * ?setLocale\@ResourcePack\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setLocale(std::string const&); // NOLINT
    /**
     * @symbol ?unregisterDeleteCallback\@ResourcePack\@\@QEAAXPEAX\@Z
     */
    MCAPI void unregisterDeleteCallback(void*); // NOLINT
    /**
     * @symbol
     * ?RESOURCE_PACK_BUG_ICON_PATH\@ResourcePack\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_BUG_ICON_PATH; // NOLINT
    /**
     * @symbol
     * ?RESOURCE_PACK_ICON_PATH\@ResourcePack\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_ICON_PATH; // NOLINT
    /**
     * @symbol
     * ?TEXTURES_LIST_PATH\@ResourcePack\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const TEXTURES_LIST_PATH; // NOLINT

    // private:
    /**
     * @symbol ?_createSubpack\@ResourcePack\@\@AEAAXAEBUSubpackInfo\@\@\@Z
     */
    MCAPI void _createSubpack(struct SubpackInfo const&); // NOLINT
    /**
     * @symbol ?_createSubpacks\@ResourcePack\@\@AEAAXXZ
     */
    MCAPI void _createSubpacks(); // NOLINT
    /**
     * @symbol ?_generateIconPath\@ResourcePack\@\@AEAAXXZ
     */
    MCAPI void _generateIconPath(); // NOLINT

private:
};
