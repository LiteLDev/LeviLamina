/**
 * @file  ResourcePack.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -772416216
     * @symbol ??0ResourcePack@@QEAA@AEAVPack@@@Z
     */
    MCAPI ResourcePack(class Pack &);
    /**
     * @hash   -39076552
     * @symbol ?areKnownFilesValid@ResourcePack@@QEAA_NXZ
     */
    MCAPI bool areKnownFilesValid();
    /**
     * @hash   -712171442
     * @symbol ?forEachIn@ResourcePack@@QEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@H_N@Z
     */
    MCAPI void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, int, bool) const;
    /**
     * @hash   985386117
     * @symbol ?generateAssetSet@ResourcePack@@QEAAXXZ
     */
    MCAPI void generateAssetSet();
    /**
     * @hash   274058620
     * @symbol ?getFolderName@ResourcePack@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getFolderName() const;
    /**
     * @hash   1993332910
     * @symbol ?getLoadTime@ResourcePack@@QEBANXZ
     */
    MCAPI double getLoadTime() const;
    /**
     * @hash   -974051190
     * @symbol ?getManifest@ResourcePack@@QEAAAEAVPackManifest@@XZ
     */
    MCAPI class PackManifest & getManifest();
    /**
     * @hash   -1503972810
     * @symbol ?getPackCategory@ResourcePack@@QEBA?AW4PackCategory@@XZ
     */
    MCAPI enum class PackCategory getPackCategory() const;
    /**
     * @hash   469922510
     * @symbol ?getPackId@ResourcePack@@QEBAAEBVUUID@mce@@XZ
     */
    MCAPI class mce::UUID const & getPackId() const;
    /**
     * @hash   -1220632010
     * @symbol ?getPackOrigin@ResourcePack@@QEBA?AW4PackOrigin@@XZ
     */
    MCAPI enum class PackOrigin getPackOrigin() const;
    /**
     * @hash   -2002845759
     * @symbol ?getResource@ResourcePack@@QEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI bool getResource(class Core::Path const &, std::string &, int) const;
    /**
     * @hash   352005754
     * @symbol ?getResourceLocation@ResourcePack@@QEBAAEBVResourceLocation@@XZ
     */
    MCAPI class ResourceLocation const & getResourceLocation() const;
    /**
     * @hash   1652292710
     * @symbol ?getSubpackCount@ResourcePack@@QEBAHXZ
     */
    MCAPI int getSubpackCount() const;
    /**
     * @hash   1393819611
     * @symbol ?getSubpackFolderName@ResourcePack@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI std::string const & getSubpackFolderName(int) const;
    /**
     * @hash   -1233865399
     * @symbol ?getSubpackIndex@ResourcePack@@QEBAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI int getSubpackIndex(std::string const &) const;
    /**
     * @hash   -1168409178
     * @symbol ?getSubpackInfoStack@ResourcePack@@QEBAAEBVSubpackInfoCollection@@XZ
     */
    MCAPI class SubpackInfoCollection const & getSubpackInfoStack() const;
    /**
     * @hash   776767350
     * @symbol ?getVersion@ResourcePack@@QEBAAEBVSemVersion@@XZ
     */
    MCAPI class SemVersion const & getVersion() const;
    /**
     * @hash   2091107326
     * @symbol ?hasResource@ResourcePack@@QEBA_NAEBVPath@Core@@H@Z
     */
    MCAPI bool hasResource(class Core::Path const &, int) const;
    /**
     * @hash   844288908
     * @symbol ?isBaseGamePack@ResourcePack@@QEBA_NXZ
     */
    MCAPI bool isBaseGamePack() const;
    /**
     * @hash   -1962467788
     * @symbol ?isSlicePack@ResourcePack@@QEBA_NXZ
     */
    MCAPI bool isSlicePack() const;
    /**
     * @hash   1638964919
     * @symbol ?isType@ResourcePack@@QEBA_NW4PackType@@@Z
     */
    MCAPI bool isType(enum class PackType) const;
    /**
     * @hash   290463216
     * @symbol ?isZipped@ResourcePack@@QEBA_NXZ
     */
    MCAPI bool isZipped() const;
    /**
     * @hash   -594931195
     * @symbol ?setAsSlicePack@ResourcePack@@QEAAXXZ
     */
    MCAPI void setAsSlicePack();
    /**
     * @hash   -143302027
     * @symbol ?setError@ResourcePack@@QEAAXXZ
     */
    MCAPI void setError();
    /**
     * @hash   -1717126464
     * @symbol ?setLoadTime@ResourcePack@@QEAAXN@Z
     */
    MCAPI void setLoadTime(double);
    /**
     * @hash   -2106098386
     * @symbol ?setLocale@ResourcePack@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setLocale(std::string const &);
    /**
     * @hash   -248688257
     * @symbol ?unregisterDeleteCallback@ResourcePack@@QEAAXPEAX@Z
     */
    MCAPI void unregisterDeleteCallback(void *);
    /**
     * @hash   -1200463800
     * @symbol ?RESOURCE_PACK_BUG_ICON_PATH@ResourcePack@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
     */
    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_BUG_ICON_PATH;
    /**
     * @hash   -913889016
     * @symbol ?RESOURCE_PACK_ICON_PATH@ResourcePack@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
     */
    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_ICON_PATH;
    /**
     * @hash   1022565258
     * @symbol ?TEXTURES_LIST_PATH@ResourcePack@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
     */
    MCAPI static class Core::PathBuffer<std::string> const TEXTURES_LIST_PATH;

//private:
    /**
     * @hash   1107777058
     * @symbol ?_createSubpack@ResourcePack@@AEAAXAEBUSubpackInfo@@@Z
     */
    MCAPI void _createSubpack(struct SubpackInfo const &);
    /**
     * @hash   677147930
     * @symbol ?_createSubpacks@ResourcePack@@AEAAXXZ
     */
    MCAPI void _createSubpacks();
    /**
     * @hash   -193463113
     * @symbol ?_generateIconPath@ResourcePack@@AEAAXXZ
     */
    MCAPI void _generateIconPath();

private:

};