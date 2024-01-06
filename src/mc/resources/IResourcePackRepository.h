#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/KnownPackType.h"
#include "mc/resources/PackCategory.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class IResourcePackRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IResourcePackRepository& operator=(IResourcePackRepository const&);
    IResourcePackRepository(IResourcePackRepository const&);
    IResourcePackRepository();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IResourcePackRepository@@UEAA@XZ
    virtual ~IResourcePackRepository();

    // vIndex: 1, symbol:
    // ?getResourcePacksByPackId@ResourcePackRepository@@UEBAXAEBV?$vector@UPackInstanceId@@V?$allocator@UPackInstanceId@@@std@@@std@@AEAV?$vector@VPackInstance@@V?$allocator@VPackInstance@@@std@@@3@@Z
    virtual void getResourcePacksByPackId(
        std::vector<struct PackInstanceId> const& packInstanceIds,
        std::vector<class PackInstance>&          result
    ) const = 0;

    // vIndex: 2, symbol: ?getResourcePackForPackId@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
    virtual class ResourcePack* getResourcePackForPackId(struct PackIdVersion const& idAndVersion) const = 0;

    // vIndex: 3, symbol: ?getResourcePackByUUID@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBVUUID@mce@@@Z
    virtual class ResourcePack* getResourcePackByUUID(class mce::UUID const& id) const = 0;

    // vIndex: 4, symbol:
    // ?getResourcePackForPackIdOwned@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
    virtual class ResourcePack* getResourcePackForPackIdOwned(struct PackIdVersion const& idAndVersion) const = 0;

    // vIndex: 5, symbol:
    // ?getResourcePackSatisfiesPackId@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@_N@Z
    virtual class ResourcePack*
    getResourcePackSatisfiesPackId(struct PackIdVersion const& idAndVersion, bool requireOwnership) const = 0;

    // vIndex: 6, symbol:
    // ?getResourcePackContainingModule@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
    virtual class ResourcePack* getResourcePackContainingModule(struct PackIdVersion const& idAndVersion) const = 0;

    // vIndex: 7, symbol: ?getResourcePackInPath@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBVPath@Core@@@Z
    virtual class ResourcePack* getResourcePackInPath(class Core::Path const& path) const = 0;

    // vIndex: 8, symbol: ?isResourcePackLoaded@ResourcePackRepository@@UEAA_NAEBUPackIdVersion@@AEBW4PackOrigin@@@Z
    virtual bool isResourcePackLoaded(struct PackIdVersion const& identity, ::PackOrigin const& location) = 0;

    // vIndex: 9, symbol: ?getPackLoadingReport@ResourcePackRepository@@UEBAPEBVPackSourceReport@@XZ
    virtual class PackSourceReport const* getPackLoadingReport() const = 0;

    // vIndex: 10, symbol: ?getEditorPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
    virtual class ResourcePack* getEditorPack() const = 0;

    // vIndex: 11, symbol: ?getVanillaPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
    virtual class ResourcePack* getVanillaPack() const = 0;

    // vIndex: 12, symbol:
    // ?setServicePacks@ResourcePackRepository@@UEAA_NV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@@Z
    virtual bool setServicePacks(std::vector<struct PackIdVersion>) = 0;

    // vIndex: 13, symbol:
    // ?hasServicePacks@ResourcePackRepository@@UEBA_NAEBV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@@Z
    virtual bool hasServicePacks(std::vector<struct PackIdVersion> const&) const = 0;

    // vIndex: 14, symbol:
    // ?getServicePacks@ResourcePackRepository@@UEBAAEBV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@XZ
    virtual std::vector<struct PackIdVersion> const& getServicePacks() const = 0;

    // vIndex: 15, symbol: ?addServicePacksToStack@ResourcePackRepository@@UEBAXAEAVResourcePackStack@@@Z
    virtual void addServicePacksToStack(class ResourcePackStack& stack) const = 0;

    // vIndex: 16, symbol:
    // ?addCachedResourcePacks@ResourcePackRepository@@UEAAXPEBV?$unordered_map@VContentIdentity@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VContentIdentity@@@3@U?$equal_to@VContentIdentity@@@3@V?$allocator@U?$pair@$$CBVContentIdentity@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z
    virtual void addCachedResourcePacks(std::unordered_map<class ContentIdentity, std::string> const* tempCacheKeys
    ) = 0;

    // vIndex: 17, symbol: ?addWorldResourcePacks@ResourcePackRepository@@UEAAXAEBVPath@Core@@@Z
    virtual void addWorldResourcePacks(class Core::Path const& levelPath) = 0;

    // vIndex: 18, symbol:
    // ?addPremiumWorldTemplateResourcePacks@ResourcePackRepository@@UEAAXAEBVPath@Core@@AEBVContentIdentity@@@Z
    virtual void addPremiumWorldTemplateResourcePacks(
        class Core::Path const&      worldTemplatePath,
        class ContentIdentity const& premiumWorldIdentity
    ) = 0;

    // vIndex: 19, symbol: ?removePacksLoadedFromCache@ResourcePackRepository@@UEAAXXZ
    virtual void removePacksLoadedFromCache() = 0;

    // vIndex: 20, symbol: ?removePacksLoadedFromWorld@ResourcePackRepository@@UEAAXXZ
    virtual void removePacksLoadedFromWorld() = 0;

    // vIndex: 21, symbol:
    // ?getResourcePacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getResourcePacksPath() const = 0;

    // vIndex: 22, symbol:
    // ?getBehaviorPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getBehaviorPacksPath() const = 0;

    // vIndex: 23, symbol:
    // ?getSkinPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getSkinPacksPath() const = 0;

    // vIndex: 24, symbol:
    // ?getDevelopmentResourcePacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getDevelopmentResourcePacksPath() const = 0;

    // vIndex: 25, symbol:
    // ?getDevelopmentBehaviorPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getDevelopmentBehaviorPacksPath() const = 0;

    // vIndex: 26, symbol:
    // ?getDevelopmentSkinPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getDevelopmentSkinPacksPath() const = 0;

    // vIndex: 27, symbol:
    // ?getTreatmentPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getTreatmentPacksPath() const = 0;

    // vIndex: 28, symbol:
    // ?getKnownPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@W4KnownPackType@@@Z
    virtual class Core::PathBuffer<std::string> const getKnownPacksPath(::KnownPackType) const = 0;

    // vIndex: 29, symbol:
    // ?getKnownValidPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getKnownValidPacksPath() const = 0;

    // vIndex: 30, symbol:
    // ?getKnownInvalidPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getKnownInvalidPacksPath() const = 0;

    // vIndex: 31, symbol: ?refreshPacks@ResourcePackRepository@@UEAAXXZ
    virtual void refreshPacks() = 0;

    // vIndex: 32, symbol: ?requestReloadUserPacks@ResourcePackRepository@@UEAAXXZ
    virtual void requestReloadUserPacks() = 0;

    // vIndex: 33, symbol: ?requestReloadDynamicPackagePacks@ResourcePackRepository@@UEAAXXZ
    virtual void requestReloadDynamicPackagePacks() = 0;

    // vIndex: 34, symbol:
    // ?getKeyProvider@ResourcePackRepository@@UEBA?AV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@XZ
    virtual Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> getKeyProvider() const = 0;

    // vIndex: 35, symbol: ?getPackManifestFactory@ResourcePackRepository@@UEAAAEAVPackManifestFactory@@XZ
    virtual class PackManifestFactory& getPackManifestFactory() = 0;

    // vIndex: 36, symbol: ?getPackSettingsFactory@ResourcePackRepository@@UEBAAEAVPackSettingsFactory@@XZ
    virtual class PackSettingsFactory& getPackSettingsFactory() const = 0;

    // vIndex: 37, symbol: ?getPackSourceFactory@ResourcePackRepository@@UEAAAEAVPackSourceFactory@@XZ
    virtual class PackSourceFactory& getPackSourceFactory() = 0;

    // vIndex: 38, symbol: ?getWorldPackSource@ResourcePackRepository@@UEBAPEBVCompositePackSource@@XZ
    virtual class CompositePackSource const* getWorldPackSource() const = 0;

    // vIndex: 39, symbol:
    // ?getPacksByResourceLocation@ResourcePackRepository@@UEBA?AV?$vector@PEAVResourcePack@@V?$allocator@PEAVResourcePack@@@std@@@std@@W4PackOrigin@@@Z
    virtual std::vector<class ResourcePack*> getPacksByResourceLocation(::PackOrigin type) const = 0;

    // vIndex: 40, symbol:
    // ?getPacksByType@ResourcePackRepository@@UEBA?AV?$vector@PEAVResourcePack@@V?$allocator@PEAVResourcePack@@@std@@@std@@W4PackType@@@Z
    virtual std::vector<class ResourcePack*> getPacksByType(::PackType type) const = 0;

    // vIndex: 41, symbol:
    // ?getPacksByCategory@ResourcePackRepository@@UEBA?AV?$vector@PEAVResourcePack@@V?$allocator@PEAVResourcePack@@@std@@@std@@W4PackCategory@@@Z
    virtual std::vector<class ResourcePack*> getPacksByCategory(::PackCategory) const = 0;

    // vIndex: 42, symbol: ?addKnownPackFromImport@ResourcePackRepository@@UEAAXAEBVPackManifest@@@Z
    virtual void addKnownPackFromImport(class PackManifest const& pack) = 0;

    // vIndex: 43, symbol: ?addInvalidPack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@W4PackType@@@Z
    virtual void addInvalidPack(class ResourceLocation const& packLocation, ::PackType type) = 0;

    // vIndex: 44, symbol:
    // ?getInvalidPacks@ResourcePackRepository@@UEBAAEBV?$vector@VResourceLocation@@V?$allocator@VResourceLocation@@@std@@@std@@W4PackType@@@Z
    virtual std::vector<class ResourceLocation> const& getInvalidPacks(::PackType type) const = 0;

    // vIndex: 45, symbol:
    // ?getInvalidPacks@ResourcePackRepository@@UEBA?AV?$vector@VResourceLocation@@V?$allocator@VResourceLocation@@@std@@@std@@AEBUInvalidPacksFilterGroup@@@Z
    virtual std::vector<class ResourceLocation> getInvalidPacks(struct InvalidPacksFilterGroup const& packTypes
    ) const = 0;

    // vIndex: 46, symbol: ?deletePack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
    virtual void deletePack(class ResourceLocation const& packLocation) = 0;

    // vIndex: 47, symbol: ?deletePackFiles@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
    virtual void deletePackFiles(class ResourceLocation const& packLocation) = 0;

    // vIndex: 48, symbol: ?postDeletePack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
    virtual void postDeletePack(class ResourceLocation const& packLocation) = 0;

    // vIndex: 49, symbol: ?untrackInvalidPack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
    virtual void untrackInvalidPack(class ResourceLocation const& packLocation) = 0;

    // vIndex: 50, symbol:
    // ?registerResourcePackRemovedCallback@ResourcePackRepository@@UEAAXPEAXV?$function@$$A6AXPEAVResourcePack@@@Z@std@@@Z
    virtual void registerResourcePackRemovedCallback(void* ptr, std::function<void(class ResourcePack*)> callback) = 0;

    // vIndex: 51, symbol: ?unregisterResourcePackRemovedCallback@ResourcePackRepository@@UEAAXPEAX@Z
    virtual void unregisterResourcePackRemovedCallback(void* ptr) = 0;

    // vIndex: 52, symbol: ?isInitialized@ResourcePackRepository@@UEAA_NXZ
    virtual bool isInitialized() = 0;

    // NOLINTEND
};
