/**
 * @file  ResourcePackRepository.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
LLAPI void setCustomResourcePackPath(PackType, const std::string& path);

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
     * @symbol  __unk_destructor_0
     */
    virtual ~ResourcePackRepository();
    /**
     * @vftbl  1
     * @symbol  ?getResourcePacksByPackId\@ResourcePackRepository\@\@UEBAXAEBV?$vector\@UPackInstanceId\@\@V?$allocator\@UPackInstanceId\@\@\@std\@\@\@std\@\@AEAV?$vector\@VPackInstance\@\@V?$allocator\@VPackInstance\@\@\@std\@\@\@3\@\@Z
     */
    virtual void getResourcePacksByPackId(std::vector<struct PackInstanceId> const &, std::vector<class PackInstance> &) const;
    /**
     * @vftbl  2
     * @symbol  ?getResourcePackForPackId\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBUPackIdVersion\@\@\@Z
     */
    virtual class ResourcePack * getResourcePackForPackId(struct PackIdVersion const &) const;
    /**
     * @vftbl  3
     * @symbol  ?getResourcePackByUUID\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBVUUID\@mce\@\@\@Z
     */
    virtual class ResourcePack * getResourcePackByUUID(class mce::UUID const &) const;
    /**
     * @vftbl  4
     * @symbol  ?getResourcePackForPackIdOwned\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBUPackIdVersion\@\@\@Z
     */
    virtual class ResourcePack * getResourcePackForPackIdOwned(struct PackIdVersion const &) const;
    /**
     * @vftbl  5
     * @symbol  ?getResourcePackSatisfiesPackId\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBUPackIdVersion\@\@_N\@Z
     */
    virtual class ResourcePack * getResourcePackSatisfiesPackId(struct PackIdVersion const &, bool) const;
    /**
     * @vftbl  6
     * @symbol  ?getResourcePackContainingModule\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBUPackIdVersion\@\@\@Z
     */
    virtual class ResourcePack * getResourcePackContainingModule(struct PackIdVersion const &) const;
    /**
     * @vftbl  7
     * @symbol  ?getResourcePackInPath\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBVPath\@Core\@\@\@Z
     */
    virtual class ResourcePack * getResourcePackInPath(class Core::Path const &) const;
    /**
     * @vftbl  8
     * @symbol  ?isResourcePackLoaded\@ResourcePackRepository\@\@UEAA_NAEBUPackIdVersion\@\@AEBW4PackOrigin\@\@\@Z
     */
    virtual bool isResourcePackLoaded(struct PackIdVersion const &, enum class PackOrigin const &);
    /**
     * @vftbl  9
     * @symbol  ?getPackLoadingReport\@ResourcePackRepository\@\@UEBAPEBVPackSourceReport\@\@XZ
     */
    virtual class PackSourceReport const * getPackLoadingReport() const;
    /**
     * @vftbl  10
     * @symbol  ?getEditorPack\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@XZ
     */
    virtual class ResourcePack * getEditorPack() const;
    /**
     * @vftbl  11
     * @symbol  ?getVanillaPack\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@XZ
     */
    virtual class ResourcePack * getVanillaPack() const;
    /**
     * @vftbl  12
     * @symbol  ?getChemistryPack\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@XZ
     */
    virtual class ResourcePack * getChemistryPack() const;
    /**
     * @vftbl  13
     * @symbol  ?getChemistryServerPack\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@XZ
     */
    virtual class ResourcePack * getChemistryServerPack() const;
    /**
     * @vftbl  14
     * @symbol  ?setServicePacks\@ResourcePackRepository\@\@UEAA_NV?$vector\@UPackIdVersion\@\@V?$allocator\@UPackIdVersion\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual bool setServicePacks(std::vector<struct PackIdVersion>);
    /**
     * @vftbl  15
     * @symbol  ?addServicePacksToStack\@ResourcePackRepository\@\@UEBAXAEAVResourcePackStack\@\@\@Z
     */
    virtual void addServicePacksToStack(class ResourcePackStack &) const;
    /**
     * @vftbl  16
     * @symbol  ?addCachedResourcePacks\@ResourcePackRepository\@\@UEAAXPEBV?$unordered_map\@VContentIdentity\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@VContentIdentity\@\@\@3\@U?$equal_to\@VContentIdentity\@\@\@3\@V?$allocator\@U?$pair\@$$CBVContentIdentity\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual void addCachedResourcePacks(class std::unordered_map<class ContentIdentity, std::string, struct std::hash<class ContentIdentity>, struct std::equal_to<class ContentIdentity>, class std::allocator<struct std::pair<class ContentIdentity const, std::string>>> const *);
    /**
     * @vftbl  17
     * @symbol  ?addWorldResourcePacks\@ResourcePackRepository\@\@UEAAXAEBVPath\@Core\@\@\@Z
     */
    virtual void addWorldResourcePacks(class Core::Path const &);
    /**
     * @vftbl  18
     * @symbol  ?addPremiumWorldTemplateResourcePacks\@ResourcePackRepository\@\@UEAAXAEBVPath\@Core\@\@AEBVContentIdentity\@\@\@Z
     */
    virtual void addPremiumWorldTemplateResourcePacks(class Core::Path const &, class ContentIdentity const &);
    /**
     * @vftbl  19
     * @symbol  ?removePacksLoadedFromCache\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void removePacksLoadedFromCache();
    /**
     * @vftbl  20
     * @symbol  ?removePacksLoadedFromWorld\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void removePacksLoadedFromWorld();
    /**
     * @vftbl  21
     * @symbol  ?getResourcePacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getResourcePacksPath() const;
    /**
     * @vftbl  22
     * @symbol  ?getBehaviorPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getBehaviorPacksPath() const;
    /**
     * @vftbl  23
     * @symbol  ?getSkinPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getSkinPacksPath() const;
    /**
     * @vftbl  24
     * @symbol  ?getDevelopmentResourcePacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentResourcePacksPath() const;
    /**
     * @vftbl  25
     * @symbol  ?getDevelopmentBehaviorPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentBehaviorPacksPath() const;
    /**
     * @vftbl  26
     * @symbol  ?getDevelopmentSkinPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentSkinPacksPath() const;
    /**
     * @vftbl  27
     * @symbol  ?getTreatmentPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getTreatmentPacksPath() const;
    /**
     * @vftbl  28
     * @symbol  ?getKnownPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@W4KnownPackType\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string> const getKnownPacksPath(enum class KnownPackType) const;
    /**
     * @vftbl  29
     * @symbol  ?getKnownValidPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getKnownValidPacksPath() const;
    /**
     * @vftbl  30
     * @symbol  ?getKnownInvalidPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getKnownInvalidPacksPath() const;
    /**
     * @vftbl  31
     * @symbol  ?refreshPacks\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void refreshPacks();
    /**
     * @vftbl  32
     * @symbol  ?requestReloadUserPacks\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void requestReloadUserPacks();
    /**
     * @vftbl  33
     * @symbol  ?requestReloadDynamicPackagePacks\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void requestReloadDynamicPackagePacks();
    /**
     * @vftbl  34
     * @symbol  ?getKeyProvider\@ResourcePackRepository\@\@UEBA?AV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    virtual class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> getKeyProvider() const;
    /**
     * @vftbl  35
     * @symbol  ?getPackManifestFactory\@ResourcePackRepository\@\@UEAAAEAVPackManifestFactory\@\@XZ
     */
    virtual class PackManifestFactory & getPackManifestFactory();
    /**
     * @vftbl  36
     * @symbol  ?getPackSettingsFactory\@ResourcePackRepository\@\@UEBAAEAVPackSettingsFactory\@\@XZ
     */
    virtual class PackSettingsFactory & getPackSettingsFactory() const;
    /**
     * @vftbl  37
     * @symbol  ?getPackSourceFactory\@ResourcePackRepository\@\@UEAAAEAVPackSourceFactory\@\@XZ
     */
    virtual class PackSourceFactory & getPackSourceFactory();
    /**
     * @vftbl  38
     * @symbol  ?getWorldPackSource\@ResourcePackRepository\@\@UEBAPEBVCompositePackSource\@\@XZ
     */
    virtual class CompositePackSource const * getWorldPackSource() const;
    /**
     * @vftbl  39
     * @symbol  ?getPacksByResourceLocation\@ResourcePackRepository\@\@UEBA?AV?$vector\@PEAVResourcePack\@\@V?$allocator\@PEAVResourcePack\@\@\@std\@\@\@std\@\@W4PackOrigin\@\@\@Z
     */
    virtual std::vector<class ResourcePack *> getPacksByResourceLocation(enum class PackOrigin) const;
    /**
     * @vftbl  40
     * @symbol  ?getPacksByType\@ResourcePackRepository\@\@UEBA?AV?$vector\@PEAVResourcePack\@\@V?$allocator\@PEAVResourcePack\@\@\@std\@\@\@std\@\@W4PackType\@\@\@Z
     */
    virtual std::vector<class ResourcePack *> getPacksByType(enum class PackType) const;
    /**
     * @vftbl  41
     * @symbol  ?addKnownPackFromImport\@ResourcePackRepository\@\@UEAAXAEBVPackManifest\@\@\@Z
     */
    virtual void addKnownPackFromImport(class PackManifest const &);
    /**
     * @vftbl  42
     * @symbol  ?addInvalidPack\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@W4PackType\@\@\@Z
     */
    virtual void addInvalidPack(class ResourceLocation const &, enum class PackType);
    /**
     * @vftbl  43
     * @symbol  ?getInvalidPacks\@ResourcePackRepository\@\@UEBAAEBV?$vector\@VResourceLocation\@\@V?$allocator\@VResourceLocation\@\@\@std\@\@\@std\@\@W4PackType\@\@\@Z
     */
    virtual std::vector<class ResourceLocation> const & getInvalidPacks(enum class PackType) const;
    /**
     * @vftbl  44
     * @symbol  ?getInvalidPacks\@ResourcePackRepository\@\@UEBA?AV?$vector\@VResourceLocation\@\@V?$allocator\@VResourceLocation\@\@\@std\@\@\@std\@\@AEBUInvalidPacksFilterGroup\@\@\@Z
     */
    virtual std::vector<class ResourceLocation> getInvalidPacks(struct InvalidPacksFilterGroup const &) const;
    /**
     * @vftbl  45
     * @symbol  ?deletePack\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@\@Z
     */
    virtual void deletePack(class ResourceLocation const &);
    /**
     * @vftbl  46
     * @symbol  ?deletePackFiles\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@\@Z
     */
    virtual void deletePackFiles(class ResourceLocation const &);
    /**
     * @vftbl  47
     * @symbol  ?postDeletePack\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@\@Z
     */
    virtual void postDeletePack(class ResourceLocation const &);
    /**
     * @vftbl  48
     * @symbol  ?untrackInvalidPack\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@\@Z
     */
    virtual void untrackInvalidPack(class ResourceLocation const &);
    /**
     * @vftbl  49
     * @symbol  ?registerResourcePackRemovedCallback\@ResourcePackRepository\@\@UEAAXPEAXV?$function\@$$A6AXPEAVResourcePack\@\@\@Z\@std\@\@\@Z
     */
    virtual void registerResourcePackRemovedCallback(void *, class std::function<void (class ResourcePack *)>);
    /**
     * @vftbl  50
     * @symbol  ?unregisterResourcePackRemovedCallback\@ResourcePackRepository\@\@UEAAXPEAX\@Z
     */
    virtual void unregisterResourcePackRemovedCallback(void *);
    /**
     * @vftbl  51
     * @symbol  ?isInitialized\@ResourcePackRepository\@\@UEAA_NXZ
     */
    virtual bool isInitialized();
    /**
     * @symbol  ??0ResourcePackRepository\@\@QEAA\@AEAVIMinecraftEventing\@\@AEAVPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VIContentAccessibilityProvider\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VFilePathManager\@Core\@\@\@Bedrock\@\@\@4\@AEAVPackSourceFactory\@\@_N\@Z
     */
    MCAPI ResourcePackRepository(class IMinecraftEventing &, class PackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentAccessibilityProvider>> const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, class PackSourceFactory &, bool);
    /**
     * @symbol  ?CHEMISTRY_PACK_UUID\@ResourcePackRepository\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const CHEMISTRY_PACK_UUID;
    /**
     * @symbol  ?CHEMISTRY_SERVER_PACK_UUID\@ResourcePackRepository\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const CHEMISTRY_SERVER_PACK_UUID;

//private:
    /**
     * @symbol  ?_detectKnownPacksChange\@ResourcePackRepository\@\@AEAAXAEAUKnownPackContainer\@1\@AEBU21\@W4KnownPackType\@\@\@Z
     */
    MCAPI void _detectKnownPacksChange(struct ResourcePackRepository::KnownPackContainer &, struct ResourcePackRepository::KnownPackContainer const &, enum class KnownPackType);
    /**
     * @symbol  ?_findVanillaPacks\@ResourcePackRepository\@\@AEAAXXZ
     */
    MCAPI void _findVanillaPacks();
    /**
     * @symbol  ?_initialize\@ResourcePackRepository\@\@AEAAXXZ
     */
    MCAPI void _initialize();
    /**
     * @symbol  ?_initializeCachedPackSource\@ResourcePackRepository\@\@AEAAXXZ
     */
    MCAPI void _initializeCachedPackSource();
    /**
     * @symbol  ?_initializePackSource\@ResourcePackRepository\@\@AEAAXXZ
     */
    MCAPI void _initializePackSource();
    /**
     * @symbol  ?_initializeWorldPackSource\@ResourcePackRepository\@\@AEAAXXZ
     */
    MCAPI void _initializeWorldPackSource();
    /**
     * @symbol  ?_loadLastKnownUserPacks\@ResourcePackRepository\@\@AEAAXAEAUKnownPackContainer\@1\@W4KnownPackType\@\@\@Z
     */
    MCAPI void _loadLastKnownUserPacks(struct ResourcePackRepository::KnownPackContainer &, enum class KnownPackType);
    /**
     * @symbol  ?_loadPacks\@ResourcePackRepository\@\@AEAAX_N\@Z
     */
    MCAPI void _loadPacks(bool);
    /**
     * @symbol  ?_packExists\@ResourcePackRepository\@\@AEBA_NAEBVUUID\@mce\@\@AEBVSemVersion\@\@W4PackOrigin\@\@\@Z
     */
    MCAPI bool _packExists(class mce::UUID const &, class SemVersion const &, enum class PackOrigin) const;
    /**
     * @symbol  ?_reloadUserPacks\@ResourcePackRepository\@\@AEAAXXZ
     */
    MCAPI void _reloadUserPacks();
    /**
     * @symbol  ?_removePack\@ResourcePackRepository\@\@AEAA_NAEBVResourceLocation\@\@_N\@Z
     */
    MCAPI bool _removePack(class ResourceLocation const &, bool);
    /**
     * @symbol  ?_saveKnownUserPacks\@ResourcePackRepository\@\@AEAAXAEAUKnownPackContainer\@1\@W4KnownPackType\@\@\@Z
     */
    MCAPI void _saveKnownUserPacks(struct ResourcePackRepository::KnownPackContainer &, enum class KnownPackType);
    /**
     * @symbol  ?_triggerRemoveResourcePackCallback\@ResourcePackRepository\@\@AEAAXPEAVResourcePack\@\@\@Z
     */
    MCAPI void _triggerRemoveResourcePackCallback(class ResourcePack *);

private:

};