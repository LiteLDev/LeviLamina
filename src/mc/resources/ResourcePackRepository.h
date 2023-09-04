#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/PackType.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/KnownPackType.h"
#include "mc/resources/IResourcePackRepository.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FilePathManager; }
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class ResourcePackRepository : public ::IResourcePackRepository {
public:
    // ResourcePackRepository inner types declare
    // clang-format off
    struct KnownPackInfo;
    struct KnownPackContainer;
    // clang-format on

    // ResourcePackRepository inner types define
    struct KnownPackInfo {
    public:
        // prevent constructor by default
        KnownPackInfo() = delete;

    public:
        // NOLINTBEGIN
        // symbol: ??0KnownPackInfo@ResourcePackRepository@@QEAA@AEBU01@@Z
        MCAPI KnownPackInfo(struct ResourcePackRepository::KnownPackInfo const&);

        // symbol: ??4KnownPackInfo@ResourcePackRepository@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct ResourcePackRepository::KnownPackInfo&
        operator=(struct ResourcePackRepository::KnownPackInfo const&);

        // symbol: ??8KnownPackInfo@ResourcePackRepository@@QEBA_NAEBU01@@Z
        MCAPI bool operator==(struct ResourcePackRepository::KnownPackInfo const&) const;

        // symbol: ??1KnownPackInfo@ResourcePackRepository@@QEAA@XZ
        MCAPI ~KnownPackInfo();

        // NOLINTEND
    };

    struct KnownPackContainer {
    public:
        // prevent constructor by default
        KnownPackContainer& operator=(KnownPackContainer const&) = delete;
        KnownPackContainer(KnownPackContainer const&)            = delete;
        KnownPackContainer()                                     = delete;

    public:
        // NOLINTBEGIN
        // symbol: ?getPack@KnownPackContainer@ResourcePackRepository@@QEAAPEAUKnownPackInfo@2@AEBVResourceLocation@@@Z
        MCAPI struct ResourcePackRepository::KnownPackInfo* getPack(class ResourceLocation const&);

        // symbol: ?getPack@KnownPackContainer@ResourcePackRepository@@QEBAPEBUKnownPackInfo@2@AEBVResourceLocation@@@Z
        MCAPI struct ResourcePackRepository::KnownPackInfo const* getPack(class ResourceLocation const&) const;

        // symbol: ??1KnownPackContainer@ResourcePackRepository@@QEAA@XZ
        MCAPI ~KnownPackContainer();

        // NOLINTEND
    };

public:
    LLAPI void setCustomResourcePackPath(const std::string& path, PackType type);

    // prevent constructor by default
    ResourcePackRepository& operator=(ResourcePackRepository const&) = delete;
    ResourcePackRepository(ResourcePackRepository const&)            = delete;
    ResourcePackRepository()                                         = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?getResourcePacksByPackId@ResourcePackRepository@@UEBAXAEBV?$vector@UPackInstanceId@@V?$allocator@UPackInstanceId@@@std@@@std@@AEAV?$vector@VPackInstance@@V?$allocator@VPackInstance@@@std@@@3@@Z
    virtual void
    getResourcePacksByPackId(std::vector<struct PackInstanceId> const&, std::vector<class PackInstance>&) const;

    // vIndex: 2, symbol: ?getResourcePackForPackId@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
    virtual class ResourcePack* getResourcePackForPackId(struct PackIdVersion const&) const;

    // vIndex: 3, symbol: ?getResourcePackByUUID@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBVUUID@mce@@@Z
    virtual class ResourcePack* getResourcePackByUUID(class mce::UUID const&) const;

    // vIndex: 4, symbol:
    // ?getResourcePackForPackIdOwned@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
    virtual class ResourcePack* getResourcePackForPackIdOwned(struct PackIdVersion const&) const;

    // vIndex: 5, symbol:
    // ?getResourcePackSatisfiesPackId@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@_N@Z
    virtual class ResourcePack* getResourcePackSatisfiesPackId(struct PackIdVersion const&, bool) const;

    // vIndex: 6, symbol:
    // ?getResourcePackContainingModule@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
    virtual class ResourcePack* getResourcePackContainingModule(struct PackIdVersion const&) const;

    // vIndex: 7, symbol: ?getResourcePackInPath@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBVPath@Core@@@Z
    virtual class ResourcePack* getResourcePackInPath(class Core::Path const&) const;

    // vIndex: 8, symbol: ?isResourcePackLoaded@ResourcePackRepository@@UEAA_NAEBUPackIdVersion@@AEBW4PackOrigin@@@Z
    virtual bool isResourcePackLoaded(struct PackIdVersion const&, ::PackOrigin const&);

    // vIndex: 9, symbol: ?getPackLoadingReport@ResourcePackRepository@@UEBAPEBVPackSourceReport@@XZ
    virtual class PackSourceReport const* getPackLoadingReport() const;

    // vIndex: 10, symbol: ?getEditorPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
    virtual class ResourcePack* getEditorPack() const;

    // vIndex: 11, symbol: ?getVanillaPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
    virtual class ResourcePack* getVanillaPack() const;

    // vIndex: 12, symbol: ?getChemistryPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
    virtual class ResourcePack* getChemistryPack() const;

    // vIndex: 13, symbol: ?getChemistryServerPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
    virtual class ResourcePack* getChemistryServerPack() const;

    // vIndex: 14, symbol:
    // ?setServicePacks@ResourcePackRepository@@UEAA_NV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@@Z
    virtual bool setServicePacks(std::vector<struct PackIdVersion>);

    // vIndex: 15, symbol: ?addServicePacksToStack@ResourcePackRepository@@UEBAXAEAVResourcePackStack@@@Z
    virtual void addServicePacksToStack(class ResourcePackStack&) const;

    // vIndex: 16, symbol:
    // ?addCachedResourcePacks@ResourcePackRepository@@UEAAXPEBV?$unordered_map@VContentIdentity@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VContentIdentity@@@3@U?$equal_to@VContentIdentity@@@3@V?$allocator@U?$pair@$$CBVContentIdentity@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z
    virtual void addCachedResourcePacks(std::unordered_map<class ContentIdentity, std::string> const*);

    // vIndex: 17, symbol: ?addWorldResourcePacks@ResourcePackRepository@@UEAAXAEBVPath@Core@@@Z
    virtual void addWorldResourcePacks(class Core::Path const&);

    // vIndex: 18, symbol:
    // ?addPremiumWorldTemplateResourcePacks@ResourcePackRepository@@UEAAXAEBVPath@Core@@AEBVContentIdentity@@@Z
    virtual void addPremiumWorldTemplateResourcePacks(class Core::Path const&, class ContentIdentity const&);

    // vIndex: 19, symbol: ?removePacksLoadedFromCache@ResourcePackRepository@@UEAAXXZ
    virtual void removePacksLoadedFromCache();

    // vIndex: 20, symbol: ?removePacksLoadedFromWorld@ResourcePackRepository@@UEAAXXZ
    virtual void removePacksLoadedFromWorld();

    // vIndex: 21, symbol:
    // ?getResourcePacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getResourcePacksPath() const;

    // vIndex: 22, symbol:
    // ?getBehaviorPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getBehaviorPacksPath() const;

    // vIndex: 23, symbol:
    // ?getSkinPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getSkinPacksPath() const;

    // vIndex: 24, symbol:
    // ?getDevelopmentResourcePacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getDevelopmentResourcePacksPath() const;

    // vIndex: 25, symbol:
    // ?getDevelopmentBehaviorPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getDevelopmentBehaviorPacksPath() const;

    // vIndex: 26, symbol:
    // ?getDevelopmentSkinPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getDevelopmentSkinPacksPath() const;

    // vIndex: 27, symbol:
    // ?getTreatmentPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getTreatmentPacksPath() const;

    // vIndex: 28, symbol:
    // ?getKnownPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@W4KnownPackType@@@Z
    virtual class Core::PathBuffer<std::string> const getKnownPacksPath(::KnownPackType) const;

    // vIndex: 29, symbol:
    // ?getKnownValidPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getKnownValidPacksPath() const;

    // vIndex: 30, symbol:
    // ?getKnownInvalidPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getKnownInvalidPacksPath() const;

    // vIndex: 31, symbol: ?refreshPacks@ResourcePackRepository@@UEAAXXZ
    virtual void refreshPacks();

    // vIndex: 32, symbol: ?requestReloadUserPacks@ResourcePackRepository@@UEAAXXZ
    virtual void requestReloadUserPacks();

    // vIndex: 33, symbol: ?requestReloadDynamicPackagePacks@ResourcePackRepository@@UEAAXXZ
    virtual void requestReloadDynamicPackagePacks();

    // vIndex: 34, symbol:
    // ?getKeyProvider@ResourcePackRepository@@UEBA?AV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@XZ
    virtual gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> getKeyProvider() const;

    // vIndex: 35, symbol: ?getPackManifestFactory@ResourcePackRepository@@UEAAAEAVPackManifestFactory@@XZ
    virtual class PackManifestFactory& getPackManifestFactory();

    // vIndex: 36, symbol: ?getPackSettingsFactory@ResourcePackRepository@@UEBAAEAVPackSettingsFactory@@XZ
    virtual class PackSettingsFactory& getPackSettingsFactory() const;

    // vIndex: 37, symbol: ?getPackSourceFactory@ResourcePackRepository@@UEAAAEAVPackSourceFactory@@XZ
    virtual class PackSourceFactory& getPackSourceFactory();

    // vIndex: 38, symbol: ?getWorldPackSource@ResourcePackRepository@@UEBAPEBVCompositePackSource@@XZ
    virtual class CompositePackSource const* getWorldPackSource() const;

    // vIndex: 39, symbol:
    // ?getPacksByResourceLocation@ResourcePackRepository@@UEBA?AV?$vector@PEAVResourcePack@@V?$allocator@PEAVResourcePack@@@std@@@std@@W4PackOrigin@@@Z
    virtual std::vector<class ResourcePack*> getPacksByResourceLocation(::PackOrigin) const;

    // vIndex: 40, symbol:
    // ?getPacksByType@ResourcePackRepository@@UEBA?AV?$vector@PEAVResourcePack@@V?$allocator@PEAVResourcePack@@@std@@@std@@W4PackType@@@Z
    virtual std::vector<class ResourcePack*> getPacksByType(::PackType) const;

    // vIndex: 41, symbol: ?addKnownPackFromImport@ResourcePackRepository@@UEAAXAEBVPackManifest@@@Z
    virtual void addKnownPackFromImport(class PackManifest const&);

    // vIndex: 42, symbol: ?addInvalidPack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@W4PackType@@@Z
    virtual void addInvalidPack(class ResourceLocation const&, ::PackType);

    // vIndex: 43, symbol:
    // ?getInvalidPacks@ResourcePackRepository@@UEBAAEBV?$vector@VResourceLocation@@V?$allocator@VResourceLocation@@@std@@@std@@W4PackType@@@Z
    virtual std::vector<class ResourceLocation> const& getInvalidPacks(::PackType) const;

    // vIndex: 44, symbol:
    // ?getInvalidPacks@ResourcePackRepository@@UEBA?AV?$vector@VResourceLocation@@V?$allocator@VResourceLocation@@@std@@@std@@AEBUInvalidPacksFilterGroup@@@Z
    virtual std::vector<class ResourceLocation> getInvalidPacks(struct InvalidPacksFilterGroup const&) const;

    // vIndex: 45, symbol: ?deletePack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
    virtual void deletePack(class ResourceLocation const&);

    // vIndex: 46, symbol: ?deletePackFiles@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
    virtual void deletePackFiles(class ResourceLocation const&);

    // vIndex: 47, symbol: ?postDeletePack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
    virtual void postDeletePack(class ResourceLocation const&);

    // vIndex: 48, symbol: ?untrackInvalidPack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
    virtual void untrackInvalidPack(class ResourceLocation const&);

    // vIndex: 49, symbol:
    // ?registerResourcePackRemovedCallback@ResourcePackRepository@@UEAAXPEAXV?$function@$$A6AXPEAVResourcePack@@@Z@std@@@Z
    virtual void registerResourcePackRemovedCallback(void*, std::function<void(class ResourcePack*)>);

    // vIndex: 50, symbol: ?unregisterResourcePackRemovedCallback@ResourcePackRepository@@UEAAXPEAX@Z
    virtual void unregisterResourcePackRemovedCallback(void*);

    // vIndex: 51, symbol: ?isInitialized@ResourcePackRepository@@UEAA_NXZ
    virtual bool isInitialized();

    // symbol: ??1ResourcePackRepository@@UEAA@XZ
    MCVAPI ~ResourcePackRepository();

    // symbol:
    // ??0ResourcePackRepository@@QEAA@AEAVIMinecraftEventing@@AEAVPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@VIContentAccessibilityProvider@@@Bedrock@@@gsl@@AEBV?$not_null@V?$NonOwnerPointer@VFilePathManager@Core@@@Bedrock@@@4@AEAVPackSourceFactory@@_N@Z
    MCAPI ResourcePackRepository(
        class IMinecraftEventing&,
        class PackManifestFactory&,
        gsl::not_null<class Bedrock::NonOwnerPointer<class IContentAccessibilityProvider>> const&,
        gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const&,
        class PackSourceFactory&,
        bool
    );

    // symbol: ?CHEMISTRY_PACK_UUID@ResourcePackRepository@@2VUUID@mce@@B
    MCAPI static class mce::UUID const CHEMISTRY_PACK_UUID;

    // symbol: ?CHEMISTRY_SERVER_PACK_UUID@ResourcePackRepository@@2VUUID@mce@@B
    MCAPI static class mce::UUID const CHEMISTRY_SERVER_PACK_UUID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_detectKnownPacksChange@ResourcePackRepository@@AEAAXAEAUKnownPackContainer@1@AEBU21@W4KnownPackType@@@Z
    MCAPI void _detectKnownPacksChange(
        struct ResourcePackRepository::KnownPackContainer&,
        struct ResourcePackRepository::KnownPackContainer const&,
        ::KnownPackType
    );

    // symbol: ?_findVanillaPacks@ResourcePackRepository@@AEAAXXZ
    MCAPI void _findVanillaPacks();

    // symbol: ?_initialize@ResourcePackRepository@@AEAAXXZ
    MCAPI void _initialize();

    // symbol: ?_initializeCachedPackSource@ResourcePackRepository@@AEAAXXZ
    MCAPI void _initializeCachedPackSource();

    // symbol: ?_initializePackSource@ResourcePackRepository@@AEAAXXZ
    MCAPI void _initializePackSource();

    // symbol: ?_initializeWorldPackSource@ResourcePackRepository@@AEAAXXZ
    MCAPI void _initializeWorldPackSource();

    // symbol: ?_loadLastKnownUserPacks@ResourcePackRepository@@AEAAXAEAUKnownPackContainer@1@W4KnownPackType@@@Z
    MCAPI void _loadLastKnownUserPacks(struct ResourcePackRepository::KnownPackContainer&, ::KnownPackType);

    // symbol: ?_loadPacks@ResourcePackRepository@@AEAAX_N@Z
    MCAPI void _loadPacks(bool);

    // symbol: ?_packExists@ResourcePackRepository@@AEBA_NAEBVUUID@mce@@AEBVSemVersion@@W4PackOrigin@@@Z
    MCAPI bool _packExists(class mce::UUID const&, class SemVersion const&, ::PackOrigin) const;

    // symbol: ?_reloadUserPacks@ResourcePackRepository@@AEAAXXZ
    MCAPI void _reloadUserPacks();

    // symbol: ?_removePack@ResourcePackRepository@@AEAA_NAEBVResourceLocation@@_N@Z
    MCAPI bool _removePack(class ResourceLocation const&, bool);

    // symbol: ?_saveKnownUserPacks@ResourcePackRepository@@AEAAXAEAUKnownPackContainer@1@W4KnownPackType@@@Z
    MCAPI void _saveKnownUserPacks(struct ResourcePackRepository::KnownPackContainer&, ::KnownPackType);

    // symbol: ?_triggerRemoveResourcePackCallback@ResourcePackRepository@@AEAAXPEAVResourcePack@@@Z
    MCAPI void _triggerRemoveResourcePackCallback(class ResourcePack*);

    // NOLINTEND
};
