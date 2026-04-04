#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/PackCategory.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class IContentSourceRepository;
class PackInstance;
class PackManifestFactory;
class PackSettingsFactory;
class PackSourceFactory;
class PackSourceReport;
class ResourceLocation;
class ResourcePack;
class ResourcePackStack;
struct InvalidPacksFilterGroup;
struct PackIdVersion;
struct PackInstanceId;
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class IResourcePackRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResourcePackRepository() /*override*/;

    virtual void getResourcePacksByPackId(
        ::std::vector<::PackInstanceId> const& packInstanceIds,
        ::std::vector<::PackInstance>&         result
    ) const = 0;

    virtual ::std::shared_ptr<::ResourcePack> getResourcePackForPackId(::PackIdVersion const& idAndVersion) const = 0;

    virtual ::ResourcePack* getResourcePackOfDifferentVersionForPackId(::PackIdVersion const& idAndVersion) const = 0;

    virtual ::ResourcePack*
    getResourcePackForPackIdInPath(::PackIdVersion const& idAndVersion, ::Core::Path const& fullPath) const = 0;

    virtual ::ResourcePack* getResourcePackByUUID(::mce::UUID const& id) const = 0;

    virtual ::ResourcePack* getResourcePackForPackIdOwned(::PackIdVersion const& idAndVersion) const = 0;

    virtual ::std::shared_ptr<::ResourcePack>
    getResourcePackSatisfiesPackId(::PackIdVersion const& idAndVersion, bool requireOwnership) const = 0;

    virtual ::ResourcePack* getResourcePackContainingModule(::PackIdVersion const& idAndVersion) const = 0;

    virtual ::Bedrock::Threading::Async<::std::shared_ptr<::ResourcePack>>
    getResourcePackInPath(::Core::Path const& path) const = 0;

    virtual bool isResourcePackLoaded(::PackIdVersion const& identity, ::PackOrigin const& location) = 0;

    virtual ::PackSourceReport const* getPackLoadingReport() const = 0;

    virtual ::std::shared_ptr<::ResourcePack> getEditorPack() const = 0;

    virtual ::std::shared_ptr<::ResourcePack> getVanillaPack() const = 0;

    virtual bool setServicePacks(::std::vector<::PackIdVersion> servicePackIds) = 0;

    virtual bool hasServicePacks(::std::vector<::PackIdVersion> const& servicePacksIds) const = 0;

    virtual ::std::vector<::PackIdVersion> const& getServicePacks() const = 0;

    virtual void addServicePacksToStack(::ResourcePackStack& stack) const = 0;

    virtual void
    addCachedResourcePacks(::std::unordered_map<::ContentIdentity, ::std::string> const* tempCacheKeys) = 0;

    virtual void addWorldResourcePacks(::Core::Path const& levelPath) = 0;

    virtual void addPremiumWorldTemplateResourcePacks(
        ::Core::Path const&      worldTemplatePath,
        ::ContentIdentity const& premiumWorldIdentity
    ) = 0;

    virtual void addWorldPackSource(::Core::Path const& levelPath) = 0;

    virtual void addPremiumWorldTemplatePackSource(
        ::Core::Path const&      worldTemplatePath,
        ::ContentIdentity const& premiumWorldIdentity
    ) = 0;

    virtual void addTempWorldTemplateResourcePacks(::mce::UUID const& worldTemplateUUID) = 0;

    virtual void removePacksLoadedFromCache() = 0;

    virtual void removePacksLoadedFromWorld() = 0;

    virtual ::Core::PathBuffer<::std::string> const getResourcePacksPath() const = 0;

    virtual ::Core::PathBuffer<::std::string> const getBehaviorPacksPath() const = 0;

    virtual ::Core::PathBuffer<::std::string> const getSkinPacksPath() const = 0;

    virtual ::Core::PathBuffer<::std::string> const getCustomSkinDirectoryPath() const = 0;

    virtual ::Core::PathBuffer<::std::string> const getDevelopmentResourcePacksPath() const = 0;

    virtual ::Core::PathBuffer<::std::string> const getDevelopmentBehaviorPacksPath() const = 0;

    virtual ::Core::PathBuffer<::std::string> const getDevelopmentSkinPacksPath() const = 0;

    virtual ::Core::PathBuffer<::std::string> const getTreatmentPacksPath() const = 0;

    virtual void refreshPacks() = 0;

    virtual ::Bedrock::Threading::Async<void> refreshPacksAsync() = 0;

    virtual void requestReloadUserPacks() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const = 0;

    virtual ::PackManifestFactory& getPackManifestFactory() = 0;

    virtual ::PackSettingsFactory& getPackSettingsFactory() const = 0;

    virtual ::PackSourceFactory& getPackSourceFactory() = 0;

    virtual ::std::vector<::ResourcePack*> getPacksByResourceLocation(::PackOrigin type) const = 0;

    virtual ::std::vector<::ResourcePack*> getPacksByType(::PackType type) const = 0;

    virtual ::std::vector<::gsl::not_null<::std::shared_ptr<::ResourcePack>>>
    getPacksByCategory(::PackCategory category) const = 0;

    virtual void forEachPack(::std::function<void(::ResourcePack const&)> const& callback) const = 0;

    virtual ::std::vector<::ResourceLocation> const& getInvalidPacks(::PackType type) const = 0;

    virtual ::std::vector<::ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const& packTypes) const = 0;

    virtual void deletePack(::ResourceLocation const& packLocation) = 0;

    virtual void deletePackFiles(::ResourceLocation const& packLocation) = 0;

    virtual void postDeletePack(::ResourceLocation const& packLocation) = 0;

    virtual void untrackInvalidPack(::ResourceLocation const& packLocation) = 0;

    virtual bool isInitialized() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> getContentSourceRepository() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
