#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/PackType.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/KnownPackType.h"
#include "mc/resources/IResourcePackRepository.h"
#include "mc/resources/PackCategory.h"
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
        KnownPackInfo();

    public:
        // NOLINTBEGIN
        MCAPI KnownPackInfo(struct ResourcePackRepository::KnownPackInfo const&);

        MCAPI struct ResourcePackRepository::KnownPackInfo&
        operator=(struct ResourcePackRepository::KnownPackInfo const&);

        MCAPI bool operator==(struct ResourcePackRepository::KnownPackInfo const& rhs) const;

        MCAPI ~KnownPackInfo();

        // NOLINTEND
    };

    struct KnownPackContainer {
    public:
        // prevent constructor by default
        KnownPackContainer& operator=(KnownPackContainer const&);
        KnownPackContainer(KnownPackContainer const&);
        KnownPackContainer();

    public:
        // NOLINTBEGIN
        MCAPI struct ResourcePackRepository::KnownPackInfo* getPack(class ResourceLocation const& packLocation);

        MCAPI ~KnownPackContainer();

        // NOLINTEND
    };

public:
    LLAPI void addCustomResourcePackPath(std::filesystem::path const& path, PackType type);

    // prevent constructor by default
    ResourcePackRepository& operator=(ResourcePackRepository const&);
    ResourcePackRepository(ResourcePackRepository const&);
    ResourcePackRepository();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackRepository();

    // vIndex: 1
    virtual void getResourcePacksByPackId(
        std::vector<struct PackInstanceId> const& packInstanceIds,
        std::vector<class PackInstance>&          result
    ) const;

    // vIndex: 2
    virtual class ResourcePack* getResourcePackForPackId(struct PackIdVersion const& idAndVersion) const;

    // vIndex: 3
    virtual class ResourcePack* getResourcePackByUUID(class mce::UUID const& id) const;

    // vIndex: 4
    virtual class ResourcePack* getResourcePackForPackIdOwned(struct PackIdVersion const& idAndVersion) const;

    // vIndex: 5
    virtual class ResourcePack*
    getResourcePackSatisfiesPackId(struct PackIdVersion const& idAndVersion, bool requireOwnership) const;

    // vIndex: 6
    virtual class ResourcePack* getResourcePackContainingModule(struct PackIdVersion const& idAndVersion) const;

    // vIndex: 7
    virtual class ResourcePack* getResourcePackInPath(class Core::Path const& path) const;

    // vIndex: 8
    virtual bool isResourcePackLoaded(struct PackIdVersion const& identity, ::PackOrigin const& location);

    // vIndex: 9
    virtual class PackSourceReport const* getPackLoadingReport() const;

    // vIndex: 10
    virtual class ResourcePack* getEditorPack() const;

    // vIndex: 11
    virtual class ResourcePack* getVanillaPack() const;

    // vIndex: 12
    virtual bool setServicePacks(std::vector<struct PackIdVersion>);

    // vIndex: 13
    virtual bool hasServicePacks(std::vector<struct PackIdVersion> const&) const;

    // vIndex: 14
    virtual std::vector<struct PackIdVersion> const& getServicePacks() const;

    // vIndex: 15
    virtual void addServicePacksToStack(class ResourcePackStack& stack) const;

    // vIndex: 16
    virtual void addCachedResourcePacks(std::unordered_map<class ContentIdentity, std::string> const* tempCacheKeys);

    // vIndex: 17
    virtual void addWorldResourcePacks(class Core::Path const& levelPath);

    // vIndex: 18
    virtual void addPremiumWorldTemplateResourcePacks(
        class Core::Path const&      worldTemplatePath,
        class ContentIdentity const& premiumWorldIdentity
    );

    // vIndex: 19
    virtual void removePacksLoadedFromCache();

    // vIndex: 20
    virtual void removePacksLoadedFromWorld();

    // vIndex: 21
    virtual class Core::PathBuffer<std::string> const getResourcePacksPath() const;

    // vIndex: 22
    virtual class Core::PathBuffer<std::string> const getBehaviorPacksPath() const;

    // vIndex: 23
    virtual class Core::PathBuffer<std::string> const getSkinPacksPath() const;

    // vIndex: 24
    virtual class Core::PathBuffer<std::string> const getDevelopmentResourcePacksPath() const;

    // vIndex: 25
    virtual class Core::PathBuffer<std::string> const getDevelopmentBehaviorPacksPath() const;

    // vIndex: 26
    virtual class Core::PathBuffer<std::string> const getDevelopmentSkinPacksPath() const;

    // vIndex: 27
    virtual class Core::PathBuffer<std::string> const getTreatmentPacksPath() const;

    // vIndex: 28
    virtual class Core::PathBuffer<std::string> const getKnownPacksPath(::KnownPackType) const;

    // vIndex: 29
    virtual class Core::PathBuffer<std::string> const getKnownValidPacksPath() const;

    // vIndex: 30
    virtual class Core::PathBuffer<std::string> const getKnownInvalidPacksPath() const;

    // vIndex: 31
    virtual void refreshPacks();

    // vIndex: 32
    virtual void requestReloadUserPacks();

    // vIndex: 33
    virtual void requestReloadDynamicPackagePacks();

    // vIndex: 34
    virtual Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> getKeyProvider() const;

    // vIndex: 35
    virtual class PackManifestFactory& getPackManifestFactory();

    // vIndex: 36
    virtual class PackSettingsFactory& getPackSettingsFactory() const;

    // vIndex: 37
    virtual class PackSourceFactory& getPackSourceFactory();

    // vIndex: 38
    virtual class CompositePackSource const* getWorldPackSource() const;

    // vIndex: 39
    virtual std::vector<class ResourcePack*> getPacksByResourceLocation(::PackOrigin type) const;

    // vIndex: 40
    virtual std::vector<class ResourcePack*> getPacksByType(::PackType type) const;

    // vIndex: 41
    virtual std::vector<class ResourcePack*> getPacksByCategory(::PackCategory) const;

    // vIndex: 42
    virtual void addKnownPackFromImport(class PackManifest const& pack);

    // vIndex: 43
    virtual void addInvalidPack(class ResourceLocation const& packLocation, ::PackType type);

    // vIndex: 44
    virtual std::vector<class ResourceLocation> const& getInvalidPacks(::PackType type) const;

    // vIndex: 45
    virtual std::vector<class ResourceLocation> getInvalidPacks(struct InvalidPacksFilterGroup const& packTypes) const;

    // vIndex: 46
    virtual void deletePack(class ResourceLocation const& packLocation);

    // vIndex: 47
    virtual void deletePackFiles(class ResourceLocation const& packLocation);

    // vIndex: 48
    virtual void postDeletePack(class ResourceLocation const& packLocation);

    // vIndex: 49
    virtual void untrackInvalidPack(class ResourceLocation const& packLocation);

    // vIndex: 50
    virtual void registerResourcePackRemovedCallback(void* ptr, std::function<void(class ResourcePack*)> callback);

    // vIndex: 51
    virtual void unregisterResourcePackRemovedCallback(void* ptr);

    // vIndex: 52
    virtual bool isInitialized();

    MCAPI ResourcePackRepository(
        class IMinecraftEventing&                                               eventing,
        class PackManifestFactory&                                              manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentAccessibilityProvider> const& contentAccessibility,
        Bedrock::NotNullNonOwnerPtr<class Core::FilePathManager> const&         pathManager,
        class PackSourceFactory&                                                packSourceFactory,
        bool                                                                    initAsync
    );

    MCAPI static std::set<class mce::UUID> CHEMISTRY_PACK_UUIDS;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _detectKnownPacksChange(
        struct ResourcePackRepository::KnownPackContainer&       knownPackLocations,
        struct ResourcePackRepository::KnownPackContainer const& lastKnownPackLocations,
        ::KnownPackType                                          type
    );

    MCAPI void _findVanillaPacks();

    MCAPI void _initialize();

    MCAPI void _initializeCachedPackSource();

    MCAPI void _initializePackSource();

    MCAPI void _initializeWorldPackSource();

    MCAPI void _loadLastKnownUserPacks(
        struct ResourcePackRepository::KnownPackContainer& lastKnownPackLocations,
        ::KnownPackType                                    type
    );

    MCAPI void _loadPacks(bool updateKnownUserPacksTracking);

    MCAPI bool _packExists(class mce::UUID const& packId, class SemVersion const& version, ::PackOrigin origin) const;

    MCAPI void _reloadDynamicPackagePacks();

    MCAPI void _reloadUserPacks();

    MCAPI bool _removePack(class ResourceLocation const& packLocation, bool unregisterDeleteCallback);

    MCAPI void
    _saveKnownUserPacks(struct ResourcePackRepository::KnownPackContainer& knownPackLocations, ::KnownPackType type);

    MCAPI void _triggerRemoveResourcePackCallback(class ResourcePack* resourcePack);

    // NOLINTEND
};
