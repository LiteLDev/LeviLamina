#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FilePathManager; }
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class ResourcePackRepository {
public:
    // ResourcePackRepository inner types declare
    // clang-format off
    struct KnownPackContainer;
    struct KnownPackInfo;
    // clang-format on

    // ResourcePackRepository inner types define
    struct KnownPackContainer {

    public:
        // prevent constructor by default
        KnownPackContainer& operator=(KnownPackContainer const&) = delete;
        KnownPackContainer(KnownPackContainer const&)            = delete;
        KnownPackContainer()                                     = delete;

    public:
        /**
         * @symbol
         * ?getPack\@KnownPackContainer\@ResourcePackRepository\@\@QEAAPEAUKnownPackInfo\@2\@AEBVResourceLocation\@\@\@Z
         */
        MCAPI struct ResourcePackRepository::KnownPackInfo* getPack(class ResourceLocation const&); // NOLINT
        /**
         * @symbol
         * ?getPack\@KnownPackContainer\@ResourcePackRepository\@\@QEBAPEBUKnownPackInfo\@2\@AEBVResourceLocation\@\@\@Z
         */
        MCAPI struct ResourcePackRepository::KnownPackInfo const*
        getPack(class ResourceLocation const&) const; // NOLINT
        /**
         * @symbol ??1KnownPackContainer\@ResourcePackRepository\@\@QEAA\@XZ
         */
        MCAPI ~KnownPackContainer(); // NOLINT
    };

    struct KnownPackInfo {

    public:
        // prevent constructor by default
        KnownPackInfo() = delete;

    public:
        /**
         * @symbol ??0KnownPackInfo\@ResourcePackRepository\@\@QEAA\@AEBU01\@\@Z
         */
        MCAPI KnownPackInfo(struct ResourcePackRepository::KnownPackInfo const&); // NOLINT
        /**
         * @symbol ??4KnownPackInfo\@ResourcePackRepository\@\@QEAAAEAU01\@AEBU01\@\@Z
         */
        MCAPI struct ResourcePackRepository::KnownPackInfo&
        operator=(struct ResourcePackRepository::KnownPackInfo const&); // NOLINT
        /**
         * @symbol ??8KnownPackInfo\@ResourcePackRepository\@\@QEBA_NAEBU01\@\@Z
         */
        MCAPI bool operator==(struct ResourcePackRepository::KnownPackInfo const&) const; // NOLINT
        /**
         * @symbol ??1KnownPackInfo\@ResourcePackRepository\@\@QEAA\@XZ
         */
        MCAPI ~KnownPackInfo(); // NOLINT
    };

public:
    // prevent constructor by default
    ResourcePackRepository& operator=(ResourcePackRepository const&) = delete;
    ResourcePackRepository(ResourcePackRepository const&)            = delete;
    ResourcePackRepository()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getResourcePacksByPackId\@ResourcePackRepository\@\@UEBAXAEBV?$vector\@UPackInstanceId\@\@V?$allocator\@UPackInstanceId\@\@\@std\@\@\@std\@\@AEAV?$vector\@VPackInstance\@\@V?$allocator\@VPackInstance\@\@\@std\@\@\@3\@\@Z
     */
    virtual void getResourcePacksByPackId(std::vector<struct PackInstanceId> const&, std::vector<class PackInstance>&)
        const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getResourcePackForPackId\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBUPackIdVersion\@\@\@Z
     */
    virtual class ResourcePack* getResourcePackForPackId(struct PackIdVersion const&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getResourcePackByUUID\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBVUUID\@mce\@\@\@Z
     */
    virtual class ResourcePack* getResourcePackByUUID(class mce::UUID const&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?getResourcePackForPackIdOwned\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBUPackIdVersion\@\@\@Z
     */
    virtual class ResourcePack* getResourcePackForPackIdOwned(struct PackIdVersion const&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?getResourcePackSatisfiesPackId\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBUPackIdVersion\@\@_N\@Z
     */
    virtual class ResourcePack* getResourcePackSatisfiesPackId(struct PackIdVersion const&, bool) const; // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?getResourcePackContainingModule\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBUPackIdVersion\@\@\@Z
     */
    virtual class ResourcePack* getResourcePackContainingModule(struct PackIdVersion const&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getResourcePackInPath\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@AEBVPath\@Core\@\@\@Z
     */
    virtual class ResourcePack* getResourcePackInPath(class Core::Path const&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?isResourcePackLoaded\@ResourcePackRepository\@\@UEAA_NAEBUPackIdVersion\@\@AEBW4PackOrigin\@\@\@Z
     */
    virtual bool isResourcePackLoaded(struct PackIdVersion const&, enum class PackOrigin const&); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?getPackLoadingReport\@ResourcePackRepository\@\@UEBAPEBVPackSourceReport\@\@XZ
     */
    virtual class PackSourceReport const* getPackLoadingReport() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?getEditorPack\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@XZ
     */
    virtual class ResourcePack* getEditorPack() const; // NOLINT
    /**
     * @vftbl 11
     * @symbol ?getVanillaPack\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@XZ
     */
    virtual class ResourcePack* getVanillaPack() const; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?getChemistryPack\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@XZ
     */
    virtual class ResourcePack* getChemistryPack() const; // NOLINT
    /**
     * @vftbl 13
     * @symbol ?getChemistryServerPack\@ResourcePackRepository\@\@UEBAPEAVResourcePack\@\@XZ
     */
    virtual class ResourcePack* getChemistryServerPack() const; // NOLINT
    /**
     * @vftbl 14
     * @symbol
     * ?setServicePacks\@ResourcePackRepository\@\@UEAA_NV?$vector\@UPackIdVersion\@\@V?$allocator\@UPackIdVersion\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual bool setServicePacks(std::vector<struct PackIdVersion>); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?addServicePacksToStack\@ResourcePackRepository\@\@UEBAXAEAVResourcePackStack\@\@\@Z
     */
    virtual void addServicePacksToStack(class ResourcePackStack&) const; // NOLINT
    /**
     * @vftbl 16
     * @symbol
     * ?addCachedResourcePacks\@ResourcePackRepository\@\@UEAAXPEBV?$unordered_map\@VContentIdentity\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@VContentIdentity\@\@\@3\@U?$equal_to\@VContentIdentity\@\@\@3\@V?$allocator\@U?$pair\@$$CBVContentIdentity\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual void
    addCachedResourcePacks(class std::unordered_map<
                           class ContentIdentity,
                           std::string,
                           struct std::hash<class ContentIdentity>,
                           struct std::equal_to<class ContentIdentity>,
                           class std::allocator<
                               struct std::pair<class ContentIdentity const, std::string>>> const*); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?addWorldResourcePacks\@ResourcePackRepository\@\@UEAAXAEBVPath\@Core\@\@\@Z
     */
    virtual void addWorldResourcePacks(class Core::Path const&); // NOLINT
    /**
     * @vftbl 18
     * @symbol
     * ?addPremiumWorldTemplateResourcePacks\@ResourcePackRepository\@\@UEAAXAEBVPath\@Core\@\@AEBVContentIdentity\@\@\@Z
     */
    virtual void addPremiumWorldTemplateResourcePacks(class Core::Path const&, class ContentIdentity const&); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?removePacksLoadedFromCache\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void removePacksLoadedFromCache(); // NOLINT
    /**
     * @vftbl 20
     * @symbol ?removePacksLoadedFromWorld\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void removePacksLoadedFromWorld(); // NOLINT
    /**
     * @vftbl 21
     * @symbol
     * ?getResourcePacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getResourcePacksPath() const; // NOLINT
    /**
     * @vftbl 22
     * @symbol
     * ?getBehaviorPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getBehaviorPacksPath() const; // NOLINT
    /**
     * @vftbl 23
     * @symbol
     * ?getSkinPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getSkinPacksPath() const; // NOLINT
    /**
     * @vftbl 24
     * @symbol
     * ?getDevelopmentResourcePacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentResourcePacksPath() const; // NOLINT
    /**
     * @vftbl 25
     * @symbol
     * ?getDevelopmentBehaviorPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentBehaviorPacksPath() const; // NOLINT
    /**
     * @vftbl 26
     * @symbol
     * ?getDevelopmentSkinPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentSkinPacksPath() const; // NOLINT
    /**
     * @vftbl 27
     * @symbol
     * ?getTreatmentPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getTreatmentPacksPath() const; // NOLINT
    /**
     * @vftbl 28
     * @symbol
     * ?getKnownPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@W4KnownPackType\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string> const getKnownPacksPath(enum class KnownPackType) const; // NOLINT
    /**
     * @vftbl 29
     * @symbol
     * ?getKnownValidPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getKnownValidPacksPath() const; // NOLINT
    /**
     * @vftbl 30
     * @symbol
     * ?getKnownInvalidPacksPath\@ResourcePackRepository\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getKnownInvalidPacksPath() const; // NOLINT
    /**
     * @vftbl 31
     * @symbol ?refreshPacks\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void refreshPacks(); // NOLINT
    /**
     * @vftbl 32
     * @symbol ?requestReloadUserPacks\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void requestReloadUserPacks(); // NOLINT
    /**
     * @vftbl 33
     * @symbol ?requestReloadDynamicPackagePacks\@ResourcePackRepository\@\@UEAAXXZ
     */
    virtual void requestReloadDynamicPackagePacks(); // NOLINT
    /**
     * @vftbl 34
     * @symbol
     * ?getKeyProvider\@ResourcePackRepository\@\@UEBA?AV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    virtual class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>>
    getKeyProvider() const; // NOLINT
    /**
     * @vftbl 35
     * @symbol ?getPackManifestFactory\@ResourcePackRepository\@\@UEAAAEAVPackManifestFactory\@\@XZ
     */
    virtual class PackManifestFactory& getPackManifestFactory(); // NOLINT
    /**
     * @vftbl 36
     * @symbol ?getPackSettingsFactory\@ResourcePackRepository\@\@UEBAAEAVPackSettingsFactory\@\@XZ
     */
    virtual class PackSettingsFactory& getPackSettingsFactory() const; // NOLINT
    /**
     * @vftbl 37
     * @symbol ?getPackSourceFactory\@ResourcePackRepository\@\@UEAAAEAVPackSourceFactory\@\@XZ
     */
    virtual class PackSourceFactory& getPackSourceFactory(); // NOLINT
    /**
     * @vftbl 38
     * @symbol ?getWorldPackSource\@ResourcePackRepository\@\@UEBAPEBVCompositePackSource\@\@XZ
     */
    virtual class CompositePackSource const* getWorldPackSource() const; // NOLINT
    /**
     * @vftbl 39
     * @symbol
     * ?getPacksByResourceLocation\@ResourcePackRepository\@\@UEBA?AV?$vector\@PEAVResourcePack\@\@V?$allocator\@PEAVResourcePack\@\@\@std\@\@\@std\@\@W4PackOrigin\@\@\@Z
     */
    virtual std::vector<class ResourcePack*> getPacksByResourceLocation(enum class PackOrigin) const; // NOLINT
    /**
     * @vftbl 40
     * @symbol
     * ?getPacksByType\@ResourcePackRepository\@\@UEBA?AV?$vector\@PEAVResourcePack\@\@V?$allocator\@PEAVResourcePack\@\@\@std\@\@\@std\@\@W4PackType\@\@\@Z
     */
    virtual std::vector<class ResourcePack*> getPacksByType(enum class PackType) const; // NOLINT
    /**
     * @vftbl 41
     * @symbol ?addKnownPackFromImport\@ResourcePackRepository\@\@UEAAXAEBVPackManifest\@\@\@Z
     */
    virtual void addKnownPackFromImport(class PackManifest const&); // NOLINT
    /**
     * @vftbl 42
     * @symbol ?addInvalidPack\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@W4PackType\@\@\@Z
     */
    virtual void addInvalidPack(class ResourceLocation const&, enum class PackType); // NOLINT
    /**
     * @vftbl 43
     * @symbol
     * ?getInvalidPacks\@ResourcePackRepository\@\@UEBAAEBV?$vector\@VResourceLocation\@\@V?$allocator\@VResourceLocation\@\@\@std\@\@\@std\@\@W4PackType\@\@\@Z
     */
    virtual std::vector<class ResourceLocation> const& getInvalidPacks(enum class PackType) const; // NOLINT
    /**
     * @vftbl 44
     * @symbol
     * ?getInvalidPacks\@ResourcePackRepository\@\@UEBA?AV?$vector\@VResourceLocation\@\@V?$allocator\@VResourceLocation\@\@\@std\@\@\@std\@\@AEBUInvalidPacksFilterGroup\@\@\@Z
     */
    virtual std::vector<class ResourceLocation> getInvalidPacks(struct InvalidPacksFilterGroup const&) const; // NOLINT
    /**
     * @vftbl 45
     * @symbol ?deletePack\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@\@Z
     */
    virtual void deletePack(class ResourceLocation const&); // NOLINT
    /**
     * @vftbl 46
     * @symbol ?deletePackFiles\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@\@Z
     */
    virtual void deletePackFiles(class ResourceLocation const&); // NOLINT
    /**
     * @vftbl 47
     * @symbol ?postDeletePack\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@\@Z
     */
    virtual void postDeletePack(class ResourceLocation const&); // NOLINT
    /**
     * @vftbl 48
     * @symbol ?untrackInvalidPack\@ResourcePackRepository\@\@UEAAXAEBVResourceLocation\@\@\@Z
     */
    virtual void untrackInvalidPack(class ResourceLocation const&); // NOLINT
    /**
     * @vftbl 49
     * @symbol
     * ?registerResourcePackRemovedCallback\@ResourcePackRepository\@\@UEAAXPEAXV?$function\@$$A6AXPEAVResourcePack\@\@\@Z\@std\@\@\@Z
     */
    virtual void registerResourcePackRemovedCallback(void*, class std::function<void(class ResourcePack*)>); // NOLINT
    /**
     * @vftbl 50
     * @symbol ?unregisterResourcePackRemovedCallback\@ResourcePackRepository\@\@UEAAXPEAX\@Z
     */
    virtual void unregisterResourcePackRemovedCallback(void*); // NOLINT
    /**
     * @vftbl 51
     * @symbol ?isInitialized\@ResourcePackRepository\@\@UEAA_NXZ
     */
    virtual bool isInitialized(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKREPOSITORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePackRepository(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ResourcePackRepository\@\@QEAA\@AEAVIMinecraftEventing\@\@AEAVPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VIContentAccessibilityProvider\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VFilePathManager\@Core\@\@\@Bedrock\@\@\@4\@AEAVPackSourceFactory\@\@_N\@Z
     */
    MCAPI ResourcePackRepository(
        class IMinecraftEventing&,
        class PackManifestFactory&,
        class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentAccessibilityProvider>> const&,
        class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const&,
        class PackSourceFactory&,
        bool
    ); // NOLINT
    /**
     * @symbol ?CHEMISTRY_PACK_UUID\@ResourcePackRepository\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const CHEMISTRY_PACK_UUID; // NOLINT
    /**
     * @symbol ?CHEMISTRY_SERVER_PACK_UUID\@ResourcePackRepository\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const CHEMISTRY_SERVER_PACK_UUID; // NOLINT

    // private:
    /**
     * @symbol
     * ?_detectKnownPacksChange\@ResourcePackRepository\@\@AEAAXAEAUKnownPackContainer\@1\@AEBU21\@W4KnownPackType\@\@\@Z
     */
    MCAPI void _detectKnownPacksChange(
        struct ResourcePackRepository::KnownPackContainer&,
        struct ResourcePackRepository::KnownPackContainer const&,
        enum class KnownPackType
    ); // NOLINT
    /**
     * @symbol ?_findVanillaPacks\@ResourcePackRepository\@\@AEAAXXZ
     */
    MCAPI void _findVanillaPacks(); // NOLINT
    /**
     * @symbol ?_initialize\@ResourcePackRepository\@\@AEAAXXZ
     */
    MCAPI void _initialize(); // NOLINT
    /**
     * @symbol ?_initializeCachedPackSource\@ResourcePackRepository\@\@AEAAXXZ
     */
    MCAPI void _initializeCachedPackSource(); // NOLINT
    /**
     * @symbol ?_initializePackSource\@ResourcePackRepository\@\@AEAAXXZ
     */
    MCAPI void _initializePackSource(); // NOLINT
    /**
     * @symbol ?_initializeWorldPackSource\@ResourcePackRepository\@\@AEAAXXZ
     */
    MCAPI void _initializeWorldPackSource(); // NOLINT
    /**
     * @symbol
     * ?_loadLastKnownUserPacks\@ResourcePackRepository\@\@AEAAXAEAUKnownPackContainer\@1\@W4KnownPackType\@\@\@Z
     */
    MCAPI void
    _loadLastKnownUserPacks(struct ResourcePackRepository::KnownPackContainer&, enum class KnownPackType); // NOLINT
    /**
     * @symbol ?_loadPacks\@ResourcePackRepository\@\@AEAAX_N\@Z
     */
    MCAPI void _loadPacks(bool); // NOLINT
    /**
     * @symbol ?_packExists\@ResourcePackRepository\@\@AEBA_NAEBVUUID\@mce\@\@AEBVSemVersion\@\@W4PackOrigin\@\@\@Z
     */
    MCAPI bool _packExists(class mce::UUID const&, class SemVersion const&, enum class PackOrigin) const; // NOLINT
    /**
     * @symbol ?_reloadUserPacks\@ResourcePackRepository\@\@AEAAXXZ
     */
    MCAPI void _reloadUserPacks(); // NOLINT
    /**
     * @symbol ?_removePack\@ResourcePackRepository\@\@AEAA_NAEBVResourceLocation\@\@_N\@Z
     */
    MCAPI bool _removePack(class ResourceLocation const&, bool); // NOLINT
    /**
     * @symbol ?_saveKnownUserPacks\@ResourcePackRepository\@\@AEAAXAEAUKnownPackContainer\@1\@W4KnownPackType\@\@\@Z
     */
    MCAPI void
    _saveKnownUserPacks(struct ResourcePackRepository::KnownPackContainer&, enum class KnownPackType); // NOLINT
    /**
     * @symbol ?_triggerRemoveResourcePackCallback\@ResourcePackRepository\@\@AEAAXPEAVResourcePack\@\@\@Z
     */
    MCAPI void _triggerRemoveResourcePackCallback(class ResourcePack*); // NOLINT

private:
};
