/**
 * @file  IResourcePackRepository.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IResourcePackRepository.
 *
 */
class IResourcePackRepository {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IRESOURCEPACKREPOSITORY
public:
    class IResourcePackRepository& operator=(class IResourcePackRepository const &) = delete;
    IResourcePackRepository(class IResourcePackRepository const &) = delete;
    IResourcePackRepository() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getResourcePacksByPackId\@ResourcePackRepository\@\@UEBAXAEBV?$vector\@UPackInstanceId\@\@V?$allocator\@UPackInstanceId\@\@\@std\@\@\@std\@\@AEAV?$vector\@VPackInstance\@\@V?$allocator\@VPackInstance\@\@\@std\@\@\@3\@\@Z
     */
    virtual void getResourcePacksByPackId(std::vector<struct PackInstanceId> const &, std::vector<class PackInstance> &) const = 0;
    /**
     * @vftbl 2
     * @symbol ?getResourcePackForPackId\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBUPackIdVersion\@\@\@Z
     */
    virtual class ResourcePack * getResourcePackForPackId(struct PackIdVersion const &) const = 0;
    /**
     * @vftbl 3
     * @symbol ?getResourcePackByUUID\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBVUUID\@mce\@\@\@Z
     */
    virtual class ResourcePack * getResourcePackByUUID(class mce::UUID const &) const = 0;
    /**
     * @vftbl 4
     * @symbol ?getResourcePackForPackIdOwned\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBUPackIdVersion\@\@\@Z
     */
    virtual class ResourcePack * getResourcePackForPackIdOwned(struct PackIdVersion const &) const = 0;
    /**
     * @vftbl 5
     * @symbol ?getResourcePackSatisfiesPackId\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBUPackIdVersion\@\@_N\@Z
     */
    virtual class ResourcePack * getResourcePackSatisfiesPackId(struct PackIdVersion const &, bool) const = 0;
    /**
     * @vftbl 6
     * @symbol ?getResourcePackContainingModule\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBUPackIdVersion\@\@\@Z
     */
    virtual class ResourcePack * getResourcePackContainingModule(struct PackIdVersion const &) const = 0;
    /**
     * @vftbl 7
     * @symbol ?getResourcePackInPath\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBVPath\@Core\@\@\@Z
     */
    virtual class ResourcePack * getResourcePackInPath(class Core::Path const &) const = 0;
    /**
     * @vftbl 8
     * @symbol ?isResourcePackLoaded\@ResourcePackRepository\@\@UEAA_NAEBUPackIdVersion\@\@AEBW4PackOrigin\@\@\@Z
     */
    virtual bool isResourcePackLoaded(struct PackIdVersion const &, enum class PackOrigin const &) = 0;
    /**
     * @vftbl 9
     * @symbol ?getPackLoadingReport\@ResourcePackRepository\@\@UEBAPEBVPackSourceReport\@\@XZ
     */
    virtual class PackSourceReport const * getPackLoadingReport() const = 0;
    /**
     * @vftbl 10
     * @symbol ?getEditorPack\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@XZ
     */
    virtual class ResourcePack * getEditorPack() const = 0;
    /**
     * @vftbl 11
     * @symbol ?getVanillaPack\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@XZ
     */
    virtual class ResourcePack * getVanillaPack() const = 0;
    /**
     * @vftbl 12
     * @symbol ?getChemistryPack\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@XZ
     */
    virtual class ResourcePack * getChemistryPack() const = 0;
    /**
     * @vftbl 13
     * @symbol ?getChemistryServerPack\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@XZ
     */
    virtual class ResourcePack * getChemistryServerPack() const = 0;
    /**
     * @vftbl 14
     * @symbol ?setServicePacks\@ResourcePackRepository\@\@UEAA_NV?$vector\@UPackIdVersion\@\@V?$allocator\@UPackIdVersion\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual bool setServicePacks(std::vector<struct PackIdVersion>) = 0;
    /**
     * @vftbl 15
     * @symbol ?getServicePacks\@ResourcePackRepository\@\@UEBAAEBV?$vector\@UPackIdVersion\@\@V?$allocator\@UPackIdVersion\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<struct PackIdVersion> const & getServicePacks() const = 0;
    /**
     * @vftbl 16
     * @symbol ?addServicePacksToStack\@ResourcePackRepository\@\@UEBAXAEAVResourcePackStack\@\@\@Z
     */
    virtual void addServicePacksToStack(class ResourcePackStack &) const = 0;
    /**
     * @vftbl 17
     * @symbol ?addCachedResourcePacks\@ResourcePackRepository\@\@UEAAXPEBV?$unordered_map\@VContentIdentity\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@VContentIdentity\@\@\@3\@U?$equal_to\@VContentIdentity\@\@\@3\@V?$allocator\@U?$pair\@$$CBVContentIdentity\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual void addCachedResourcePacks(class std::unordered_map<class ContentIdentity, std::string, struct std::hash<class ContentIdentity>, struct std::equal_to<class ContentIdentity>, class std::allocator<struct std::pair<class ContentIdentity const, std::string>>> const *) = 0;
    /**
     * @vftbl 18
     * @symbol ?addWorldResourcePacks\@ResourcePackRepository\@\@UEAAXAEBVPath\@Core\@\@\@Z
     */
    virtual void addWorldResourcePacks(class Core::Path const &) = 0;
    /**
     * @vftbl 19
     * @symbol ?addPremiumWorldTemplateResourcePacks\@ResourcePackRepository\@\@UEAAXAEBVPath\@Core\@\@AEBVContentIdentity\@\@\@Z
     */
    virtual void addPremiumWorldTemplateResourcePacks(class Core::Path const &, class ContentIdentity const &) = 0;
    /**
     * @vftbl 20
     * @symbol ?removePacksLoadedFromCache\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void removePacksLoadedFromCache() = 0;
    /**
     * @vftbl 21
     * @symbol ?removePacksLoadedFromWorld\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void removePacksLoadedFromWorld() = 0;
    /**
     * @vftbl 22
     * @symbol ?getResourcePacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getResourcePacksPath() const = 0;
    /**
     * @vftbl 23
     * @symbol ?getBehaviorPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getBehaviorPacksPath() const = 0;
    /**
     * @vftbl 24
     * @symbol ?getSkinPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getSkinPacksPath() const = 0;
    /**
     * @vftbl 25
     * @symbol ?getDevelopmentResourcePacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentResourcePacksPath() const = 0;
    /**
     * @vftbl 26
     * @symbol ?getDevelopmentBehaviorPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentBehaviorPacksPath() const = 0;
    /**
     * @vftbl 27
     * @symbol ?getDevelopmentSkinPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentSkinPacksPath() const = 0;
    /**
     * @vftbl 28
     * @symbol ?getTreatmentPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getTreatmentPacksPath() const = 0;
    /**
     * @vftbl 29
     * @symbol ?getKnownPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@W4KnownPackType\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string> const getKnownPacksPath(enum class KnownPackType) const = 0;
    /**
     * @vftbl 30
     * @symbol ?getKnownValidPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getKnownValidPacksPath() const = 0;
    /**
     * @vftbl 31
     * @symbol ?getKnownInvalidPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getKnownInvalidPacksPath() const = 0;
    /**
     * @vftbl 32
     * @symbol ?refreshPacks\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void refreshPacks() = 0;
    /**
     * @vftbl 33
     * @symbol ?requestReloadUserPacks\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void requestReloadUserPacks() = 0;
    /**
     * @vftbl 34
     * @symbol ?requestReloadDynamicPackagePacks\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void requestReloadDynamicPackagePacks() = 0;
    /**
     * @vftbl 35
     * @symbol ?getKeyProvider\@ResourcePackRepository\@\@UEBA?AV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    virtual class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> getKeyProvider() const = 0;
    /**
     * @vftbl 36
     * @symbol ?getPackManifestFactory\@ResourcePackRepository\@\@UEAAAEAVPackManifestFactory\@\@XZ
     */
    virtual class PackManifestFactory & getPackManifestFactory() = 0;
    /**
     * @vftbl 37
     * @symbol ?getPackSettingsFactory\@ResourcePackRepository\@\@UEBAAEAVPackSettingsFactory\@\@XZ
     */
    virtual class PackSettingsFactory & getPackSettingsFactory() const = 0;
    /**
     * @vftbl 38
     * @symbol ?getPackSourceFactory\@ResourcePackRepository\@\@UEAAAEAVPackSourceFactory\@\@XZ
     */
    virtual class PackSourceFactory & getPackSourceFactory() = 0;
    /**
     * @vftbl 39
     * @symbol ?getWorldPackSource\@ResourcePackRepository\@\@UEBAPEBVCompositePackSource\@\@XZ
     */
    virtual class CompositePackSource const * getWorldPackSource() const = 0;
    /**
     * @vftbl 40
     * @symbol ?getPacksByResourceLocation\@ResourcePackRepository\@\@UEBA?AV?$vector\@PEAVResourcePack\@\@V?$allocator\@PEAVResourcePack\@\@\@std\@\@\@std\@\@W4PackOrigin\@\@\@Z
     */
    virtual std::vector<class ResourcePack *> getPacksByResourceLocation(enum class PackOrigin) const = 0;
    /**
     * @vftbl 41
     * @symbol ?getPacksByType\@ResourcePackRepository\@\@UEBA?AV?$vector\@PEAVResourcePack\@\@V?$allocator\@PEAVResourcePack\@\@\@std\@\@\@std\@\@W4PackType\@\@\@Z
     */
    virtual std::vector<class ResourcePack *> getPacksByType(enum class PackType) const = 0;
    /**
     * @vftbl 42
     * @symbol ?addKnownPackFromImport\@ResourcePackRepository\@\@UEAAXAEBVPackManifest\@\@\@Z
     */
    virtual void addKnownPackFromImport(class PackManifest const &) = 0;
    /**
     * @vftbl 43
     * @symbol ?addInvalidPack\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@W4PackType\@\@\@Z
     */
    virtual void addInvalidPack(class ResourceLocation const &, enum class PackType) = 0;
    /**
     * @vftbl 44
     * @symbol ?getInvalidPacks\@ResourcePackRepository\@\@UEBAAEBV?$vector\@VResourceLocation\@\@V?$allocator\@VResourceLocation\@\@\@std\@\@\@std\@\@W4PackType\@\@\@Z
     */
    virtual std::vector<class ResourceLocation> const & getInvalidPacks(enum class PackType) const = 0;
    /**
     * @vftbl 45
     * @symbol ?getInvalidPacks\@ResourcePackRepository\@\@UEBA?AV?$vector\@VResourceLocation\@\@V?$allocator\@VResourceLocation\@\@\@std\@\@\@std\@\@AEBUInvalidPacksFilterGroup\@\@\@Z
     */
    virtual std::vector<class ResourceLocation> getInvalidPacks(struct InvalidPacksFilterGroup const &) const = 0;
    /**
     * @vftbl 46
     * @symbol ?deletePack\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@\@Z
     */
    virtual void deletePack(class ResourceLocation const &) = 0;
    /**
     * @vftbl 47
     * @symbol ?deletePackFiles\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@\@Z
     */
    virtual void deletePackFiles(class ResourceLocation const &) = 0;
    /**
     * @vftbl 48
     * @symbol ?postDeletePack\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@\@Z
     */
    virtual void postDeletePack(class ResourceLocation const &) = 0;
    /**
     * @vftbl 49
     * @symbol ?untrackInvalidPack\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@\@Z
     */
    virtual void untrackInvalidPack(class ResourceLocation const &) = 0;
    /**
     * @vftbl 50
     * @symbol ?registerResourcePackRemovedCallback\@ResourcePackRepository\@\@UEAAXPEAXV?$function\@$$A6AXPEAVResourcePack\@\@\@Z\@std\@\@\@Z
     */
    virtual void registerResourcePackRemovedCallback(void *, class std::function<void (class ResourcePack *)>) = 0;
    /**
     * @vftbl 51
     * @symbol ?unregisterResourcePackRemovedCallback\@ResourcePackRepository\@\@UEAAXPEAX\@Z
     */
    virtual void unregisterResourcePackRemovedCallback(void *) = 0;
    /**
     * @vftbl 52
     * @symbol ?isInitialized\@ResourcePackRepository\@\@UEAA_NXZ
     */
    virtual bool isInitialized() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IRESOURCEPACKREPOSITORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IResourcePackRepository();
#endif

};
