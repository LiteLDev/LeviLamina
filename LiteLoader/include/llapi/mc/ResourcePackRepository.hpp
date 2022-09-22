/**
 * @file  ResourcePackRepository.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ResourcePack.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePackRepository.
 *
 */
class ResourcePackRepository {

#define AFTER_EXTRA
// Add Member There
public:
struct KnownPackContainer {
    KnownPackContainer() = delete;
    KnownPackContainer(KnownPackContainer const&) = delete;
    KnownPackContainer(KnownPackContainer const&&) = delete;
};
LIAPI void setCustomResourcePackPath(PackType, const std::string& path);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKREPOSITORY
public:
    class ResourcePackRepository& operator=(class ResourcePackRepository const &) = delete;
    ResourcePackRepository(class ResourcePackRepository const &) = delete;
    ResourcePackRepository() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ResourcePackRepository();
    /**
     * @hash   -2101778823
     * @vftbl  1
     * @symbol ?getResourcePacksByPackId@ResourcePackRepository@@UEBAXAEBV?$vector@UPackInstanceId@@V?$allocator@UPackInstanceId@@@std@@@std@@AEAV?$vector@VPackInstance@@V?$allocator@VPackInstance@@@std@@@3@@Z
     */
    virtual void getResourcePacksByPackId(std::vector<struct PackInstanceId> const &, std::vector<class PackInstance> &) const;
    /**
     * @hash   1849012802
     * @vftbl  2
     * @symbol ?getResourcePackForPackId@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
     */
    virtual class ResourcePack * getResourcePackForPackId(struct PackIdVersion const &) const;
    /**
     * @hash   -1928026222
     * @vftbl  3
     * @symbol ?getResourcePackByUUID@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBVUUID@mce@@@Z
     */
    virtual class ResourcePack * getResourcePackByUUID(class mce::UUID const &) const;
    /**
     * @hash   -1630994355
     * @vftbl  4
     * @symbol ?getResourcePackForPackIdOwned@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
     */
    virtual class ResourcePack * getResourcePackForPackIdOwned(struct PackIdVersion const &) const;
    /**
     * @hash   2061431296
     * @vftbl  5
     * @symbol ?getResourcePackSatisfiesPackId@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@_N@Z
     */
    virtual class ResourcePack * getResourcePackSatisfiesPackId(struct PackIdVersion const &, bool) const;
    /**
     * @hash   -1625225509
     * @vftbl  6
     * @symbol ?getResourcePackContainingModule@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
     */
    virtual class ResourcePack * getResourcePackContainingModule(struct PackIdVersion const &) const;
    /**
     * @hash   -32011208
     * @vftbl  7
     * @symbol ?getResourcePackInPath@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBVPath@Core@@@Z
     */
    virtual class ResourcePack * getResourcePackInPath(class Core::Path const &) const;
    /**
     * @hash   -1132578199
     * @vftbl  8
     * @symbol ?isResourcePackLoaded@ResourcePackRepository@@UEAA_NAEBUPackIdVersion@@AEBW4PackOrigin@@@Z
     */
    virtual bool isResourcePackLoaded(struct PackIdVersion const &, enum PackOrigin const &);
    /**
     * @hash   2110261969
     * @vftbl  9
     * @symbol ?getPackLoadingReport@ResourcePackRepository@@UEBAPEBVPackSourceReport@@XZ
     */
    virtual class PackSourceReport const * getPackLoadingReport() const;
    /**
     * @hash   1802219922
     * @vftbl  10
     * @symbol ?getVanillaPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
     */
    virtual class ResourcePack * getVanillaPack() const;
    /**
     * @hash   1801298043
     * @vftbl  11
     * @symbol ?getChemistryPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
     */
    virtual class ResourcePack * getChemistryPack() const;
    /**
     * @hash   147052446
     * @vftbl  12
     * @symbol ?getChemistryServerPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
     */
    virtual class ResourcePack * getChemistryServerPack() const;
    /**
     * @hash   -659320558
     * @vftbl  13
     * @symbol ?setServicePacks@ResourcePackRepository@@UEAA_NV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@@Z
     */
    virtual bool setServicePacks(std::vector<struct PackIdVersion>);
    /**
     * @hash   2002862877
     * @vftbl  14
     * @symbol ?addServicePacksToStack@ResourcePackRepository@@UEBAXAEAVResourcePackStack@@@Z
     */
    virtual void addServicePacksToStack(class ResourcePackStack &) const;
    /**
     * @hash   -558063961
     * @vftbl  15
     * @symbol ?addCachedResourcePacks@ResourcePackRepository@@UEAAXPEBV?$unordered_map@VContentIdentity@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VContentIdentity@@@3@U?$equal_to@VContentIdentity@@@3@V?$allocator@U?$pair@$$CBVContentIdentity@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z
     */
    virtual void addCachedResourcePacks(class std::unordered_map<class ContentIdentity, std::string, struct std::hash<class ContentIdentity>, struct std::equal_to<class ContentIdentity>, class std::allocator<struct std::pair<class ContentIdentity const, std::string>>> const *);
    /**
     * @hash   262671876
     * @vftbl  16
     * @symbol ?addWorldResourcePacks@ResourcePackRepository@@UEAAXAEBVPath@Core@@@Z
     */
    virtual void addWorldResourcePacks(class Core::Path const &);
    /**
     * @hash   1684182409
     * @vftbl  17
     * @symbol ?addPremiumWorldTemplateResourcePacks@ResourcePackRepository@@UEAAXAEBVPath@Core@@AEBVContentIdentity@@@Z
     */
    virtual void addPremiumWorldTemplateResourcePacks(class Core::Path const &, class ContentIdentity const &);
    /**
     * @hash   1872574611
     * @vftbl  18
     * @symbol ?removePacksLoadedFromCache@ResourcePackRepository@@UEAAXXZ
     */
    virtual void removePacksLoadedFromCache();
    /**
     * @hash   286585939
     * @vftbl  19
     * @symbol ?removePacksLoadedFromWorld@ResourcePackRepository@@UEAAXXZ
     */
    virtual void removePacksLoadedFromWorld();
    /**
     * @hash   -1952012395
     * @vftbl  20
     * @symbol ?getResourcePacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const getResourcePacksPath() const;
    /**
     * @hash   -2017782815
     * @vftbl  21
     * @symbol ?getBehaviorPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const getBehaviorPacksPath() const;
    /**
     * @hash   -67997002
     * @vftbl  22
     * @symbol ?getSkinPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const getSkinPacksPath() const;
    /**
     * @hash   1923055446
     * @vftbl  23
     * @symbol ?getDevelopmentResourcePacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentResourcePacksPath() const;
    /**
     * @hash   1862789634
     * @vftbl  24
     * @symbol ?getDevelopmentBehaviorPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentBehaviorPacksPath() const;
    /**
     * @hash   -1457751305
     * @vftbl  25
     * @symbol ?getDevelopmentSkinPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentSkinPacksPath() const;
    /**
     * @hash   -1968420169
     * @vftbl  26
     * @symbol ?getTreatmentPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const getTreatmentPacksPath() const;
    /**
     * @hash   1806260534
     * @vftbl  27
     * @symbol ?getKnownPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@W4KnownPackType@@@Z
     */
    virtual class Core::PathBuffer<std::string> const getKnownPacksPath(enum KnownPackType) const;
    /**
     * @hash   -926048406
     * @vftbl  28
     * @symbol ?getKnownValidPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const getKnownValidPacksPath() const;
    /**
     * @hash   2001250575
     * @vftbl  29
     * @symbol ?getKnownInvalidPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const getKnownInvalidPacksPath() const;
    /**
     * @hash   1695683573
     * @vftbl  30
     * @symbol ?refreshPacks@ResourcePackRepository@@UEAAXXZ
     */
    virtual void refreshPacks();
    /**
     * @hash   1505214909
     * @vftbl  31
     * @symbol ?requestReloadUserPacks@ResourcePackRepository@@UEAAXXZ
     */
    virtual void requestReloadUserPacks();
    /**
     * @hash   1878328289
     * @vftbl  32
     * @symbol ?requestReloadDynamicPackagePacks@ResourcePackRepository@@UEAAXXZ
     */
    virtual void requestReloadDynamicPackagePacks();
    /**
     * @hash   -1410187673
     * @vftbl  33
     * @symbol ?getKeyProvider@ResourcePackRepository@@UEBA?AV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@XZ
     */
    virtual class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> getKeyProvider() const;
    /**
     * @hash   927844722
     * @vftbl  34
     * @symbol ?getPackManifestFactory@ResourcePackRepository@@UEAAAEAVPackManifestFactory@@XZ
     */
    virtual class PackManifestFactory & getPackManifestFactory();
    /**
     * @hash   1779352705
     * @vftbl  35
     * @symbol ?getPackSettingsFactory@ResourcePackRepository@@UEBAAEAVPackSettingsFactory@@XZ
     */
    virtual class PackSettingsFactory & getPackSettingsFactory() const;
    /**
     * @hash   1228695186
     * @vftbl  36
     * @symbol ?getPackSourceFactory@ResourcePackRepository@@UEAAAEAVPackSourceFactory@@XZ
     */
    virtual class PackSourceFactory & getPackSourceFactory();
    /**
     * @hash   420545577
     * @vftbl  37
     * @symbol ?getPacksByResourceLocation@ResourcePackRepository@@UEBA?AV?$vector@PEAVResourcePack@@V?$allocator@PEAVResourcePack@@@std@@@std@@W4PackOrigin@@@Z
     */
    virtual std::vector<class ResourcePack *> getPacksByResourceLocation(enum PackOrigin) const;
    /**
     * @hash   -1930887138
     * @vftbl  38
     * @symbol ?getPacksByType@ResourcePackRepository@@UEBA?AV?$vector@PEAVResourcePack@@V?$allocator@PEAVResourcePack@@@std@@@std@@W4PackType@@@Z
     */
    virtual std::vector<class ResourcePack *> getPacksByType(enum PackType) const;
    /**
     * @hash   2090586873
     * @vftbl  39
     * @symbol ?addKnownPackFromImport@ResourcePackRepository@@UEAAXAEBVPackManifest@@@Z
     */
    virtual void addKnownPackFromImport(class PackManifest const &);
    /**
     * @hash   803426968
     * @vftbl  40
     * @symbol ?addInvalidPack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@W4PackType@@@Z
     */
    virtual void addInvalidPack(class ResourceLocation const &, enum PackType);
    /**
     * @hash   -1353846388
     * @vftbl  41
     * @symbol ?getInvalidPacks@ResourcePackRepository@@UEBAAEBV?$vector@VResourceLocation@@V?$allocator@VResourceLocation@@@std@@@std@@W4PackType@@@Z
     */
    virtual std::vector<class ResourceLocation> const & getInvalidPacks(enum PackType) const;
    /**
     * @hash   2118393345
     * @vftbl  42
     * @symbol ?getInvalidPacks@ResourcePackRepository@@UEBA?AV?$vector@VResourceLocation@@V?$allocator@VResourceLocation@@@std@@@std@@AEBUInvalidPacksFilterGroup@@@Z
     */
    virtual std::vector<class ResourceLocation> getInvalidPacks(struct InvalidPacksFilterGroup const &) const;
    /**
     * @hash   -1666748348
     * @vftbl  43
     * @symbol ?deletePack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
     */
    virtual void deletePack(class ResourceLocation const &);
    /**
     * @hash   732937205
     * @vftbl  44
     * @symbol ?deletePackFiles@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
     */
    virtual void deletePackFiles(class ResourceLocation const &);
    /**
     * @hash   -2009477804
     * @vftbl  45
     * @symbol ?postDeletePack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
     */
    virtual void postDeletePack(class ResourceLocation const &);
    /**
     * @hash   2114527402
     * @vftbl  46
     * @symbol ?untrackInvalidPack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
     */
    virtual void untrackInvalidPack(class ResourceLocation const &);
    /**
     * @hash   1163121997
     * @vftbl  47
     * @symbol ?registerResourcePackRemovedCallback@ResourcePackRepository@@UEAAXPEAXV?$function@$$A6AXPEAVResourcePack@@@Z@std@@@Z
     */
    virtual void registerResourcePackRemovedCallback(void *, class std::function<void (class ResourcePack *)>);
    /**
     * @hash   -1114832980
     * @vftbl  48
     * @symbol ?unregisterResourcePackRemovedCallback@ResourcePackRepository@@UEAAXPEAX@Z
     */
    virtual void unregisterResourcePackRemovedCallback(void *);
    /**
     * @hash   -1293010446
     * @vftbl  49
     * @symbol ?isInitialized@ResourcePackRepository@@UEAA_NXZ
     */
    virtual bool isInitialized();
    /**
     * @hash   -1910475541
     * @symbol ??0ResourcePackRepository@@QEAA@AEAVIMinecraftEventing@@AEAVPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@VIContentAccessibilityProvider@@@Bedrock@@@gsl@@AEBV?$not_null@V?$NonOwnerPointer@VFilePathManager@Core@@@Bedrock@@@4@AEAVPackSourceFactory@@_N@Z
     */
    MCAPI ResourcePackRepository(class IMinecraftEventing &, class PackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentAccessibilityProvider>> const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, class PackSourceFactory &, bool);
    /**
     * @hash   1284425361
     * @symbol ?CHEMISTRY_PACK_UUID@ResourcePackRepository@@2VUUID@mce@@B
     */
    MCAPI static class mce::UUID const CHEMISTRY_PACK_UUID;
    /**
     * @hash   -5451645
     * @symbol ?CHEMISTRY_SERVER_PACK_UUID@ResourcePackRepository@@2VUUID@mce@@B
     */
    MCAPI static class mce::UUID const CHEMISTRY_SERVER_PACK_UUID;

//private:
    /**
     * @hash   -1410909421
     * @symbol ?_detectKnownPacksChange@ResourcePackRepository@@AEAAXAEAUKnownPackContainer@1@AEBU21@W4KnownPackType@@@Z
     */
    MCAPI void _detectKnownPacksChange(struct ResourcePackRepository::KnownPackContainer &, struct ResourcePackRepository::KnownPackContainer const &, enum KnownPackType);
    /**
     * @hash   -361657518
     * @symbol ?_findVanillaPacks@ResourcePackRepository@@AEAAXXZ
     */
    MCAPI void _findVanillaPacks();
    /**
     * @hash   919841354
     * @symbol ?_initialize@ResourcePackRepository@@AEAAXXZ
     */
    MCAPI void _initialize();
    /**
     * @hash   278331760
     * @symbol ?_initializeCachedPackSource@ResourcePackRepository@@AEAAXXZ
     */
    MCAPI void _initializeCachedPackSource();
    /**
     * @hash   1006448414
     * @symbol ?_initializePackSource@ResourcePackRepository@@AEAAXXZ
     */
    MCAPI void _initializePackSource();
    /**
     * @hash   -481706622
     * @symbol ?_initializeWorldPackSource@ResourcePackRepository@@AEAAXXZ
     */
    MCAPI void _initializeWorldPackSource();
    /**
     * @hash   1899065859
     * @symbol ?_loadLastKnownUserPacks@ResourcePackRepository@@AEAAXAEAUKnownPackContainer@1@W4KnownPackType@@@Z
     */
    MCAPI void _loadLastKnownUserPacks(struct ResourcePackRepository::KnownPackContainer &, enum KnownPackType);
    /**
     * @hash   783823284
     * @symbol ?_loadPacks@ResourcePackRepository@@AEAAX_N@Z
     */
    MCAPI void _loadPacks(bool);
    /**
     * @hash   514669286
     * @symbol ?_packExists@ResourcePackRepository@@AEBA_NAEBVUUID@mce@@AEBVSemVersion@@W4PackOrigin@@@Z
     */
    MCAPI bool _packExists(class mce::UUID const &, class SemVersion const &, enum PackOrigin) const;
    /**
     * @hash   2145504898
     * @symbol ?_reloadUserPacks@ResourcePackRepository@@AEAAXXZ
     */
    MCAPI void _reloadUserPacks();
    /**
     * @hash   1621865231
     * @symbol ?_removePack@ResourcePackRepository@@AEAA_NAEBVResourceLocation@@_N@Z
     */
    MCAPI bool _removePack(class ResourceLocation const &, bool);
    /**
     * @hash   773896404
     * @symbol ?_saveKnownUserPacks@ResourcePackRepository@@AEAAXAEAUKnownPackContainer@1@W4KnownPackType@@@Z
     */
    MCAPI void _saveKnownUserPacks(struct ResourcePackRepository::KnownPackContainer &, enum KnownPackType);
    /**
     * @hash   1053210061
     * @symbol ?_triggerRemoveResourcePackCallback@ResourcePackRepository@@AEAAXPEAVResourcePack@@@Z
     */
    MCAPI void _triggerRemoveResourcePackCallback(class ResourcePack *);

private:

};