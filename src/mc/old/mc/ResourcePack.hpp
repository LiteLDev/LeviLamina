/**
 * @file  ResourcePack.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum class PackOrigin : int {
    PackOrigin_Unknown = 0x0,
    PackOrigin_RealmsUnknown = 0x1,
    PackOrigin_Package = 0x2,
    PackOrigin_Treatment = 0x3,
    PackOrigin_Dev = 0x4,
    PackOrigin_World = 0x5,
    PackOrigin_User = 0x6,
    PackOrigin_TempCache = 0x7,
    PackOrigin_PremiumCache = 0x8,
    PackOrigin_PremiumTempCache = 0x9,
};

enum class PackType : char {
    PackType_Invalid = 0x0,
    PackType_Addon = 0x1,
    PackType_Cached = 0x2,
    PackType_CopyProtected = 0x3,
    PackType_Behavior = 0x4,
    PackType_PersonaPiece = 0x5,
    PackType_Resources = 0x6,
    PackType_Skins = 0x7,
    PackType_WorldTemplate = 0x8,
    PackType_Count = 0x9,
};

enum class PackCategory : int {
    PackCategory_Unknown = 0x0,
    PackCategory_RealmsUnknown = 0x1,
    PackCategory_Standard = 0x2,
    PackCategory_Premium = 0x3,
    PackCategory_Custom = 0x4,
    PackCategory_Subpack = 0x5,
};

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePack.
 *
 */
class ResourcePack {

#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACK
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACK
public:
    class ResourcePack& operator=(class ResourcePack const &) = delete;
    ResourcePack(class ResourcePack const &) = delete;
    ResourcePack() = delete;
#endif

public:
    /**
     * @symbol  ??0ResourcePack\@\@QEAA\@AEAVPack\@\@\@Z
     */
    MCAPI ResourcePack(class Pack &);
    /**
     * @symbol  ?areKnownFilesValid\@ResourcePack\@\@QEAA_NXZ
     */
    MCAPI bool areKnownFilesValid();
    /**
     * @symbol  ?forEachIn\@ResourcePack\@\@QEBAXAEBVPath\@Core\@\@V?$function\@$$A6AXAEBVPath\@Core\@\@\@Z\@std\@\@H_N\@Z
     */
    MCAPI void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, int, bool) const;
    /**
     * @symbol  ?generateAssetSet\@ResourcePack\@\@QEAAXXZ
     */
    MCAPI void generateAssetSet();
    /**
     * @symbol  ?getFolderName\@ResourcePack\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getFolderName() const;
    /**
     * @symbol  ?getLoadTime\@ResourcePack\@\@QEBANXZ
     */
    MCAPI double getLoadTime() const;
    /**
     * @symbol  ?getManifest\@ResourcePack\@\@QEAAAEAVPackManifest\@\@XZ
     */
    MCAPI class PackManifest & getManifest();
    /**
     * @symbol  ?getPackCategory\@ResourcePack\@\@QEBA?AW4PackCategory\@\@XZ
     */
    MCAPI enum class PackCategory getPackCategory() const;
    /**
     * @symbol  ?getPackId\@ResourcePack\@\@QEBAAEBVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID const & getPackId() const;
    /**
     * @symbol  ?getPackOrigin\@ResourcePack\@\@QEBA?AW4PackOrigin\@\@XZ
     */
    MCAPI enum class PackOrigin getPackOrigin() const;
    /**
     * @symbol  ?getResource\@ResourcePack\@\@QEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI bool getResource(class Core::Path const &, std::string &, int) const;
    /**
     * @symbol  ?getResourceLocation\@ResourcePack\@\@QEBAAEBVResourceLocation\@\@XZ
     */
    MCAPI class ResourceLocation const & getResourceLocation() const;
    /**
     * @symbol  ?getSubpackCount\@ResourcePack\@\@QEBAHXZ
     */
    MCAPI int getSubpackCount() const;
    /**
     * @symbol  ?getSubpackFolderName\@ResourcePack\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI std::string const & getSubpackFolderName(int) const;
    /**
     * @symbol  ?getSubpackIndex\@ResourcePack\@\@QEBAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI int getSubpackIndex(std::string const &) const;
    /**
     * @symbol  ?getSubpackInfoStack\@ResourcePack\@\@QEBAAEBVSubpackInfoCollection\@\@XZ
     */
    MCAPI class SubpackInfoCollection const & getSubpackInfoStack() const;
    /**
     * @symbol  ?getVersion\@ResourcePack\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const & getVersion() const;
    /**
     * @symbol  ?hasResource\@ResourcePack\@\@QEBA_NAEBVPath\@Core\@\@H\@Z
     */
    MCAPI bool hasResource(class Core::Path const &, int) const;
    /**
     * @symbol  ?isBaseGamePack\@ResourcePack\@\@QEBA_NXZ
     */
    MCAPI bool isBaseGamePack() const;
    /**
     * @symbol  ?isSlicePack\@ResourcePack\@\@QEBA_NXZ
     */
    MCAPI bool isSlicePack() const;
    /**
     * @symbol  ?isType\@ResourcePack\@\@QEBA_NW4PackType\@\@\@Z
     */
    MCAPI bool isType(enum class PackType) const;
    /**
     * @symbol  ?isZipped\@ResourcePack\@\@QEBA_NXZ
     */
    MCAPI bool isZipped() const;
    /**
     * @symbol  ?setAsSlicePack\@ResourcePack\@\@QEAAXXZ
     */
    MCAPI void setAsSlicePack();
    /**
     * @symbol  ?setError\@ResourcePack\@\@QEAAXXZ
     */
    MCAPI void setError();
    /**
     * @symbol  ?setLoadTime\@ResourcePack\@\@QEAAXN\@Z
     */
    MCAPI void setLoadTime(double);
    /**
     * @symbol  ?setLocale\@ResourcePack\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setLocale(std::string const &);
    /**
     * @symbol  ?unregisterDeleteCallback\@ResourcePack\@\@QEAAXPEAX\@Z
     */
    MCAPI void unregisterDeleteCallback(void *);
    /**
     * @symbol  ?RESOURCE_PACK_BUG_ICON_PATH\@ResourcePack\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_BUG_ICON_PATH;
    /**
     * @symbol  ?RESOURCE_PACK_ICON_PATH\@ResourcePack\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_ICON_PATH;
    /**
     * @symbol  ?TEXTURES_LIST_PATH\@ResourcePack\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const TEXTURES_LIST_PATH;

//private:
    /**
     * @symbol  ?_createSubpack\@ResourcePack\@\@AEAAXAEBUSubpackInfo\@\@\@Z
     */
    MCAPI void _createSubpack(struct SubpackInfo const &);
    /**
     * @symbol  ?_createSubpacks\@ResourcePack\@\@AEAAXXZ
     */
    MCAPI void _createSubpacks();
    /**
     * @symbol  ?_generateIconPath\@ResourcePack\@\@AEAAXXZ
     */
    MCAPI void _generateIconPath();

private:

};