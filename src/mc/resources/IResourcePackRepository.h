#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/KnownPackType.h"

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
    // vIndex: 0
    virtual ~IResourcePackRepository();

    // vIndex: 1
    virtual void getResourcePacksByPackId(
        std::vector<struct PackInstanceId> const& packInstanceIds,
        std::vector<class PackInstance>&          result
    ) const = 0;

    // vIndex: 2
    virtual class ResourcePack* getResourcePackForPackId(struct PackIdVersion const& idAndVersion) const = 0;

    // vIndex: 3
    virtual class ResourcePack* getResourcePackByUUID(class mce::UUID const& id) const = 0;

    // vIndex: 4
    virtual class ResourcePack* getResourcePackForPackIdOwned(struct PackIdVersion const& idAndVersion) const = 0;

    // vIndex: 5
    virtual class ResourcePack*
    getResourcePackSatisfiesPackId(struct PackIdVersion const& idAndVersion, bool requireOwnership) const = 0;

    // vIndex: 6
    virtual class ResourcePack* getResourcePackContainingModule(struct PackIdVersion const& idAndVersion) const = 0;

    // vIndex: 7
    virtual class ResourcePack* getResourcePackInPath(class Core::Path const& path) const = 0;

    // vIndex: 8
    virtual bool isResourcePackLoaded(struct PackIdVersion const& identity, ::PackOrigin const& location) = 0;

    // vIndex: 9
    virtual class PackSourceReport const* getPackLoadingReport() const = 0;

    // vIndex: 10
    virtual class ResourcePack* getEditorPack() const = 0;

    // vIndex: 11
    virtual class ResourcePack* getVanillaPack() const = 0;

    // vIndex: 12
    virtual bool setServicePacks(std::vector<struct PackIdVersion> servicePackIds) = 0;

    // vIndex: 13
    virtual bool hasServicePacks(std::vector<struct PackIdVersion> const& servicePacksIds) const = 0;

    // vIndex: 14
    virtual std::vector<struct PackIdVersion> const& getServicePacks() const = 0;

    // vIndex: 15
    virtual void addServicePacksToStack(class ResourcePackStack& stack) const = 0;

    // vIndex: 16
    virtual void addCachedResourcePacks(std::unordered_map<class ContentIdentity, std::string> const* tempCacheKeys
    ) = 0;

    // vIndex: 17
    virtual void addWorldResourcePacks(class Core::Path const& levelPath) = 0;

    // vIndex: 18
    virtual void addPremiumWorldTemplateResourcePacks(
        class Core::Path const&      worldTemplatePath,
        class ContentIdentity const& premiumWorldIdentity
    ) = 0;

    // vIndex: 19
    virtual void removePacksLoadedFromCache() = 0;

    // vIndex: 20
    virtual void removePacksLoadedFromWorld() = 0;

    // vIndex: 21
    virtual class Core::PathBuffer<std::string> const getResourcePacksPath() const = 0;

    // vIndex: 22
    virtual class Core::PathBuffer<std::string> const getBehaviorPacksPath() const = 0;

    // vIndex: 23
    virtual class Core::PathBuffer<std::string> const getSkinPacksPath() const = 0;

    // vIndex: 24
    virtual class Core::PathBuffer<std::string> const getDevelopmentResourcePacksPath() const = 0;

    // vIndex: 25
    virtual class Core::PathBuffer<std::string> const getDevelopmentBehaviorPacksPath() const = 0;

    // vIndex: 26
    virtual class Core::PathBuffer<std::string> const getDevelopmentSkinPacksPath() const = 0;

    // vIndex: 27
    virtual class Core::PathBuffer<std::string> const getTreatmentPacksPath() const = 0;

    // vIndex: 28
    virtual class Core::PathBuffer<std::string> const getKnownPacksPath(::KnownPackType type) const = 0;

    // vIndex: 29
    virtual class Core::PathBuffer<std::string> const getKnownValidPacksPath() const = 0;

    // vIndex: 30
    virtual class Core::PathBuffer<std::string> const getKnownInvalidPacksPath() const = 0;

    // vIndex: 31
    virtual void refreshPacks() = 0;

    // vIndex: 32
    virtual void requestReloadUserPacks() = 0;

    // vIndex: 33
    virtual void requestReloadDynamicPackagePacks() = 0;

    // vIndex: 34
    virtual Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> getKeyProvider() const = 0;

    // vIndex: 35
    virtual class PackManifestFactory& getPackManifestFactory() = 0;

    // vIndex: 36
    virtual class PackSettingsFactory& getPackSettingsFactory() const = 0;

    // vIndex: 37
    virtual class PackSourceFactory& getPackSourceFactory() = 0;

    // vIndex: 38
    virtual class CompositePackSource const* getWorldPackSource() const = 0;

    // vIndex: 39
    virtual std::vector<class ResourcePack*> getPacksByResourceLocation(::PackOrigin type) const = 0;

    // vIndex: 40
    virtual std::vector<class ResourcePack*> getPacksByType(::PackType type) const = 0;

    // vIndex: 41
    virtual std::vector<class ResourcePack*> getPacksByCategory(::PackCategory category) const = 0;

    // vIndex: 42
    virtual void addKnownPackFromImport(class PackManifest const& pack) = 0;

    // vIndex: 43
    virtual void addInvalidPack(class ResourceLocation const& packLocation, ::PackType type) = 0;

    // vIndex: 44
    virtual std::vector<class ResourceLocation> const& getInvalidPacks(::PackType type) const = 0;

    // vIndex: 45
    virtual std::vector<class ResourceLocation> getInvalidPacks(struct InvalidPacksFilterGroup const& packTypes
    ) const = 0;

    // vIndex: 46
    virtual void deletePack(class ResourceLocation const& packLocation) = 0;

    // vIndex: 47
    virtual void deletePackFiles(class ResourceLocation const& packLocation) = 0;

    // vIndex: 48
    virtual void postDeletePack(class ResourceLocation const& packLocation) = 0;

    // vIndex: 49
    virtual void untrackInvalidPack(class ResourceLocation const& packLocation) = 0;

    // vIndex: 50
    virtual void registerResourcePackRemovedCallback(void* ptr, std::function<void(class ResourcePack*)> callback) = 0;

    // vIndex: 51
    virtual void unregisterResourcePackRemovedCallback(void* ptr) = 0;

    // vIndex: 52
    virtual bool isInitialized() = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
